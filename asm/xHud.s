.include "macros.inc"
.file "xHud.cpp"

# 0x8002D98C - 0x8002EE24
.text
.balign 4

# xhud::block_allocator::flush_all()
.fn flush_all__Q24xhud15block_allocatorFv, global
/* 8002D98C 0002AA6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D990 0002AA70  7C 08 02 A6 */	mflr r0
/* 8002D994 0002AA74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D998 0002AA78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002D99C 0002AA7C  83 ED 89 98 */	lwz r31, _head_alloc__Q24xhud15block_allocator@sda21(r13)
/* 8002D9A0 0002AA80  48 00 00 10 */	b .L_8002D9B0
.L_8002D9A4:
/* 8002D9A4 0002AA84  7F E3 FB 78 */	mr r3, r31
/* 8002D9A8 0002AA88  48 00 01 4D */	bl flush__Q24xhud15block_allocatorFv
/* 8002D9AC 0002AA8C  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_8002D9B0:
/* 8002D9B0 0002AA90  28 1F 00 00 */	cmplwi r31, 0x0
/* 8002D9B4 0002AA94  40 82 FF F0 */	bne .L_8002D9A4
/* 8002D9B8 0002AA98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D9BC 0002AA9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002D9C0 0002AAA0  7C 08 03 A6 */	mtlr r0
/* 8002D9C4 0002AAA4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D9C8 0002AAA8  4E 80 00 20 */	blr
.endfn flush_all__Q24xhud15block_allocatorFv

# xhud::block_allocator::block_allocator(unsigned int, unsigned int)
.fn __ct__Q24xhud15block_allocatorFUiUi, global
/* 8002D9CC 0002AAAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D9D0 0002AAB0  7C 08 02 A6 */	mflr r0
/* 8002D9D4 0002AAB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D9D8 0002AAB8  38 04 00 03 */	addi r0, r4, 0x3
/* 8002D9DC 0002AABC  54 04 00 3A */	clrrwi r4, r0, 2
/* 8002D9E0 0002AAC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002D9E4 0002AAC4  38 84 00 04 */	addi r4, r4, 0x4
/* 8002D9E8 0002AAC8  38 00 00 00 */	li r0, 0x0
/* 8002D9EC 0002AACC  7C 7F 1B 78 */	mr r31, r3
/* 8002D9F0 0002AAD0  90 83 00 00 */	stw r4, 0x0(r3)
/* 8002D9F4 0002AAD4  7C A4 2B 78 */	mr r4, r5
/* 8002D9F8 0002AAD8  90 03 00 08 */	stw r0, 0x8(r3)
/* 8002D9FC 0002AADC  80 0D 89 98 */	lwz r0, _head_alloc__Q24xhud15block_allocator@sda21(r13)
/* 8002DA00 0002AAE0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8002DA04 0002AAE4  93 ED 89 98 */	stw r31, _head_alloc__Q24xhud15block_allocator@sda21(r13)
/* 8002DA08 0002AAE8  48 00 00 1D */	bl set_increment__Q24xhud15block_allocatorFUi
/* 8002DA0C 0002AAEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DA10 0002AAF0  7F E3 FB 78 */	mr r3, r31
/* 8002DA14 0002AAF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002DA18 0002AAF8  7C 08 03 A6 */	mtlr r0
/* 8002DA1C 0002AAFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DA20 0002AB00  4E 80 00 20 */	blr
.endfn __ct__Q24xhud15block_allocatorFUiUi

# xhud::block_allocator::set_increment(unsigned int)
.fn set_increment__Q24xhud15block_allocatorFUi, global
/* 8002DA24 0002AB04  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8002DA28 0002AB08  7C 00 21 D6 */	mullw r0, r0, r4
/* 8002DA2C 0002AB0C  90 03 00 04 */	stw r0, 0x4(r3)
/* 8002DA30 0002AB10  4E 80 00 20 */	blr
.endfn set_increment__Q24xhud15block_allocatorFUi

# xhud::block_allocator::size_reserve(unsigned int)
.fn size_reserve__Q24xhud15block_allocatorFUi, global
/* 8002DA34 0002AB14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DA38 0002AB18  7C 08 02 A6 */	mflr r0
/* 8002DA3C 0002AB1C  38 A0 00 00 */	li r5, 0x0
/* 8002DA40 0002AB20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DA44 0002AB24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002DA48 0002AB28  7C 9F 23 78 */	mr r31, r4
/* 8002DA4C 0002AB2C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002DA50 0002AB30  7C 7E 1B 78 */	mr r30, r3
/* 8002DA54 0002AB34  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8002DA58 0002AB38  48 00 5E E9 */	bl xMemAlloc__FUiUii
/* 8002DA5C 0002AB3C  7C 83 FA 14 */	add r4, r3, r31
/* 8002DA60 0002AB40  48 00 00 18 */	b .L_8002DA78
.L_8002DA64:
/* 8002DA64 0002AB44  80 1E 00 08 */	lwz r0, 0x8(r30)
/* 8002DA68 0002AB48  90 03 00 00 */	stw r0, 0x0(r3)
/* 8002DA6C 0002AB4C  90 7E 00 08 */	stw r3, 0x8(r30)
/* 8002DA70 0002AB50  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 8002DA74 0002AB54  7C 63 02 14 */	add r3, r3, r0
.L_8002DA78:
/* 8002DA78 0002AB58  7C 03 20 40 */	cmplw r3, r4
/* 8002DA7C 0002AB5C  41 80 FF E8 */	blt .L_8002DA64
/* 8002DA80 0002AB60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DA84 0002AB64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002DA88 0002AB68  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002DA8C 0002AB6C  7C 08 03 A6 */	mtlr r0
/* 8002DA90 0002AB70  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DA94 0002AB74  4E 80 00 20 */	blr
.endfn size_reserve__Q24xhud15block_allocatorFUi

# xhud::block_allocator::alloc()
.fn alloc__Q24xhud15block_allocatorFv, global
/* 8002DA98 0002AB78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DA9C 0002AB7C  7C 08 02 A6 */	mflr r0
/* 8002DAA0 0002AB80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DAA4 0002AB84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002DAA8 0002AB88  7C 7F 1B 78 */	mr r31, r3
/* 8002DAAC 0002AB8C  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8002DAB0 0002AB90  28 00 00 00 */	cmplwi r0, 0x0
/* 8002DAB4 0002AB94  40 82 00 0C */	bne .L_8002DAC0
/* 8002DAB8 0002AB98  80 9F 00 04 */	lwz r4, 0x4(r31)
/* 8002DABC 0002AB9C  4B FF FF 79 */	bl size_reserve__Q24xhud15block_allocatorFUi
.L_8002DAC0:
/* 8002DAC0 0002ABA0  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 8002DAC4 0002ABA4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8002DAC8 0002ABA8  38 63 00 04 */	addi r3, r3, 0x4
/* 8002DACC 0002ABAC  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8002DAD0 0002ABB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002DAD4 0002ABB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DAD8 0002ABB8  7C 08 03 A6 */	mtlr r0
/* 8002DADC 0002ABBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DAE0 0002ABC0  4E 80 00 20 */	blr
.endfn alloc__Q24xhud15block_allocatorFv

# xhud::block_allocator::free(void*)
.fn free__Q24xhud15block_allocatorFPv, global
/* 8002DAE4 0002ABC4  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8002DAE8 0002ABC8  94 04 FF FC */	stwu r0, -0x4(r4)
/* 8002DAEC 0002ABCC  90 83 00 08 */	stw r4, 0x8(r3)
/* 8002DAF0 0002ABD0  4E 80 00 20 */	blr
.endfn free__Q24xhud15block_allocatorFPv

# xhud::block_allocator::flush()
.fn flush__Q24xhud15block_allocatorFv, global
/* 8002DAF4 0002ABD4  38 00 00 00 */	li r0, 0x0
/* 8002DAF8 0002ABD8  90 03 00 08 */	stw r0, 0x8(r3)
/* 8002DAFC 0002ABDC  4E 80 00 20 */	blr
.endfn flush__Q24xhud15block_allocatorFv

# xhud::widget::motive_allocator()
.fn motive_allocator__Q24xhud6widgetFv, global
/* 8002DB00 0002ABE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DB04 0002ABE4  7C 08 02 A6 */	mflr r0
/* 8002DB08 0002ABE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DB0C 0002ABEC  88 0D 89 9D */	lbz r0, init$785@sda21(r13)
/* 8002DB10 0002ABF0  7C 00 07 75 */	extsb. r0, r0
/* 8002DB14 0002ABF4  40 82 00 20 */	bne .L_8002DB34
/* 8002DB18 0002ABF8  3C 60 80 2D */	lis r3, ba$784@ha
/* 8002DB1C 0002ABFC  38 80 00 28 */	li r4, 0x28
/* 8002DB20 0002AC00  38 63 87 60 */	addi r3, r3, ba$784@l
/* 8002DB24 0002AC04  38 A0 00 10 */	li r5, 0x10
/* 8002DB28 0002AC08  4B FF FE A5 */	bl __ct__Q24xhud15block_allocatorFUiUi
/* 8002DB2C 0002AC0C  38 00 00 01 */	li r0, 0x1
/* 8002DB30 0002AC10  98 0D 89 9D */	stb r0, init$785@sda21(r13)
.L_8002DB34:
/* 8002DB34 0002AC14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DB38 0002AC18  3C 60 80 2D */	lis r3, ba$784@ha
/* 8002DB3C 0002AC1C  38 63 87 60 */	addi r3, r3, ba$784@l
/* 8002DB40 0002AC20  7C 08 03 A6 */	mtlr r0
/* 8002DB44 0002AC24  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DB48 0002AC28  4E 80 00 20 */	blr
.endfn motive_allocator__Q24xhud6widgetFv

# xhud::init()
.fn init__4xhudFv, global
/* 8002DB4C 0002AC2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DB50 0002AC30  7C 08 02 A6 */	mflr r0
/* 8002DB54 0002AC34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DB58 0002AC38  88 0D 89 9C */	lbz r0, inited__4xhud@sda21(r13)
/* 8002DB5C 0002AC3C  28 00 00 00 */	cmplwi r0, 0x0
/* 8002DB60 0002AC40  40 82 00 10 */	bne .L_8002DB70
/* 8002DB64 0002AC44  38 00 00 01 */	li r0, 0x1
/* 8002DB68 0002AC48  98 0D 89 9C */	stb r0, inited__4xhud@sda21(r13)
/* 8002DB6C 0002AC4C  48 00 00 0C */	b .L_8002DB78
.L_8002DB70:
/* 8002DB70 0002AC50  38 60 00 01 */	li r3, 0x1
/* 8002DB74 0002AC54  48 00 08 59 */	bl disable_all__Q24xhud6widgetFb
.L_8002DB78:
/* 8002DB78 0002AC58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DB7C 0002AC5C  7C 08 03 A6 */	mtlr r0
/* 8002DB80 0002AC60  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DB84 0002AC64  4E 80 00 20 */	blr
.endfn init__4xhudFv

# xhud::setup()
.fn setup__4xhudFv, global
/* 8002DB88 0002AC68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DB8C 0002AC6C  7C 08 02 A6 */	mflr r0
/* 8002DB90 0002AC70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DB94 0002AC74  48 00 08 AD */	bl setup_all__Q24xhud6widgetFv
/* 8002DB98 0002AC78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DB9C 0002AC7C  7C 08 03 A6 */	mtlr r0
/* 8002DBA0 0002AC80  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DBA4 0002AC84  4E 80 00 20 */	blr
.endfn setup__4xhudFv

# xhud::destroy()
.fn destroy__4xhudFv, global
/* 8002DBA8 0002AC88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DBAC 0002AC8C  7C 08 02 A6 */	mflr r0
/* 8002DBB0 0002AC90  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8002DBB4 0002AC94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DBB8 0002AC98  38 63 2E E8 */	addi r3, r3, "@stringBase0"@l
/* 8002DBBC 0002AC9C  4B FE 82 E5 */	bl xDebugRemoveTweak__FPCc
/* 8002DBC0 0002ACA0  38 60 00 01 */	li r3, 0x1
/* 8002DBC4 0002ACA4  48 00 08 09 */	bl disable_all__Q24xhud6widgetFb
/* 8002DBC8 0002ACA8  4B FF FD C5 */	bl flush_all__Q24xhud15block_allocatorFv
/* 8002DBCC 0002ACAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DBD0 0002ACB0  7C 08 03 A6 */	mtlr r0
/* 8002DBD4 0002ACB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DBD8 0002ACB8  4E 80 00 20 */	blr
.endfn destroy__4xhudFv

# xhud::update(float)
.fn update__4xhudFf, global
/* 8002DBDC 0002ACBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DBE0 0002ACC0  7C 08 02 A6 */	mflr r0
/* 8002DBE4 0002ACC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DBE8 0002ACC8  48 00 08 C1 */	bl update_all__Q24xhud6widgetFf
/* 8002DBEC 0002ACCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DBF0 0002ACD0  7C 08 03 A6 */	mtlr r0
/* 8002DBF4 0002ACD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DBF8 0002ACD8  4E 80 00 20 */	blr
.endfn update__4xhudFf

# xhud::render()
.fn render__4xhudFv, global
/* 8002DBFC 0002ACDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DC00 0002ACE0  7C 08 02 A6 */	mflr r0
/* 8002DC04 0002ACE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DC08 0002ACE8  88 0D 89 9C */	lbz r0, inited__4xhud@sda21(r13)
/* 8002DC0C 0002ACEC  28 00 00 00 */	cmplwi r0, 0x0
/* 8002DC10 0002ACF0  41 82 00 08 */	beq .L_8002DC18
/* 8002DC14 0002ACF4  48 00 09 05 */	bl render_all__Q24xhud6widgetFv
.L_8002DC18:
/* 8002DC18 0002ACF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DC1C 0002ACFC  7C 08 03 A6 */	mtlr r0
/* 8002DC20 0002AD00  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DC24 0002AD04  4E 80 00 20 */	blr
.endfn render__4xhudFv

# xhud::widget::widget(const xhud::asset&)
.fn __ct__Q24xhud6widgetFRCQ24xhud5asset, global
/* 8002DC28 0002AD08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DC2C 0002AD0C  7C 08 02 A6 */	mflr r0
/* 8002DC30 0002AD10  3C A0 80 28 */	lis r5, __vt__Q24xhud6widget@ha
/* 8002DC34 0002AD14  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DC38 0002AD18  38 05 D6 18 */	addi r0, r5, __vt__Q24xhud6widget@l
/* 8002DC3C 0002AD1C  38 A0 00 00 */	li r5, 0x0
/* 8002DC40 0002AD20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002DC44 0002AD24  7C 9F 23 78 */	mr r31, r4
/* 8002DC48 0002AD28  38 9F 00 10 */	addi r4, r31, 0x10
/* 8002DC4C 0002AD2C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002DC50 0002AD30  7C 7E 1B 78 */	mr r30, r3
/* 8002DC54 0002AD34  90 03 00 74 */	stw r0, 0x74(r3)
/* 8002DC58 0002AD38  38 00 00 01 */	li r0, 0x1
/* 8002DC5C 0002AD3C  38 7E 00 04 */	addi r3, r30, 0x4
/* 8002DC60 0002AD40  93 FE 00 6C */	stw r31, 0x6c(r30)
/* 8002DC64 0002AD44  90 BE 00 78 */	stw r5, 0x78(r30)
/* 8002DC68 0002AD48  90 BE 00 7C */	stw r5, 0x7c(r30)
/* 8002DC6C 0002AD4C  90 BE 00 80 */	stw r5, 0x80(r30)
/* 8002DC70 0002AD50  98 1E 00 00 */	stb r0, 0x0(r30)
/* 8002DC74 0002AD54  98 BE 00 01 */	stb r5, 0x1(r30)
/* 8002DC78 0002AD58  4B FD D5 ED */	bl __as__5xVec3FRC5xVec3
/* 8002DC7C 0002AD5C  38 7E 00 10 */	addi r3, r30, 0x10
/* 8002DC80 0002AD60  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8002DC84 0002AD64  4B FD D5 E1 */	bl __as__5xVec3FRC5xVec3
/* 8002DC88 0002AD68  C0 02 83 D8 */	lfs f0, "@857"@sda21(r2)
/* 8002DC8C 0002AD6C  38 7E 00 38 */	addi r3, r30, 0x38
/* 8002DC90 0002AD70  38 9E 00 04 */	addi r4, r30, 0x4
/* 8002DC94 0002AD74  D0 1E 00 34 */	stfs f0, 0x34(r30)
/* 8002DC98 0002AD78  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 8002DC9C 0002AD7C  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 8002DCA0 0002AD80  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 8002DCA4 0002AD84  48 00 00 21 */	bl __as__Q24xhud14render_contextFRCQ24xhud14render_context
/* 8002DCA8 0002AD88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DCAC 0002AD8C  7F C3 F3 78 */	mr r3, r30
/* 8002DCB0 0002AD90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002DCB4 0002AD94  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002DCB8 0002AD98  7C 08 03 A6 */	mtlr r0
/* 8002DCBC 0002AD9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DCC0 0002ADA0  4E 80 00 20 */	blr
.endfn __ct__Q24xhud6widgetFRCQ24xhud5asset

# xhud::render_context::operator=(const xhud::render_context&)
.fn __as__Q24xhud14render_contextFRCQ24xhud14render_context, weak
/* 8002DCC4 0002ADA4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8002DCC8 0002ADA8  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 8002DCCC 0002ADAC  90 03 00 00 */	stw r0, 0x0(r3)
/* 8002DCD0 0002ADB0  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8002DCD4 0002ADB4  90 A3 00 04 */	stw r5, 0x4(r3)
/* 8002DCD8 0002ADB8  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 8002DCDC 0002ADBC  90 03 00 08 */	stw r0, 0x8(r3)
/* 8002DCE0 0002ADC0  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8002DCE4 0002ADC4  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8002DCE8 0002ADC8  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 8002DCEC 0002ADCC  90 03 00 10 */	stw r0, 0x10(r3)
/* 8002DCF0 0002ADD0  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8002DCF4 0002ADD4  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8002DCF8 0002ADD8  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 8002DCFC 0002ADDC  90 03 00 18 */	stw r0, 0x18(r3)
/* 8002DD00 0002ADE0  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8002DD04 0002ADE4  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8002DD08 0002ADE8  C0 24 00 24 */	lfs f1, 0x24(r4)
/* 8002DD0C 0002ADEC  90 03 00 20 */	stw r0, 0x20(r3)
/* 8002DD10 0002ADF0  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 8002DD14 0002ADF4  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 8002DD18 0002ADF8  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 8002DD1C 0002ADFC  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8002DD20 0002AE00  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 8002DD24 0002AE04  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 8002DD28 0002AE08  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 8002DD2C 0002AE0C  4E 80 00 20 */	blr
.endfn __as__Q24xhud14render_contextFRCQ24xhud14render_context

# xhud::widget::init_base(xBase&, const xBaseAsset&, unsigned long)
.fn init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl, global
/* 8002DD30 0002AE10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002DD34 0002AE14  7C 08 02 A6 */	mflr r0
/* 8002DD38 0002AE18  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002DD3C 0002AE1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002DD40 0002AE20  7C BF 2B 78 */	mr r31, r5
/* 8002DD44 0002AE24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002DD48 0002AE28  7C 9E 23 78 */	mr r30, r4
/* 8002DD4C 0002AE2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002DD50 0002AE30  7C 7D 1B 78 */	mr r29, r3
/* 8002DD54 0002AE34  4B FD B6 AD */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 8002DD58 0002AE38  3C 60 80 03 */	lis r3, cb_dispatch__Q24xhud6widgetFP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8002DD5C 0002AE3C  38 03 E7 20 */	addi r0, r3, cb_dispatch__Q24xhud6widgetFP5xBaseP5xBaseUiPCfP5xBase@l
/* 8002DD60 0002AE40  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8002DD64 0002AE44  88 1D 00 05 */	lbz r0, 0x5(r29)
/* 8002DD68 0002AE48  28 00 00 00 */	cmplwi r0, 0x0
/* 8002DD6C 0002AE4C  41 82 00 0C */	beq .L_8002DD78
/* 8002DD70 0002AE50  7C 1E FA 14 */	add r0, r30, r31
/* 8002DD74 0002AE54  90 1D 00 08 */	stw r0, 0x8(r29)
.L_8002DD78:
/* 8002DD78 0002AE58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002DD7C 0002AE5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002DD80 0002AE60  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002DD84 0002AE64  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002DD88 0002AE68  7C 08 03 A6 */	mtlr r0
/* 8002DD8C 0002AE6C  38 21 00 20 */	addi r1, r1, 0x20
/* 8002DD90 0002AE70  4E 80 00 20 */	blr
.endfn init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl

# xhud::widget::destruct()
.fn destruct__Q24xhud6widgetFv, global
/* 8002DD94 0002AE74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DD98 0002AE78  7C 08 02 A6 */	mflr r0
/* 8002DD9C 0002AE7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DDA0 0002AE80  48 00 10 85 */	bl disable__Q24xhud6widgetFv
/* 8002DDA4 0002AE84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DDA8 0002AE88  7C 08 03 A6 */	mtlr r0
/* 8002DDAC 0002AE8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DDB0 0002AE90  4E 80 00 20 */	blr
.endfn destruct__Q24xhud6widgetFv

# xhud::widget::presetup()
.fn presetup__Q24xhud6widgetFv, global
/* 8002DDB4 0002AE94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DDB8 0002AE98  7C 08 02 A6 */	mflr r0
/* 8002DDBC 0002AE9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DDC0 0002AEA0  38 00 00 00 */	li r0, 0x0
/* 8002DDC4 0002AEA4  90 03 00 70 */	stw r0, 0x70(r3)
/* 8002DDC8 0002AEA8  48 00 10 69 */	bl add_tweaks__Q24xhud6widgetFv
/* 8002DDCC 0002AEAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DDD0 0002AEB0  7C 08 03 A6 */	mtlr r0
/* 8002DDD4 0002AEB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DDD8 0002AEB8  4E 80 00 20 */	blr
.endfn presetup__Q24xhud6widgetFv

# xhud::widget::updater(float)
.fn updater__Q24xhud6widgetFf, global
/* 8002DDDC 0002AEBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002DDE0 0002AEC0  7C 08 02 A6 */	mflr r0
/* 8002DDE4 0002AEC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002DDE8 0002AEC8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8002DDEC 0002AECC  FF E0 08 90 */	fmr f31, f1
/* 8002DDF0 0002AED0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8002DDF4 0002AED4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8002DDF8 0002AED8  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8002DDFC 0002AEDC  7C 7D 1B 78 */	mr r29, r3
/* 8002DE00 0002AEE0  38 1D 00 7C */	addi r0, r29, 0x7c
/* 8002DE04 0002AEE4  90 03 00 80 */	stw r0, 0x80(r3)
/* 8002DE08 0002AEE8  3B FD 00 78 */	addi r31, r29, 0x78
/* 8002DE0C 0002AEEC  83 C3 00 78 */	lwz r30, 0x78(r3)
/* 8002DE10 0002AEF0  48 00 00 3C */	b .L_8002DE4C
.L_8002DE14:
/* 8002DE14 0002AEF4  FC 20 F8 90 */	fmr f1, f31
/* 8002DE18 0002AEF8  7F C3 F3 78 */	mr r3, r30
/* 8002DE1C 0002AEFC  7F A4 EB 78 */	mr r4, r29
/* 8002DE20 0002AF00  48 00 10 15 */	bl update__Q24xhud6motiveFRQ24xhud6widgetf
/* 8002DE24 0002AF04  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8002DE28 0002AF08  40 82 00 1C */	bne .L_8002DE44
/* 8002DE2C 0002AF0C  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 8002DE30 0002AF10  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8002DE34 0002AF14  4B FF FC CD */	bl motive_allocator__Q24xhud6widgetFv
/* 8002DE38 0002AF18  7F C4 F3 78 */	mr r4, r30
/* 8002DE3C 0002AF1C  4B FF FC A9 */	bl free__Q24xhud15block_allocatorFPv
/* 8002DE40 0002AF20  48 00 00 08 */	b .L_8002DE48
.L_8002DE44:
/* 8002DE44 0002AF24  3B FE 00 24 */	addi r31, r30, 0x24
.L_8002DE48:
/* 8002DE48 0002AF28  83 DF 00 00 */	lwz r30, 0x0(r31)
.L_8002DE4C:
/* 8002DE4C 0002AF2C  28 1E 00 00 */	cmplwi r30, 0x0
/* 8002DE50 0002AF30  40 82 FF C4 */	bne .L_8002DE14
/* 8002DE54 0002AF34  80 1D 00 7C */	lwz r0, 0x7c(r29)
/* 8002DE58 0002AF38  28 00 00 00 */	cmplwi r0, 0x0
/* 8002DE5C 0002AF3C  41 82 00 20 */	beq .L_8002DE7C
/* 8002DE60 0002AF40  80 9D 00 78 */	lwz r4, 0x78(r29)
/* 8002DE64 0002AF44  38 00 00 00 */	li r0, 0x0
/* 8002DE68 0002AF48  80 7D 00 80 */	lwz r3, 0x80(r29)
/* 8002DE6C 0002AF4C  90 83 00 00 */	stw r4, 0x0(r3)
/* 8002DE70 0002AF50  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 8002DE74 0002AF54  90 7D 00 78 */	stw r3, 0x78(r29)
/* 8002DE78 0002AF58  90 1D 00 7C */	stw r0, 0x7c(r29)
.L_8002DE7C:
/* 8002DE7C 0002AF5C  38 60 00 00 */	li r3, 0x0
/* 8002DE80 0002AF60  90 7D 00 80 */	stw r3, 0x80(r29)
/* 8002DE84 0002AF64  80 1D 00 78 */	lwz r0, 0x78(r29)
/* 8002DE88 0002AF68  28 00 00 00 */	cmplwi r0, 0x0
/* 8002DE8C 0002AF6C  40 82 00 08 */	bne .L_8002DE94
/* 8002DE90 0002AF70  90 7D 00 70 */	stw r3, 0x70(r29)
.L_8002DE94:
/* 8002DE94 0002AF74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002DE98 0002AF78  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8002DE9C 0002AF7C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8002DEA0 0002AF80  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8002DEA4 0002AF84  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8002DEA8 0002AF88  7C 08 03 A6 */	mtlr r0
/* 8002DEAC 0002AF8C  38 21 00 20 */	addi r1, r1, 0x20
/* 8002DEB0 0002AF90  4E 80 00 20 */	blr
.endfn updater__Q24xhud6widgetFf

# xhud::widget::dispatcher(xBase*, unsigned int, const float*, xBase*)
.fn dispatcher__Q24xhud6widgetFP5xBaseUiPCfP5xBase, global
/* 8002DEB4 0002AF94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DEB8 0002AF98  7C 08 02 A6 */	mflr r0
/* 8002DEBC 0002AF9C  2C 05 01 1E */	cmpwi r5, 0x11e
/* 8002DEC0 0002AFA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DEC4 0002AFA4  41 82 00 7C */	beq .L_8002DF40
/* 8002DEC8 0002AFA8  40 80 00 2C */	bge .L_8002DEF4
/* 8002DECC 0002AFAC  2C 05 00 03 */	cmpwi r5, 0x3
/* 8002DED0 0002AFB0  41 82 00 58 */	beq .L_8002DF28
/* 8002DED4 0002AFB4  40 80 00 14 */	bge .L_8002DEE8
/* 8002DED8 0002AFB8  2C 05 00 01 */	cmpwi r5, 0x1
/* 8002DEDC 0002AFBC  41 82 00 3C */	beq .L_8002DF18
/* 8002DEE0 0002AFC0  40 80 00 40 */	bge .L_8002DF20
/* 8002DEE4 0002AFC4  48 00 00 68 */	b .L_8002DF4C
.L_8002DEE8:
/* 8002DEE8 0002AFC8  2C 05 00 05 */	cmpwi r5, 0x5
/* 8002DEEC 0002AFCC  40 80 00 60 */	bge .L_8002DF4C
/* 8002DEF0 0002AFD0  48 00 00 44 */	b .L_8002DF34
.L_8002DEF4:
/* 8002DEF4 0002AFD4  2C 05 01 F7 */	cmpwi r5, 0x1f7
/* 8002DEF8 0002AFD8  41 82 00 30 */	beq .L_8002DF28
/* 8002DEFC 0002AFDC  40 80 00 10 */	bge .L_8002DF0C
/* 8002DF00 0002AFE0  2C 05 01 20 */	cmpwi r5, 0x120
/* 8002DF04 0002AFE4  40 80 00 48 */	bge .L_8002DF4C
/* 8002DF08 0002AFE8  48 00 00 40 */	b .L_8002DF48
.L_8002DF0C:
/* 8002DF0C 0002AFEC  2C 05 01 F9 */	cmpwi r5, 0x1f9
/* 8002DF10 0002AFF0  40 80 00 3C */	bge .L_8002DF4C
/* 8002DF14 0002AFF4  48 00 00 20 */	b .L_8002DF34
.L_8002DF18:
/* 8002DF18 0002AFF8  48 00 0F 51 */	bl enable__Q24xhud6widgetFv
/* 8002DF1C 0002AFFC  48 00 00 30 */	b .L_8002DF4C
.L_8002DF20:
/* 8002DF20 0002B000  48 00 0F 05 */	bl disable__Q24xhud6widgetFv
/* 8002DF24 0002B004  48 00 00 28 */	b .L_8002DF4C
.L_8002DF28:
/* 8002DF28 0002B008  38 00 00 01 */	li r0, 0x1
/* 8002DF2C 0002B00C  98 03 00 00 */	stb r0, 0x0(r3)
/* 8002DF30 0002B010  48 00 00 1C */	b .L_8002DF4C
.L_8002DF34:
/* 8002DF34 0002B014  38 00 00 00 */	li r0, 0x0
/* 8002DF38 0002B018  98 03 00 00 */	stb r0, 0x0(r3)
/* 8002DF3C 0002B01C  48 00 00 10 */	b .L_8002DF4C
.L_8002DF40:
/* 8002DF40 0002B020  48 00 00 95 */	bl show__Q24xhud6widgetFv
/* 8002DF44 0002B024  48 00 00 08 */	b .L_8002DF4C
.L_8002DF48:
/* 8002DF48 0002B028  48 00 02 21 */	bl hide__Q24xhud6widgetFv
.L_8002DF4C:
/* 8002DF4C 0002B02C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DF50 0002B030  7C 08 03 A6 */	mtlr r0
/* 8002DF54 0002B034  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DF58 0002B038  4E 80 00 20 */	blr
.endfn dispatcher__Q24xhud6widgetFP5xBaseUiPCfP5xBase

# xhud::widget::type() const
.fn type__Q24xhud6widgetCFv, global
/* 8002DF5C 0002B03C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DF60 0002B040  7C 08 02 A6 */	mflr r0
/* 8002DF64 0002B044  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DF68 0002B048  88 0D 89 A4 */	lbz r0, init$925@sda21(r13)
/* 8002DF6C 0002B04C  7C 00 07 75 */	extsb. r0, r0
/* 8002DF70 0002B050  40 82 00 18 */	bne .L_8002DF88
/* 8002DF74 0002B054  48 00 10 5D */	bl type_name__Q24xhud5assetFv
/* 8002DF78 0002B058  48 01 E2 9D */	bl xStrHash__FPCc
/* 8002DF7C 0002B05C  90 6D 89 A0 */	stw r3, myid$924@sda21(r13)
/* 8002DF80 0002B060  38 00 00 01 */	li r0, 0x1
/* 8002DF84 0002B064  98 0D 89 A4 */	stb r0, init$925@sda21(r13)
.L_8002DF88:
/* 8002DF88 0002B068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DF8C 0002B06C  80 6D 89 A0 */	lwz r3, myid$924@sda21(r13)
/* 8002DF90 0002B070  7C 08 03 A6 */	mtlr r0
/* 8002DF94 0002B074  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DF98 0002B078  4E 80 00 20 */	blr
.endfn type__Q24xhud6widgetCFv

# xhud::widget::is(unsigned int) const
.fn is__Q24xhud6widgetCFUi, global
/* 8002DF9C 0002B07C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002DFA0 0002B080  7C 08 02 A6 */	mflr r0
/* 8002DFA4 0002B084  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002DFA8 0002B088  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002DFAC 0002B08C  7C 9F 23 78 */	mr r31, r4
/* 8002DFB0 0002B090  4B FF FF AD */	bl type__Q24xhud6widgetCFv
/* 8002DFB4 0002B094  7C 1F 18 50 */	subf r0, r31, r3
/* 8002DFB8 0002B098  7C 00 00 34 */	cntlzw r0, r0
/* 8002DFBC 0002B09C  54 03 D9 7E */	srwi r3, r0, 5
/* 8002DFC0 0002B0A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002DFC4 0002B0A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002DFC8 0002B0A8  7C 08 03 A6 */	mtlr r0
/* 8002DFCC 0002B0AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8002DFD0 0002B0B0  4E 80 00 20 */	blr
.endfn is__Q24xhud6widgetCFUi

# xhud::widget::show()
.fn show__Q24xhud6widgetFv, global
/* 8002DFD4 0002B0B4  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8002DFD8 0002B0B8  7C 08 02 A6 */	mflr r0
/* 8002DFDC 0002B0BC  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 8002DFE0 0002B0C0  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 8002DFE4 0002B0C4  F3 E1 00 C8 */	psq_st f31, 0xc8(r1), 0, qr0
/* 8002DFE8 0002B0C8  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 8002DFEC 0002B0CC  F3 C1 00 B8 */	psq_st f30, 0xb8(r1), 0, qr0
/* 8002DFF0 0002B0D0  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 8002DFF4 0002B0D4  F3 A1 00 A8 */	psq_st f29, 0xa8(r1), 0, qr0
/* 8002DFF8 0002B0D8  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 8002DFFC 0002B0DC  F3 81 00 98 */	psq_st f28, 0x98(r1), 0, qr0
/* 8002E000 0002B0E0  DB 61 00 80 */	stfd f27, 0x80(r1)
/* 8002E004 0002B0E4  F3 61 00 88 */	psq_st f27, 0x88(r1), 0, qr0
/* 8002E008 0002B0E8  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8002E00C 0002B0EC  7C 7F 1B 78 */	mr r31, r3
/* 8002E010 0002B0F0  48 00 06 19 */	bl clear_motives__Q24xhud6widgetFv
/* 8002E014 0002B0F4  38 00 00 01 */	li r0, 0x1
/* 8002E018 0002B0F8  90 1F 00 70 */	stw r0, 0x70(r31)
/* 8002E01C 0002B0FC  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 8002E020 0002B100  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 8002E024 0002B104  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 8002E028 0002B108  EF A1 00 28 */	fsubs f29, f1, f0
/* 8002E02C 0002B10C  C0 3F 00 04 */	lfs f1, 0x4(r31)
/* 8002E030 0002B110  C0 02 83 DC */	lfs f0, "@945"@sda21(r2)
/* 8002E034 0002B114  EF C2 08 28 */	fsubs f30, f2, f1
/* 8002E038 0002B118  EC 3D 07 72 */	fmuls f1, f29, f29
/* 8002E03C 0002B11C  EC 3E 0F BA */	fmadds f1, f30, f30, f1
/* 8002E040 0002B120  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002E044 0002B124  4C 40 13 82 */	cror eq, lt, eq
/* 8002E048 0002B128  40 82 00 1C */	bne .L_8002E064
/* 8002E04C 0002B12C  38 7F 00 04 */	addi r3, r31, 0x4
/* 8002E050 0002B130  38 9F 00 38 */	addi r4, r31, 0x38
/* 8002E054 0002B134  4B FD D2 11 */	bl __as__5xVec3FRC5xVec3
/* 8002E058 0002B138  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 8002E05C 0002B13C  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8002E060 0002B140  48 00 00 CC */	b .L_8002E12C
.L_8002E064:
/* 8002E064 0002B144  4B FD C7 99 */	bl xsqrt__Ff
/* 8002E068 0002B148  C0 42 83 E0 */	lfs f2, "@946"@sda21(r2)
/* 8002E06C 0002B14C  FF E0 08 90 */	fmr f31, f1
/* 8002E070 0002B150  C0 02 83 E4 */	lfs f0, "@947"@sda21(r2)
/* 8002E074 0002B154  3C 60 80 03 */	lis r3, accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8002E078 0002B158  EF 82 07 72 */	fmuls f28, f2, f29
/* 8002E07C 0002B15C  38 A3 EA 48 */	addi r5, r3, accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8002E080 0002B160  EC 22 07 B2 */	fmuls f1, f2, f30
/* 8002E084 0002B164  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8002E088 0002B168  38 61 00 50 */	addi r3, r1, 0x50
/* 8002E08C 0002B16C  EC 7C 07 32 */	fmuls f3, f28, f28
/* 8002E090 0002B170  FC 40 F0 90 */	fmr f2, f30
/* 8002E094 0002B174  38 9F 00 04 */	addi r4, r31, 0x4
/* 8002E098 0002B178  38 C0 00 00 */	li r6, 0x0
/* 8002E09C 0002B17C  EC 61 18 7E */	fnmadds f3, f1, f1, f3
/* 8002E0A0 0002B180  EF 63 00 24 */	fdivs f27, f3, f0
/* 8002E0A4 0002B184  EC 1B 07 B2 */	fmuls f0, f27, f30
/* 8002E0A8 0002B188  EC 60 F8 24 */	fdivs f3, f0, f31
/* 8002E0AC 0002B18C  48 00 0D C9 */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8002E0B0 0002B190  7C 64 1B 78 */	mr r4, r3
/* 8002E0B4 0002B194  7F E3 FB 78 */	mr r3, r31
/* 8002E0B8 0002B198  48 00 04 CD */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
/* 8002E0BC 0002B19C  EC 1B 07 72 */	fmuls f0, f27, f29
/* 8002E0C0 0002B1A0  3C 60 80 03 */	lis r3, accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8002E0C4 0002B1A4  38 A3 EA 48 */	addi r5, r3, accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8002E0C8 0002B1A8  FC 20 E0 90 */	fmr f1, f28
/* 8002E0CC 0002B1AC  FC 40 E8 90 */	fmr f2, f29
/* 8002E0D0 0002B1B0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8002E0D4 0002B1B4  EC 60 F8 24 */	fdivs f3, f0, f31
/* 8002E0D8 0002B1B8  38 9F 00 08 */	addi r4, r31, 0x8
/* 8002E0DC 0002B1BC  38 C0 00 00 */	li r6, 0x0
/* 8002E0E0 0002B1C0  48 00 0D 95 */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8002E0E4 0002B1C4  7C 64 1B 78 */	mr r4, r3
/* 8002E0E8 0002B1C8  7F E3 FB 78 */	mr r3, r31
/* 8002E0EC 0002B1CC  48 00 04 99 */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
/* 8002E0F0 0002B1D0  C0 5F 00 68 */	lfs f2, 0x68(r31)
/* 8002E0F4 0002B1D4  3C 60 80 03 */	lis r3, linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8002E0F8 0002B1D8  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8002E0FC 0002B1DC  38 A3 E9 BC */	addi r5, r3, linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8002E100 0002B1E0  C0 02 83 E8 */	lfs f0, "@948"@sda21(r2)
/* 8002E104 0002B1E4  38 61 00 08 */	addi r3, r1, 0x8
/* 8002E108 0002B1E8  EC 42 08 28 */	fsubs f2, f2, f1
/* 8002E10C 0002B1EC  C0 62 83 EC */	lfs f3, "@949"@sda21(r2)
/* 8002E110 0002B1F0  38 9F 00 34 */	addi r4, r31, 0x34
/* 8002E114 0002B1F4  38 C0 00 00 */	li r6, 0x0
/* 8002E118 0002B1F8  EC 20 00 B2 */	fmuls f1, f0, f2
/* 8002E11C 0002B1FC  48 00 0D 59 */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8002E120 0002B200  7C 64 1B 78 */	mr r4, r3
/* 8002E124 0002B204  7F E3 FB 78 */	mr r3, r31
/* 8002E128 0002B208  48 00 04 5D */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
.L_8002E12C:
/* 8002E12C 0002B20C  E3 E1 00 C8 */	psq_l f31, 0xc8(r1), 0, qr0
/* 8002E130 0002B210  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 8002E134 0002B214  E3 C1 00 B8 */	psq_l f30, 0xb8(r1), 0, qr0
/* 8002E138 0002B218  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8002E13C 0002B21C  E3 A1 00 A8 */	psq_l f29, 0xa8(r1), 0, qr0
/* 8002E140 0002B220  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 8002E144 0002B224  E3 81 00 98 */	psq_l f28, 0x98(r1), 0, qr0
/* 8002E148 0002B228  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 8002E14C 0002B22C  E3 61 00 88 */	psq_l f27, 0x88(r1), 0, qr0
/* 8002E150 0002B230  CB 61 00 80 */	lfd f27, 0x80(r1)
/* 8002E154 0002B234  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8002E158 0002B238  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8002E15C 0002B23C  7C 08 03 A6 */	mtlr r0
/* 8002E160 0002B240  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8002E164 0002B244  4E 80 00 20 */	blr
.endfn show__Q24xhud6widgetFv

# xhud::widget::hide()
.fn hide__Q24xhud6widgetFv, global
/* 8002E168 0002B248  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8002E16C 0002B24C  7C 08 02 A6 */	mflr r0
/* 8002E170 0002B250  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8002E174 0002B254  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8002E178 0002B258  F3 E1 00 A8 */	psq_st f31, 0xa8(r1), 0, qr0
/* 8002E17C 0002B25C  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8002E180 0002B260  F3 C1 00 98 */	psq_st f30, 0x98(r1), 0, qr0
/* 8002E184 0002B264  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 8002E188 0002B268  F3 A1 00 88 */	psq_st f29, 0x88(r1), 0, qr0
/* 8002E18C 0002B26C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8002E190 0002B270  7C 7F 1B 78 */	mr r31, r3
/* 8002E194 0002B274  38 00 00 02 */	li r0, 0x2
/* 8002E198 0002B278  90 03 00 70 */	stw r0, 0x70(r3)
/* 8002E19C 0002B27C  C0 C3 00 44 */	lfs f6, 0x44(r3)
/* 8002E1A0 0002B280  C0 62 83 F0 */	lfs f3, "@955"@sda21(r2)
/* 8002E1A4 0002B284  C0 E3 00 48 */	lfs f7, 0x48(r3)
/* 8002E1A8 0002B288  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8002E1AC 0002B28C  EC A3 01 B2 */	fmuls f5, f3, f6
/* 8002E1B0 0002B290  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 8002E1B4 0002B294  EC 83 01 F2 */	fmuls f4, f3, f7
/* 8002E1B8 0002B298  EC 40 18 28 */	fsubs f2, f0, f3
/* 8002E1BC 0002B29C  C0 02 83 F4 */	lfs f0, "@982"@sda21(r2)
/* 8002E1C0 0002B2A0  EC 21 18 28 */	fsubs f1, f1, f3
/* 8002E1C4 0002B2A4  EC 42 28 2A */	fadds f2, f2, f5
/* 8002E1C8 0002B2A8  ED 01 20 2A */	fadds f8, f1, f4
/* 8002E1CC 0002B2AC  FD 20 12 10 */	fabs f9, f2
/* 8002E1D0 0002B2B0  FD 40 42 10 */	fabs f10, f8
/* 8002E1D4 0002B2B4  FD 20 48 18 */	frsp f9, f9
/* 8002E1D8 0002B2B8  FD 40 50 18 */	frsp f10, f10
/* 8002E1DC 0002B2BC  EC 29 50 2A */	fadds f1, f9, f10
/* 8002E1E0 0002B2C0  FC 20 0A 10 */	fabs f1, f1
/* 8002E1E4 0002B2C4  FC 20 08 18 */	frsp f1, f1
/* 8002E1E8 0002B2C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002E1EC 0002B2CC  4C 40 13 82 */	cror eq, lt, eq
/* 8002E1F0 0002B2D0  40 82 00 10 */	bne .L_8002E200
/* 8002E1F4 0002B2D4  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002E1F8 0002B2D8  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8002E1FC 0002B2DC  48 00 01 30 */	b .L_8002E32C
.L_8002E200:
/* 8002E200 0002B2E0  FC 09 50 40 */	fcmpo cr0, f9, f10
/* 8002E204 0002B2E4  40 81 00 34 */	ble .L_8002E238
/* 8002E208 0002B2E8  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002E20C 0002B2EC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8002E210 0002B2F0  4C 41 13 82 */	cror eq, gt, eq
/* 8002E214 0002B2F4  40 82 00 0C */	bne .L_8002E220
/* 8002E218 0002B2F8  EC 23 30 2A */	fadds f1, f3, f6
/* 8002E21C 0002B2FC  48 00 00 0C */	b .L_8002E228
.L_8002E220:
/* 8002E220 0002B300  C0 02 83 F8 */	lfs f0, "@983"@sda21(r2)
/* 8002E224 0002B304  EC 20 30 28 */	fsubs f1, f0, f6
.L_8002E228:
/* 8002E228 0002B308  EC 01 02 32 */	fmuls f0, f1, f8
/* 8002E22C 0002B30C  FC 60 08 90 */	fmr f3, f1
/* 8002E230 0002B310  EC 20 10 24 */	fdivs f1, f0, f2
/* 8002E234 0002B314  48 00 00 2C */	b .L_8002E260
.L_8002E238:
/* 8002E238 0002B318  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002E23C 0002B31C  FC 08 00 40 */	fcmpo cr0, f8, f0
/* 8002E240 0002B320  4C 41 13 82 */	cror eq, gt, eq
/* 8002E244 0002B324  40 82 00 0C */	bne .L_8002E250
/* 8002E248 0002B328  EC 23 38 2A */	fadds f1, f3, f7
/* 8002E24C 0002B32C  48 00 00 0C */	b .L_8002E258
.L_8002E250:
/* 8002E250 0002B330  C0 02 83 F8 */	lfs f0, "@983"@sda21(r2)
/* 8002E254 0002B334  EC 20 38 28 */	fsubs f1, f0, f7
.L_8002E258:
/* 8002E258 0002B338  EC 01 00 B2 */	fmuls f0, f1, f2
/* 8002E25C 0002B33C  EC 60 40 24 */	fdivs f3, f0, f8
.L_8002E260:
/* 8002E260 0002B340  EC 21 20 28 */	fsubs f1, f1, f4
/* 8002E264 0002B344  C0 82 83 F0 */	lfs f4, "@955"@sda21(r2)
/* 8002E268 0002B348  EC 63 28 28 */	fsubs f3, f3, f5
/* 8002E26C 0002B34C  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 8002E270 0002B350  C0 5F 00 04 */	lfs f2, 0x4(r31)
/* 8002E274 0002B354  EC 24 08 2A */	fadds f1, f4, f1
/* 8002E278 0002B358  EC 64 18 2A */	fadds f3, f4, f3
/* 8002E27C 0002B35C  EF A1 00 28 */	fsubs f29, f1, f0
/* 8002E280 0002B360  EF C3 10 28 */	fsubs f30, f3, f2
/* 8002E284 0002B364  EC 1D 07 72 */	fmuls f0, f29, f29
/* 8002E288 0002B368  EC 3E 07 BA */	fmadds f1, f30, f30, f0
/* 8002E28C 0002B36C  4B FD C5 71 */	bl xsqrt__Ff
/* 8002E290 0002B370  FF E0 08 90 */	fmr f31, f1
/* 8002E294 0002B374  3C 60 80 03 */	lis r3, accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8002E298 0002B378  38 A3 EA 48 */	addi r5, r3, accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8002E29C 0002B37C  FC 40 F0 90 */	fmr f2, f30
/* 8002E2A0 0002B380  C0 22 83 EC */	lfs f1, "@949"@sda21(r2)
/* 8002E2A4 0002B384  38 61 00 50 */	addi r3, r1, 0x50
/* 8002E2A8 0002B388  EC 7E 07 F2 */	fmuls f3, f30, f31
/* 8002E2AC 0002B38C  38 9F 00 04 */	addi r4, r31, 0x4
/* 8002E2B0 0002B390  38 C0 00 00 */	li r6, 0x0
/* 8002E2B4 0002B394  48 00 0B C1 */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8002E2B8 0002B398  7C 64 1B 78 */	mr r4, r3
/* 8002E2BC 0002B39C  7F E3 FB 78 */	mr r3, r31
/* 8002E2C0 0002B3A0  48 00 02 C5 */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
/* 8002E2C4 0002B3A4  FC 40 E8 90 */	fmr f2, f29
/* 8002E2C8 0002B3A8  3C 60 80 03 */	lis r3, accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8002E2CC 0002B3AC  EC 7D 07 F2 */	fmuls f3, f29, f31
/* 8002E2D0 0002B3B0  C0 22 83 EC */	lfs f1, "@949"@sda21(r2)
/* 8002E2D4 0002B3B4  38 A3 EA 48 */	addi r5, r3, accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8002E2D8 0002B3B8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8002E2DC 0002B3BC  38 9F 00 08 */	addi r4, r31, 0x8
/* 8002E2E0 0002B3C0  38 C0 00 00 */	li r6, 0x0
/* 8002E2E4 0002B3C4  48 00 0B 91 */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8002E2E8 0002B3C8  7C 64 1B 78 */	mr r4, r3
/* 8002E2EC 0002B3CC  7F E3 FB 78 */	mr r3, r31
/* 8002E2F0 0002B3D0  48 00 02 95 */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
/* 8002E2F4 0002B3D4  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8002E2F8 0002B3D8  3C 60 80 03 */	lis r3, linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8002E2FC 0002B3DC  38 A3 E9 BC */	addi r5, r3, linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8002E300 0002B3E0  C0 02 83 FC */	lfs f0, "@984"@sda21(r2)
/* 8002E304 0002B3E4  FC 40 08 50 */	fneg f2, f1
/* 8002E308 0002B3E8  C0 62 83 EC */	lfs f3, "@949"@sda21(r2)
/* 8002E30C 0002B3EC  38 61 00 08 */	addi r3, r1, 0x8
/* 8002E310 0002B3F0  38 9F 00 34 */	addi r4, r31, 0x34
/* 8002E314 0002B3F4  38 C0 00 00 */	li r6, 0x0
/* 8002E318 0002B3F8  EC 20 00 B2 */	fmuls f1, f0, f2
/* 8002E31C 0002B3FC  48 00 0B 59 */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8002E320 0002B400  7C 64 1B 78 */	mr r4, r3
/* 8002E324 0002B404  7F E3 FB 78 */	mr r3, r31
/* 8002E328 0002B408  48 00 02 5D */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
.L_8002E32C:
/* 8002E32C 0002B40C  E3 E1 00 A8 */	psq_l f31, 0xa8(r1), 0, qr0
/* 8002E330 0002B410  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8002E334 0002B414  E3 C1 00 98 */	psq_l f30, 0x98(r1), 0, qr0
/* 8002E338 0002B418  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8002E33C 0002B41C  E3 A1 00 88 */	psq_l f29, 0x88(r1), 0, qr0
/* 8002E340 0002B420  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 8002E344 0002B424  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8002E348 0002B428  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8002E34C 0002B42C  7C 08 03 A6 */	mtlr r0
/* 8002E350 0002B430  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8002E354 0002B434  4E 80 00 20 */	blr
.endfn hide__Q24xhud6widgetFv

# xhud::@unnamed@xHud_cpp@::fp_setup(xhud::widget&)
.fn "fp_setup__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget", local
/* 8002E358 0002B438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002E35C 0002B43C  7C 08 02 A6 */	mflr r0
/* 8002E360 0002B440  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002E364 0002B444  81 83 00 74 */	lwz r12, 0x74(r3)
/* 8002E368 0002B448  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8002E36C 0002B44C  7D 89 03 A6 */	mtctr r12
/* 8002E370 0002B450  4E 80 04 21 */	bctrl
/* 8002E374 0002B454  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002E378 0002B458  7C 08 03 A6 */	mtlr r0
/* 8002E37C 0002B45C  38 21 00 10 */	addi r1, r1, 0x10
/* 8002E380 0002B460  4E 80 00 20 */	blr
.endfn "fp_setup__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget"

# xhud::@unnamed@xHud_cpp@::fp_render(xhud::widget&)
.fn "fp_render__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget", local
/* 8002E384 0002B464  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002E388 0002B468  7C 08 02 A6 */	mflr r0
/* 8002E38C 0002B46C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002E390 0002B470  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002E394 0002B474  7C 7F 1B 78 */	mr r31, r3
/* 8002E398 0002B478  48 00 0B 29 */	bl visible__Q24xhud6widgetCFv
/* 8002E39C 0002B47C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8002E3A0 0002B480  41 82 00 18 */	beq .L_8002E3B8
/* 8002E3A4 0002B484  7F E3 FB 78 */	mr r3, r31
/* 8002E3A8 0002B488  81 9F 00 74 */	lwz r12, 0x74(r31)
/* 8002E3AC 0002B48C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8002E3B0 0002B490  7D 89 03 A6 */	mtctr r12
/* 8002E3B4 0002B494  4E 80 04 21 */	bctrl
.L_8002E3B8:
/* 8002E3B8 0002B498  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002E3BC 0002B49C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002E3C0 0002B4A0  7C 08 03 A6 */	mtlr r0
/* 8002E3C4 0002B4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002E3C8 0002B4A8  4E 80 00 20 */	blr
.endfn "fp_render__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget"

# xhud::widget::disable_all(bool)
.fn disable_all__Q24xhud6widgetFb, global
/* 8002E3CC 0002B4AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002E3D0 0002B4B0  7C 08 02 A6 */	mflr r0
/* 8002E3D4 0002B4B4  7C 64 1B 78 */	mr r4, r3
/* 8002E3D8 0002B4B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002E3DC 0002B4BC  38 61 00 0C */	addi r3, r1, 0xc
/* 8002E3E0 0002B4C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002E3E4 0002B4C4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002E3E8 0002B4C8  48 00 00 51 */	bl "__ct__Q34xhud18@unnamed@xHud_cpp@15functor_disableFb"
/* 8002E3EC 0002B4CC  3C 60 80 25 */	lis r3, "known_types__Q24xhud18@unnamed@xHud_cpp@"@ha
/* 8002E3F0 0002B4D0  3B C0 00 00 */	li r30, 0x0
/* 8002E3F4 0002B4D4  3B E3 2E 90 */	addi r31, r3, "known_types__Q24xhud18@unnamed@xHud_cpp@"@l
.L_8002E3F8:
/* 8002E3F8 0002B4D8  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8002E3FC 0002B4DC  38 A1 00 08 */	addi r5, r1, 0x8
/* 8002E400 0002B4E0  88 7F 00 00 */	lbz r3, 0x0(r31)
/* 8002E404 0002B4E4  98 01 00 08 */	stb r0, 0x8(r1)
/* 8002E408 0002B4E8  80 9F 00 04 */	lwz r4, 0x4(r31)
/* 8002E40C 0002B4EC  48 00 08 DD */	bl "for_each<Q34xhud18@unnamed@xHud_cpp@15functor_disable>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@15functor_disable"
/* 8002E410 0002B4F0  3B DE 00 01 */	addi r30, r30, 0x1
/* 8002E414 0002B4F4  3B FF 00 08 */	addi r31, r31, 0x8
/* 8002E418 0002B4F8  28 1E 00 04 */	cmplwi r30, 0x4
/* 8002E41C 0002B4FC  41 80 FF DC */	blt .L_8002E3F8
/* 8002E420 0002B500  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002E424 0002B504  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002E428 0002B508  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002E42C 0002B50C  7C 08 03 A6 */	mtlr r0
/* 8002E430 0002B510  38 21 00 20 */	addi r1, r1, 0x20
/* 8002E434 0002B514  4E 80 00 20 */	blr
.endfn disable_all__Q24xhud6widgetFb

# xhud::@unnamed@xHud_cpp@::functor_disable::functor_disable(bool)
.fn "__ct__Q34xhud18@unnamed@xHud_cpp@15functor_disableFb", local
/* 8002E438 0002B518  98 83 00 00 */	stb r4, 0x0(r3)
/* 8002E43C 0002B51C  4E 80 00 20 */	blr
.endfn "__ct__Q34xhud18@unnamed@xHud_cpp@15functor_disableFb"

# xhud::widget::setup_all()
.fn setup_all__Q24xhud6widgetFv, global
/* 8002E440 0002B520  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002E444 0002B524  7C 08 02 A6 */	mflr r0
/* 8002E448 0002B528  3C 80 80 25 */	lis r4, "known_types__Q24xhud18@unnamed@xHud_cpp@"@ha
/* 8002E44C 0002B52C  3C 60 80 03 */	lis r3, "fp_setup__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget"@ha
/* 8002E450 0002B530  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002E454 0002B534  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002E458 0002B538  3B E3 E3 58 */	addi r31, r3, "fp_setup__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget"@l
/* 8002E45C 0002B53C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002E460 0002B540  3B C4 2E 90 */	addi r30, r4, "known_types__Q24xhud18@unnamed@xHud_cpp@"@l
/* 8002E464 0002B544  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002E468 0002B548  3B A0 00 00 */	li r29, 0x0
.L_8002E46C:
/* 8002E46C 0002B54C  88 7E 00 00 */	lbz r3, 0x0(r30)
/* 8002E470 0002B550  7F E5 FB 78 */	mr r5, r31
/* 8002E474 0002B554  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 8002E478 0002B558  48 00 07 E9 */	bl "for_each<PFRQ24xhud6widget_v>__Q24xhud18@unnamed@xHud_cpp@FUcUiPFRQ24xhud6widget_v"
/* 8002E47C 0002B55C  3B BD 00 01 */	addi r29, r29, 0x1
/* 8002E480 0002B560  3B DE 00 08 */	addi r30, r30, 0x8
/* 8002E484 0002B564  28 1D 00 04 */	cmplwi r29, 0x4
/* 8002E488 0002B568  41 80 FF E4 */	blt .L_8002E46C
/* 8002E48C 0002B56C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002E490 0002B570  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002E494 0002B574  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002E498 0002B578  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002E49C 0002B57C  7C 08 03 A6 */	mtlr r0
/* 8002E4A0 0002B580  38 21 00 20 */	addi r1, r1, 0x20
/* 8002E4A4 0002B584  4E 80 00 20 */	blr
.endfn setup_all__Q24xhud6widgetFv

# xhud::widget::update_all(float)
.fn update_all__Q24xhud6widgetFf, global
/* 8002E4A8 0002B588  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002E4AC 0002B58C  7C 08 02 A6 */	mflr r0
/* 8002E4B0 0002B590  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002E4B4 0002B594  38 61 00 0C */	addi r3, r1, 0xc
/* 8002E4B8 0002B598  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002E4BC 0002B59C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002E4C0 0002B5A0  48 00 00 51 */	bl "__ct__Q34xhud18@unnamed@xHud_cpp@14functor_updateFf"
/* 8002E4C4 0002B5A4  3C 60 80 25 */	lis r3, "known_types__Q24xhud18@unnamed@xHud_cpp@"@ha
/* 8002E4C8 0002B5A8  3B C0 00 00 */	li r30, 0x0
/* 8002E4CC 0002B5AC  3B E3 2E 90 */	addi r31, r3, "known_types__Q24xhud18@unnamed@xHud_cpp@"@l
.L_8002E4D0:
/* 8002E4D0 0002B5B0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8002E4D4 0002B5B4  38 A1 00 08 */	addi r5, r1, 0x8
/* 8002E4D8 0002B5B8  88 7F 00 00 */	lbz r3, 0x0(r31)
/* 8002E4DC 0002B5BC  90 01 00 08 */	stw r0, 0x8(r1)
/* 8002E4E0 0002B5C0  80 9F 00 04 */	lwz r4, 0x4(r31)
/* 8002E4E4 0002B5C4  48 00 06 F9 */	bl "for_each<Q34xhud18@unnamed@xHud_cpp@14functor_update>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@14functor_update"
/* 8002E4E8 0002B5C8  3B DE 00 01 */	addi r30, r30, 0x1
/* 8002E4EC 0002B5CC  3B FF 00 08 */	addi r31, r31, 0x8
/* 8002E4F0 0002B5D0  28 1E 00 04 */	cmplwi r30, 0x4
/* 8002E4F4 0002B5D4  41 80 FF DC */	blt .L_8002E4D0
/* 8002E4F8 0002B5D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002E4FC 0002B5DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002E500 0002B5E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002E504 0002B5E4  7C 08 03 A6 */	mtlr r0
/* 8002E508 0002B5E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8002E50C 0002B5EC  4E 80 00 20 */	blr
.endfn update_all__Q24xhud6widgetFf

# xhud::@unnamed@xHud_cpp@::functor_update::functor_update(float)
.fn "__ct__Q34xhud18@unnamed@xHud_cpp@14functor_updateFf", local
/* 8002E510 0002B5F0  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 8002E514 0002B5F4  4E 80 00 20 */	blr
.endfn "__ct__Q34xhud18@unnamed@xHud_cpp@14functor_updateFf"

# xhud::widget::render_all()
.fn render_all__Q24xhud6widgetFv, global
/* 8002E518 0002B5F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002E51C 0002B5FC  7C 08 02 A6 */	mflr r0
/* 8002E520 0002B600  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002E524 0002B604  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002E528 0002B608  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002E52C 0002B60C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002E530 0002B610  48 00 09 E1 */	bl debug_render__Q24xhud6widgetFv
/* 8002E534 0002B614  3C 80 80 25 */	lis r4, "known_types__Q24xhud18@unnamed@xHud_cpp@"@ha
/* 8002E538 0002B618  3C 60 80 03 */	lis r3, "fp_render__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget"@ha
/* 8002E53C 0002B61C  3B C4 2E 90 */	addi r30, r4, "known_types__Q24xhud18@unnamed@xHud_cpp@"@l
/* 8002E540 0002B620  3B A0 00 00 */	li r29, 0x0
/* 8002E544 0002B624  3B E3 E3 84 */	addi r31, r3, "fp_render__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget"@l
.L_8002E548:
/* 8002E548 0002B628  88 7E 00 00 */	lbz r3, 0x0(r30)
/* 8002E54C 0002B62C  7F E5 FB 78 */	mr r5, r31
/* 8002E550 0002B630  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 8002E554 0002B634  48 00 07 0D */	bl "for_each<PFRQ24xhud6widget_v>__Q24xhud18@unnamed@xHud_cpp@FUcUiPFRQ24xhud6widget_v"
/* 8002E558 0002B638  3B BD 00 01 */	addi r29, r29, 0x1
/* 8002E55C 0002B63C  3B DE 00 08 */	addi r30, r30, 0x8
/* 8002E560 0002B640  28 1D 00 04 */	cmplwi r29, 0x4
/* 8002E564 0002B644  41 80 FF E4 */	blt .L_8002E548
/* 8002E568 0002B648  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002E56C 0002B64C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002E570 0002B650  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002E574 0002B654  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002E578 0002B658  7C 08 03 A6 */	mtlr r0
/* 8002E57C 0002B65C  38 21 00 20 */	addi r1, r1, 0x20
/* 8002E580 0002B660  4E 80 00 20 */	blr
.endfn render_all__Q24xhud6widgetFv

# xhud::widget::add_motive(const xhud::motive&)
.fn add_motive__Q24xhud6widgetFRCQ24xhud6motive, global
/* 8002E584 0002B664  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002E588 0002B668  7C 08 02 A6 */	mflr r0
/* 8002E58C 0002B66C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002E590 0002B670  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002E594 0002B674  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002E598 0002B678  7C 9E 23 78 */	mr r30, r4
/* 8002E59C 0002B67C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002E5A0 0002B680  7C 7D 1B 78 */	mr r29, r3
/* 8002E5A4 0002B684  4B FF F5 5D */	bl motive_allocator__Q24xhud6widgetFv
/* 8002E5A8 0002B688  4B FF F4 F1 */	bl alloc__Q24xhud15block_allocatorFv
/* 8002E5AC 0002B68C  7C 60 1B 78 */	mr r0, r3
/* 8002E5B0 0002B690  38 60 00 24 */	li r3, 0x24
/* 8002E5B4 0002B694  7C 1F 03 78 */	mr r31, r0
/* 8002E5B8 0002B698  7F E4 FB 78 */	mr r4, r31
/* 8002E5BC 0002B69C  48 00 0A 25 */	bl __nw__FUlPv
/* 8002E5C0 0002B6A0  28 03 00 00 */	cmplwi r3, 0x0
/* 8002E5C4 0002B6A4  41 82 00 0C */	beq .L_8002E5D0
/* 8002E5C8 0002B6A8  7F C4 F3 78 */	mr r4, r30
/* 8002E5CC 0002B6AC  48 00 09 49 */	bl __ct__Q24xhud6motiveFRCQ24xhud6motive
.L_8002E5D0:
/* 8002E5D0 0002B6B0  80 1D 00 80 */	lwz r0, 0x80(r29)
/* 8002E5D4 0002B6B4  28 00 00 00 */	cmplwi r0, 0x0
/* 8002E5D8 0002B6B8  40 82 00 14 */	bne .L_8002E5EC
/* 8002E5DC 0002B6BC  80 1D 00 78 */	lwz r0, 0x78(r29)
/* 8002E5E0 0002B6C0  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8002E5E4 0002B6C4  93 FD 00 78 */	stw r31, 0x78(r29)
/* 8002E5E8 0002B6C8  48 00 00 24 */	b .L_8002E60C
.L_8002E5EC:
/* 8002E5EC 0002B6CC  80 1D 00 7C */	lwz r0, 0x7c(r29)
/* 8002E5F0 0002B6D0  28 00 00 00 */	cmplwi r0, 0x0
/* 8002E5F4 0002B6D4  40 82 00 0C */	bne .L_8002E600
/* 8002E5F8 0002B6D8  38 1F 00 24 */	addi r0, r31, 0x24
/* 8002E5FC 0002B6DC  90 1D 00 80 */	stw r0, 0x80(r29)
.L_8002E600:
/* 8002E600 0002B6E0  80 1D 00 7C */	lwz r0, 0x7c(r29)
/* 8002E604 0002B6E4  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8002E608 0002B6E8  93 FD 00 7C */	stw r31, 0x7c(r29)
.L_8002E60C:
/* 8002E60C 0002B6EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002E610 0002B6F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002E614 0002B6F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002E618 0002B6F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002E61C 0002B6FC  7C 08 03 A6 */	mtlr r0
/* 8002E620 0002B700  38 21 00 20 */	addi r1, r1, 0x20
/* 8002E624 0002B704  4E 80 00 20 */	blr
.endfn add_motive__Q24xhud6widgetFRCQ24xhud6motive

# xhud::widget::clear_motives()
.fn clear_motives__Q24xhud6widgetFv, global
/* 8002E628 0002B708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002E62C 0002B70C  7C 08 02 A6 */	mflr r0
/* 8002E630 0002B710  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002E634 0002B714  38 00 00 00 */	li r0, 0x0
/* 8002E638 0002B718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002E63C 0002B71C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002E640 0002B720  7C 7E 1B 78 */	mr r30, r3
/* 8002E644 0002B724  90 03 00 70 */	stw r0, 0x70(r3)
/* 8002E648 0002B728  83 E3 00 78 */	lwz r31, 0x78(r3)
/* 8002E64C 0002B72C  48 00 00 24 */	b .L_8002E670
.L_8002E650:
/* 8002E650 0002B730  7F E3 FB 78 */	mr r3, r31
/* 8002E654 0002B734  48 00 09 05 */	bl finish__Q24xhud6motiveFv
/* 8002E658 0002B738  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8002E65C 0002B73C  90 1E 00 78 */	stw r0, 0x78(r30)
/* 8002E660 0002B740  4B FF F4 A1 */	bl motive_allocator__Q24xhud6widgetFv
/* 8002E664 0002B744  7F E4 FB 78 */	mr r4, r31
/* 8002E668 0002B748  4B FF F4 7D */	bl free__Q24xhud15block_allocatorFPv
/* 8002E66C 0002B74C  83 FE 00 78 */	lwz r31, 0x78(r30)
.L_8002E670:
/* 8002E670 0002B750  28 1F 00 00 */	cmplwi r31, 0x0
/* 8002E674 0002B754  40 82 FF DC */	bne .L_8002E650
/* 8002E678 0002B758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002E67C 0002B75C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002E680 0002B760  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002E684 0002B764  7C 08 03 A6 */	mtlr r0
/* 8002E688 0002B768  38 21 00 10 */	addi r1, r1, 0x10
/* 8002E68C 0002B76C  4E 80 00 20 */	blr
.endfn clear_motives__Q24xhud6widgetFv

# xhud::widget::clear_motives(bool (*)(xhud::widget&, xhud::motive&, float), void*)
.fn clear_motives__Q24xhud6widgetFPFRQ24xhud6widgetRQ24xhud6motivef_bPv, global
/* 8002E690 0002B770  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002E694 0002B774  7C 08 02 A6 */	mflr r0
/* 8002E698 0002B778  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002E69C 0002B77C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8002E6A0 0002B780  7C 7B 1B 78 */	mr r27, r3
/* 8002E6A4 0002B784  7C 9C 23 78 */	mr r28, r4
/* 8002E6A8 0002B788  7C BD 2B 78 */	mr r29, r5
/* 8002E6AC 0002B78C  3B FB 00 78 */	addi r31, r27, 0x78
/* 8002E6B0 0002B790  83 C3 00 78 */	lwz r30, 0x78(r3)
/* 8002E6B4 0002B794  48 00 00 3C */	b .L_8002E6F0
.L_8002E6B8:
/* 8002E6B8 0002B798  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8002E6BC 0002B79C  7C 00 E0 40 */	cmplw r0, r28
/* 8002E6C0 0002B7A0  40 82 00 28 */	bne .L_8002E6E8
/* 8002E6C4 0002B7A4  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 8002E6C8 0002B7A8  7C 00 E8 40 */	cmplw r0, r29
/* 8002E6CC 0002B7AC  40 82 00 1C */	bne .L_8002E6E8
/* 8002E6D0 0002B7B0  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 8002E6D4 0002B7B4  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8002E6D8 0002B7B8  4B FF F4 29 */	bl motive_allocator__Q24xhud6widgetFv
/* 8002E6DC 0002B7BC  7F C4 F3 78 */	mr r4, r30
/* 8002E6E0 0002B7C0  4B FF F4 05 */	bl free__Q24xhud15block_allocatorFPv
/* 8002E6E4 0002B7C4  48 00 00 08 */	b .L_8002E6EC
.L_8002E6E8:
/* 8002E6E8 0002B7C8  3B FE 00 24 */	addi r31, r30, 0x24
.L_8002E6EC:
/* 8002E6EC 0002B7CC  83 DF 00 00 */	lwz r30, 0x0(r31)
.L_8002E6F0:
/* 8002E6F0 0002B7D0  28 1E 00 00 */	cmplwi r30, 0x0
/* 8002E6F4 0002B7D4  40 82 FF C4 */	bne .L_8002E6B8
/* 8002E6F8 0002B7D8  80 1B 00 78 */	lwz r0, 0x78(r27)
/* 8002E6FC 0002B7DC  28 00 00 00 */	cmplwi r0, 0x0
/* 8002E700 0002B7E0  40 82 00 0C */	bne .L_8002E70C
/* 8002E704 0002B7E4  38 00 00 00 */	li r0, 0x0
/* 8002E708 0002B7E8  90 1B 00 70 */	stw r0, 0x70(r27)
.L_8002E70C:
/* 8002E70C 0002B7EC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8002E710 0002B7F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002E714 0002B7F4  7C 08 03 A6 */	mtlr r0
/* 8002E718 0002B7F8  38 21 00 20 */	addi r1, r1, 0x20
/* 8002E71C 0002B7FC  4E 80 00 20 */	blr
.endfn clear_motives__Q24xhud6widgetFPFRQ24xhud6widgetRQ24xhud6motivef_bPv

# xhud::widget::cb_dispatch(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn cb_dispatch__Q24xhud6widgetFP5xBaseP5xBaseUiPCfP5xBase, global
/* 8002E720 0002B800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002E724 0002B804  7C 08 02 A6 */	mflr r0
/* 8002E728 0002B808  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002E72C 0002B80C  7C 60 1B 78 */	mr r0, r3
/* 8002E730 0002B810  38 64 00 10 */	addi r3, r4, 0x10
/* 8002E734 0002B814  81 84 00 84 */	lwz r12, 0x84(r4)
/* 8002E738 0002B818  7C 04 03 78 */	mr r4, r0
/* 8002E73C 0002B81C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8002E740 0002B820  7D 89 03 A6 */	mtctr r12
/* 8002E744 0002B824  4E 80 04 21 */	bctrl
/* 8002E748 0002B828  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002E74C 0002B82C  38 60 00 01 */	li r3, 0x1
/* 8002E750 0002B830  7C 08 03 A6 */	mtlr r0
/* 8002E754 0002B834  38 21 00 10 */	addi r1, r1, 0x10
/* 8002E758 0002B838  4E 80 00 20 */	blr
.endfn cb_dispatch__Q24xhud6widgetFP5xBaseP5xBaseUiPCfP5xBase

# xhud::load_model(unsigned int)
.fn load_model__4xhudFUi, global
/* 8002E75C 0002B83C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002E760 0002B840  7C 08 02 A6 */	mflr r0
/* 8002E764 0002B844  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8002E768 0002B848  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002E76C 0002B84C  38 84 2E E8 */	addi r4, r4, "@stringBase0"@l
/* 8002E770 0002B850  38 84 00 0B */	addi r4, r4, 0xb
/* 8002E774 0002B854  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002E778 0002B858  7C 7F 1B 78 */	mr r31, r3
/* 8002E77C 0002B85C  48 01 DB 21 */	bl xStrHashCat__FUiPCc
/* 8002E780 0002B860  38 81 00 08 */	addi r4, r1, 0x8
/* 8002E784 0002B864  48 01 CF 89 */	bl xSTFindAsset__FUiPUi
/* 8002E788 0002B868  28 03 00 00 */	cmplwi r3, 0x0
/* 8002E78C 0002B86C  41 82 00 10 */	beq .L_8002E79C
/* 8002E790 0002B870  38 80 00 00 */	li r4, 0x0
/* 8002E794 0002B874  48 02 6D 41 */	bl zEntRecurseModelInfo__FPvP4xEnt
/* 8002E798 0002B878  48 00 00 58 */	b .L_8002E7F0
.L_8002E79C:
/* 8002E79C 0002B87C  7F E3 FB 78 */	mr r3, r31
/* 8002E7A0 0002B880  38 81 00 08 */	addi r4, r1, 0x8
/* 8002E7A4 0002B884  48 01 CF 69 */	bl xSTFindAsset__FUiPUi
/* 8002E7A8 0002B888  28 03 00 00 */	cmplwi r3, 0x0
/* 8002E7AC 0002B88C  40 82 00 20 */	bne .L_8002E7CC
/* 8002E7B0 0002B890  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8002E7B4 0002B894  7F E3 FB 78 */	mr r3, r31
/* 8002E7B8 0002B898  38 84 2E E8 */	addi r4, r4, "@stringBase0"@l
/* 8002E7BC 0002B89C  38 84 00 11 */	addi r4, r4, 0x11
/* 8002E7C0 0002B8A0  48 01 DA DD */	bl xStrHashCat__FUiPCc
/* 8002E7C4 0002B8A4  38 81 00 08 */	addi r4, r1, 0x8
/* 8002E7C8 0002B8A8  48 01 CF 45 */	bl xSTFindAsset__FUiPUi
.L_8002E7CC:
/* 8002E7CC 0002B8AC  28 03 00 00 */	cmplwi r3, 0x0
/* 8002E7D0 0002B8B0  40 82 00 0C */	bne .L_8002E7DC
/* 8002E7D4 0002B8B4  38 60 00 00 */	li r3, 0x0
/* 8002E7D8 0002B8B8  48 00 00 18 */	b .L_8002E7F0
.L_8002E7DC:
/* 8002E7DC 0002B8BC  38 80 00 00 */	li r4, 0x0
/* 8002E7E0 0002B8C0  38 A0 00 00 */	li r5, 0x0
/* 8002E7E4 0002B8C4  38 C0 00 00 */	li r6, 0x0
/* 8002E7E8 0002B8C8  38 E0 00 00 */	li r7, 0x0
/* 8002E7EC 0002B8CC  48 00 59 05 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
.L_8002E7F0:
/* 8002E7F0 0002B8D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002E7F4 0002B8D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002E7F8 0002B8D8  7C 08 03 A6 */	mtlr r0
/* 8002E7FC 0002B8DC  38 21 00 20 */	addi r1, r1, 0x20
/* 8002E800 0002B8E0  4E 80 00 20 */	blr
.endfn load_model__4xhudFUi

# xhud::@unnamed@xHud_cpp@::render_one_model(xModelInstance&, float, const basic_rect<float>&, const xVec3&, const xVec3&, const xMat4x3&)
.fn "render_one_model__Q24xhud18@unnamed@xHud_cpp@FR14xModelInstancefRC13basic_rect<f>RC5xVec3RC5xVec3RC7xMat4x3", local
/* 8002E804 0002B8E4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8002E808 0002B8E8  7C 08 02 A6 */	mflr r0
/* 8002E80C 0002B8EC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8002E810 0002B8F0  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8002E814 0002B8F4  7C 9C 23 78 */	mr r28, r4
/* 8002E818 0002B8F8  7C 7B 1B 78 */	mr r27, r3
/* 8002E81C 0002B8FC  7C BD 2B 78 */	mr r29, r5
/* 8002E820 0002B900  7C DE 33 78 */	mr r30, r6
/* 8002E824 0002B904  7C FF 3B 78 */	mr r31, r7
/* 8002E828 0002B908  C0 42 84 00 */	lfs f2, "@1214"@sda21(r2)
/* 8002E82C 0002B90C  C0 02 83 F0 */	lfs f0, "@955"@sda21(r2)
/* 8002E830 0002B910  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8002E834 0002B914  FC 00 00 1E */	fctiwz f0, f0
/* 8002E838 0002B918  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8002E83C 0002B91C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8002E840 0002B920  48 00 65 11 */	bl xModelSetMaterialAlpha__FP14xModelInstanceUc
/* 8002E844 0002B924  7F 63 DB 78 */	mr r3, r27
/* 8002E848 0002B928  7F E4 FB 78 */	mr r4, r31
/* 8002E84C 0002B92C  4B FE D0 C1 */	bl xModelSetFrame__FP14xModelInstancePC7xMat4x3
/* 8002E850 0002B930  7F 63 DB 78 */	mr r3, r27
/* 8002E854 0002B934  7F 84 E3 78 */	mr r4, r28
/* 8002E858 0002B938  7F A5 EB 78 */	mr r5, r29
/* 8002E85C 0002B93C  7F C6 F3 78 */	mr r6, r30
/* 8002E860 0002B940  48 00 61 C1 */	bl "xModelRender2D__FRC14xModelInstanceRC13basic_rect<f>RC5xVec3RC5xVec3"
/* 8002E864 0002B944  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8002E868 0002B948  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8002E86C 0002B94C  7C 08 03 A6 */	mtlr r0
/* 8002E870 0002B950  38 21 00 30 */	addi r1, r1, 0x30
/* 8002E874 0002B954  4E 80 00 20 */	blr
.endfn "render_one_model__Q24xhud18@unnamed@xHud_cpp@FR14xModelInstancefRC13basic_rect<f>RC5xVec3RC5xVec3RC7xMat4x3"

# xhud::render_model(xModelInstance&, const xhud::render_context&)
.fn render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context, global
/* 8002E878 0002B958  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8002E87C 0002B95C  7C 08 02 A6 */	mflr r0
/* 8002E880 0002B960  90 01 00 84 */	stw r0, 0x84(r1)
/* 8002E884 0002B964  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8002E888 0002B968  7C 7F 1B 78 */	mr r31, r3
/* 8002E88C 0002B96C  38 61 00 30 */	addi r3, r1, 0x30
/* 8002E890 0002B970  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8002E894 0002B974  7C 9E 23 78 */	mr r30, r4
/* 8002E898 0002B978  3C 80 80 25 */	lis r4, ...rodata.0@ha
/* 8002E89C 0002B97C  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 8002E8A0 0002B980  39 84 2D 18 */	addi r12, r4, ...rodata.0@l
/* 8002E8A4 0002B984  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8002E8A8 0002B988  81 6C 01 98 */	lwz r11, 0x198(r12)
/* 8002E8AC 0002B98C  FC 00 00 50 */	fneg f0, f0
/* 8002E8B0 0002B990  81 4C 01 9C */	lwz r10, 0x19c(r12)
/* 8002E8B4 0002B994  81 2C 01 A0 */	lwz r9, 0x1a0(r12)
/* 8002E8B8 0002B998  81 0C 01 A4 */	lwz r8, 0x1a4(r12)
/* 8002E8BC 0002B99C  80 0C 01 BC */	lwz r0, 0x1bc(r12)
/* 8002E8C0 0002B9A0  80 EC 01 A8 */	lwz r7, 0x1a8(r12)
/* 8002E8C4 0002B9A4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8002E8C8 0002B9A8  80 CC 01 AC */	lwz r6, 0x1ac(r12)
/* 8002E8CC 0002B9AC  80 AC 01 B0 */	lwz r5, 0x1b0(r12)
/* 8002E8D0 0002B9B0  80 8C 01 B4 */	lwz r4, 0x1b4(r12)
/* 8002E8D4 0002B9B4  80 0C 01 B8 */	lwz r0, 0x1b8(r12)
/* 8002E8D8 0002B9B8  91 61 00 20 */	stw r11, 0x20(r1)
/* 8002E8DC 0002B9BC  C0 5E 00 04 */	lfs f2, 0x4(r30)
/* 8002E8E0 0002B9C0  91 41 00 24 */	stw r10, 0x24(r1)
/* 8002E8E4 0002B9C4  C0 7E 00 0C */	lfs f3, 0xc(r30)
/* 8002E8E8 0002B9C8  91 21 00 28 */	stw r9, 0x28(r1)
/* 8002E8EC 0002B9CC  C0 9E 00 10 */	lfs f4, 0x10(r30)
/* 8002E8F0 0002B9D0  91 01 00 2C */	stw r8, 0x2c(r1)
/* 8002E8F4 0002B9D4  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8002E8F8 0002B9D8  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8002E8FC 0002B9DC  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8002E900 0002B9E0  C0 5E 00 1C */	lfs f2, 0x1c(r30)
/* 8002E904 0002B9E4  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 8002E908 0002B9E8  C0 7E 00 20 */	lfs f3, 0x20(r30)
/* 8002E90C 0002B9EC  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 8002E910 0002B9F0  90 E1 00 14 */	stw r7, 0x14(r1)
/* 8002E914 0002B9F4  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8002E918 0002B9F8  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8002E91C 0002B9FC  90 81 00 08 */	stw r4, 0x8(r1)
/* 8002E920 0002BA00  90 01 00 0C */	stw r0, 0xc(r1)
/* 8002E924 0002BA04  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8002E928 0002BA08  48 00 38 A9 */	bl xMat3x3Euler__FP7xMat3x3fff
/* 8002E92C 0002BA0C  C0 22 83 D8 */	lfs f1, "@857"@sda21(r2)
/* 8002E930 0002BA10  38 61 00 30 */	addi r3, r1, 0x30
/* 8002E934 0002BA14  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 8002E938 0002BA18  EC 21 00 2A */	fadds f1, f1, f0
/* 8002E93C 0002BA1C  4B FD C8 45 */	bl __amu__5xVec3Ff
/* 8002E940 0002BA20  C0 22 83 D8 */	lfs f1, "@857"@sda21(r2)
/* 8002E944 0002BA24  38 61 00 40 */	addi r3, r1, 0x40
/* 8002E948 0002BA28  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 8002E94C 0002BA2C  EC 21 00 2A */	fadds f1, f1, f0
/* 8002E950 0002BA30  4B FD C8 31 */	bl __amu__5xVec3Ff
/* 8002E954 0002BA34  C0 22 84 04 */	lfs f1, "@1238"@sda21(r2)
/* 8002E958 0002BA38  38 61 00 50 */	addi r3, r1, 0x50
/* 8002E95C 0002BA3C  4B FD C8 25 */	bl __amu__5xVec3Ff
/* 8002E960 0002BA40  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002E964 0002BA44  38 00 00 00 */	li r0, 0x0
/* 8002E968 0002BA48  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 8002E96C 0002BA4C  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8002E970 0002BA50  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8002E974 0002BA54  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8002E978 0002BA58  48 00 00 24 */	b .L_8002E99C
.L_8002E97C:
/* 8002E97C 0002BA5C  C0 3E 00 30 */	lfs f1, 0x30(r30)
/* 8002E980 0002BA60  7F E3 FB 78 */	mr r3, r31
/* 8002E984 0002BA64  38 81 00 20 */	addi r4, r1, 0x20
/* 8002E988 0002BA68  38 A1 00 14 */	addi r5, r1, 0x14
/* 8002E98C 0002BA6C  38 C1 00 08 */	addi r6, r1, 0x8
/* 8002E990 0002BA70  38 E1 00 30 */	addi r7, r1, 0x30
/* 8002E994 0002BA74  4B FF FE 71 */	bl "render_one_model__Q24xhud18@unnamed@xHud_cpp@FR14xModelInstancefRC13basic_rect<f>RC5xVec3RC5xVec3RC7xMat4x3"
/* 8002E998 0002BA78  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_8002E99C:
/* 8002E99C 0002BA7C  28 1F 00 00 */	cmplwi r31, 0x0
/* 8002E9A0 0002BA80  40 82 FF DC */	bne .L_8002E97C
/* 8002E9A4 0002BA84  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8002E9A8 0002BA88  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8002E9AC 0002BA8C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8002E9B0 0002BA90  7C 08 03 A6 */	mtlr r0
/* 8002E9B4 0002BA94  38 21 00 80 */	addi r1, r1, 0x80
/* 8002E9B8 0002BA98  4E 80 00 20 */	blr
.endfn render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context

# xhud::linear_motive_update(xhud::widget&, xhud::motive&, float)
.fn linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef, global
/* 8002E9BC 0002BA9C  C0 44 00 04 */	lfs f2, 0x4(r4)
/* 8002E9C0 0002BAA0  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002E9C4 0002BAA4  EC 61 00 B2 */	fmuls f3, f1, f2
/* 8002E9C8 0002BAA8  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 8002E9CC 0002BAAC  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8002E9D0 0002BAB0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8002E9D4 0002BAB4  EC 22 08 28 */	fsubs f1, f2, f1
/* 8002E9D8 0002BAB8  4C 41 13 82 */	cror eq, gt, eq
/* 8002E9DC 0002BABC  40 82 00 10 */	bne .L_8002E9EC
/* 8002E9E0 0002BAC0  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8002E9E4 0002BAC4  4C 41 13 82 */	cror eq, gt, eq
/* 8002E9E8 0002BAC8  41 82 00 1C */	beq .L_8002EA04
.L_8002E9EC:
/* 8002E9EC 0002BACC  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002E9F0 0002BAD0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8002E9F4 0002BAD4  40 80 00 30 */	bge .L_8002EA24
/* 8002E9F8 0002BAD8  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8002E9FC 0002BADC  4C 40 13 82 */	cror eq, lt, eq
/* 8002EA00 0002BAE0  40 82 00 24 */	bne .L_8002EA24
.L_8002EA04:
/* 8002EA04 0002BAE4  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 8002EA08 0002BAE8  38 60 00 00 */	li r3, 0x0
/* 8002EA0C 0002BAEC  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8002EA10 0002BAF0  EC 00 08 2A */	fadds f0, f0, f1
/* 8002EA14 0002BAF4  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8002EA18 0002BAF8  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8002EA1C 0002BAFC  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8002EA20 0002BB00  4E 80 00 20 */	blr
.L_8002EA24:
/* 8002EA24 0002BB04  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 8002EA28 0002BB08  38 60 00 01 */	li r3, 0x1
/* 8002EA2C 0002BB0C  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8002EA30 0002BB10  EC 00 18 2A */	fadds f0, f0, f3
/* 8002EA34 0002BB14  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8002EA38 0002BB18  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8002EA3C 0002BB1C  EC 00 18 2A */	fadds f0, f0, f3
/* 8002EA40 0002BB20  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8002EA44 0002BB24  4E 80 00 20 */	blr
.endfn linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef

# xhud::accelerate_motive_update(xhud::widget&, xhud::motive&, float)
.fn accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef, global
/* 8002EA48 0002BB28  C0 02 83 F0 */	lfs f0, "@955"@sda21(r2)
/* 8002EA4C 0002BB2C  C0 84 00 14 */	lfs f4, 0x14(r4)
/* 8002EA50 0002BB30  C0 44 00 04 */	lfs f2, 0x4(r4)
/* 8002EA54 0002BB34  EC 60 01 32 */	fmuls f3, f0, f4
/* 8002EA58 0002BB38  EC 01 11 3A */	fmadds f0, f1, f4, f2
/* 8002EA5C 0002BB3C  EC 42 00 72 */	fmuls f2, f2, f1
/* 8002EA60 0002BB40  EC 63 00 72 */	fmuls f3, f3, f1
/* 8002EA64 0002BB44  D0 04 00 04 */	stfs f0, 0x4(r4)
/* 8002EA68 0002BB48  EC 61 10 FA */	fmadds f3, f1, f3, f2
/* 8002EA6C 0002BB4C  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002EA70 0002BB50  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 8002EA74 0002BB54  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8002EA78 0002BB58  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8002EA7C 0002BB5C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8002EA80 0002BB60  4C 41 13 82 */	cror eq, gt, eq
/* 8002EA84 0002BB64  40 82 00 10 */	bne .L_8002EA94
/* 8002EA88 0002BB68  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8002EA8C 0002BB6C  4C 41 13 82 */	cror eq, gt, eq
/* 8002EA90 0002BB70  41 82 00 1C */	beq .L_8002EAAC
.L_8002EA94:
/* 8002EA94 0002BB74  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002EA98 0002BB78  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8002EA9C 0002BB7C  40 80 00 30 */	bge .L_8002EACC
/* 8002EAA0 0002BB80  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8002EAA4 0002BB84  4C 40 13 82 */	cror eq, lt, eq
/* 8002EAA8 0002BB88  40 82 00 24 */	bne .L_8002EACC
.L_8002EAAC:
/* 8002EAAC 0002BB8C  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 8002EAB0 0002BB90  38 60 00 00 */	li r3, 0x0
/* 8002EAB4 0002BB94  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8002EAB8 0002BB98  EC 00 08 2A */	fadds f0, f0, f1
/* 8002EABC 0002BB9C  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8002EAC0 0002BBA0  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8002EAC4 0002BBA4  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8002EAC8 0002BBA8  4E 80 00 20 */	blr
.L_8002EACC:
/* 8002EACC 0002BBAC  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 8002EAD0 0002BBB0  38 60 00 01 */	li r3, 0x1
/* 8002EAD4 0002BBB4  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8002EAD8 0002BBB8  EC 00 18 2A */	fadds f0, f0, f3
/* 8002EADC 0002BBBC  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8002EAE0 0002BBC0  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8002EAE4 0002BBC4  EC 00 18 2A */	fadds f0, f0, f3
/* 8002EAE8 0002BBC8  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8002EAEC 0002BBCC  4E 80 00 20 */	blr
.endfn accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef

# xhud::shake_motive_update(xhud::widget&, xhud::motive&, float)
.fn shake_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef, global
/* 8002EAF0 0002BBD0  80 64 00 1C */	lwz r3, 0x1c(r4)
/* 8002EAF4 0002BBD4  38 03 00 01 */	addi r0, r3, 0x1
/* 8002EAF8 0002BBD8  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8002EAFC 0002BBDC  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8002EB00 0002BBE0  28 00 00 32 */	cmplwi r0, 0x32
/* 8002EB04 0002BBE4  40 81 00 30 */	ble .L_8002EB34
/* 8002EB08 0002BBE8  38 00 00 00 */	li r0, 0x0
/* 8002EB0C 0002BBEC  38 60 00 00 */	li r3, 0x0
/* 8002EB10 0002BBF0  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8002EB14 0002BBF4  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 8002EB18 0002BBF8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8002EB1C 0002BBFC  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8002EB20 0002BC00  EC 01 00 28 */	fsubs f0, f1, f0
/* 8002EB24 0002BC04  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8002EB28 0002BC08  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002EB2C 0002BC0C  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8002EB30 0002BC10  4E 80 00 20 */	blr
.L_8002EB34:
/* 8002EB34 0002BC14  3C 60 80 25 */	lis r3, mult$1265@ha
/* 8002EB38 0002BC18  54 05 07 BF */	clrlwi. r5, r0, 30
/* 8002EB3C 0002BC1C  54 00 17 3A */	clrlslwi r0, r0, 30, 2
/* 8002EB40 0002BC20  C0 24 00 04 */	lfs f1, 0x4(r4)
/* 8002EB44 0002BC24  38 63 2E D8 */	addi r3, r3, mult$1265@l
/* 8002EB48 0002BC28  7C 03 04 2E */	lfsx f0, r3, r0
/* 8002EB4C 0002BC2C  EC 41 00 32 */	fmuls f2, f1, f0
/* 8002EB50 0002BC30  40 82 00 10 */	bne .L_8002EB60
/* 8002EB54 0002BC34  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8002EB58 0002BC38  EC 01 00 32 */	fmuls f0, f1, f0
/* 8002EB5C 0002BC3C  D0 04 00 04 */	stfs f0, 0x4(r4)
.L_8002EB60:
/* 8002EB60 0002BC40  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 8002EB64 0002BC44  38 60 00 01 */	li r3, 0x1
/* 8002EB68 0002BC48  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8002EB6C 0002BC4C  EC 00 10 2A */	fadds f0, f0, f2
/* 8002EB70 0002BC50  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8002EB74 0002BC54  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8002EB78 0002BC58  EC 00 10 2A */	fadds f0, f0, f2
/* 8002EB7C 0002BC5C  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8002EB80 0002BC60  4E 80 00 20 */	blr
.endfn shake_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef

# xhud::delay_motive_update(xhud::widget&, xhud::motive&, float)
.fn delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef, global
/* 8002EB84 0002BC64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002EB88 0002BC68  7C 08 02 A6 */	mflr r0
/* 8002EB8C 0002BC6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002EB90 0002BC70  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8002EB94 0002BC74  EC 00 08 2A */	fadds f0, f0, f1
/* 8002EB98 0002BC78  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8002EB9C 0002BC7C  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 8002EBA0 0002BC80  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8002EBA4 0002BC84  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002EBA8 0002BC88  EC 22 08 28 */	fsubs f1, f2, f1
/* 8002EBAC 0002BC8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002EBB0 0002BC90  40 80 00 18 */	bge .L_8002EBC8
/* 8002EBB4 0002BC94  81 84 00 1C */	lwz r12, 0x1c(r4)
/* 8002EBB8 0002BC98  7D 89 03 A6 */	mtctr r12
/* 8002EBBC 0002BC9C  4E 80 04 21 */	bctrl
/* 8002EBC0 0002BCA0  38 60 00 00 */	li r3, 0x0
/* 8002EBC4 0002BCA4  48 00 00 08 */	b .L_8002EBCC
.L_8002EBC8:
/* 8002EBC8 0002BCA8  38 60 00 01 */	li r3, 0x1
.L_8002EBCC:
/* 8002EBCC 0002BCAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002EBD0 0002BCB0  7C 08 03 A6 */	mtlr r0
/* 8002EBD4 0002BCB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002EBD8 0002BCB8  4E 80 00 20 */	blr
.endfn delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef

# xhud::@unnamed@xHud_cpp@::for_each<xhud::@unnamed@xHud_cpp@::functor_update>(unsigned char, unsigned int, xhud::@unnamed@xHud_cpp@::functor_update)
.fn "for_each<Q34xhud18@unnamed@xHud_cpp@14functor_update>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@14functor_update", weak
/* 8002EBDC 0002BCBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002EBE0 0002BCC0  7C 08 02 A6 */	mflr r0
/* 8002EBE4 0002BCC4  3C C0 80 3C */	lis r6, globals@ha
/* 8002EBE8 0002BCC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002EBEC 0002BCCC  54 60 15 BA */	clrlslwi r0, r3, 24, 2
/* 8002EBF0 0002BCD0  38 66 05 58 */	addi r3, r6, globals@l
/* 8002EBF4 0002BCD4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002EBF8 0002BCD8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002EBFC 0002BCDC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002EC00 0002BCE0  7C BD 2B 78 */	mr r29, r5
/* 8002EC04 0002BCE4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8002EC08 0002BCE8  7C 9C 23 78 */	mr r28, r4
/* 8002EC0C 0002BCEC  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8002EC10 0002BCF0  7C 63 02 14 */	add r3, r3, r0
/* 8002EC14 0002BCF4  80 03 00 84 */	lwz r0, 0x84(r3)
/* 8002EC18 0002BCF8  83 E3 01 A4 */	lwz r31, 0x1a4(r3)
/* 8002EC1C 0002BCFC  7C 00 E1 D6 */	mullw r0, r0, r28
/* 8002EC20 0002BD00  7F DF 02 14 */	add r30, r31, r0
/* 8002EC24 0002BD04  48 00 00 14 */	b .L_8002EC38
.L_8002EC28:
/* 8002EC28 0002BD08  7F A3 EB 78 */	mr r3, r29
/* 8002EC2C 0002BD0C  38 9F 00 10 */	addi r4, r31, 0x10
/* 8002EC30 0002BD10  48 00 01 99 */	bl "__cl__Q34xhud18@unnamed@xHud_cpp@14functor_updateFRQ24xhud6widget"
/* 8002EC34 0002BD14  7F FF E2 14 */	add r31, r31, r28
.L_8002EC38:
/* 8002EC38 0002BD18  7C 1F F0 40 */	cmplw r31, r30
/* 8002EC3C 0002BD1C  40 82 FF EC */	bne .L_8002EC28
/* 8002EC40 0002BD20  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002EC44 0002BD24  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002EC48 0002BD28  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002EC4C 0002BD2C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002EC50 0002BD30  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8002EC54 0002BD34  7C 08 03 A6 */	mtlr r0
/* 8002EC58 0002BD38  38 21 00 20 */	addi r1, r1, 0x20
/* 8002EC5C 0002BD3C  4E 80 00 20 */	blr
.endfn "for_each<Q34xhud18@unnamed@xHud_cpp@14functor_update>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@14functor_update"

# xhud::@unnamed@xHud_cpp@::for_each<void (*)(xhud::widget&)>(unsigned char, unsigned int, void (*)(xhud::widget&))
.fn "for_each<PFRQ24xhud6widget_v>__Q24xhud18@unnamed@xHud_cpp@FUcUiPFRQ24xhud6widget_v", weak
/* 8002EC60 0002BD40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002EC64 0002BD44  7C 08 02 A6 */	mflr r0
/* 8002EC68 0002BD48  3C C0 80 3C */	lis r6, globals@ha
/* 8002EC6C 0002BD4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002EC70 0002BD50  54 60 15 BA */	clrlslwi r0, r3, 24, 2
/* 8002EC74 0002BD54  38 66 05 58 */	addi r3, r6, globals@l
/* 8002EC78 0002BD58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002EC7C 0002BD5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002EC80 0002BD60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002EC84 0002BD64  7C BD 2B 78 */	mr r29, r5
/* 8002EC88 0002BD68  93 81 00 10 */	stw r28, 0x10(r1)
/* 8002EC8C 0002BD6C  7C 9C 23 78 */	mr r28, r4
/* 8002EC90 0002BD70  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8002EC94 0002BD74  7C 63 02 14 */	add r3, r3, r0
/* 8002EC98 0002BD78  80 03 00 84 */	lwz r0, 0x84(r3)
/* 8002EC9C 0002BD7C  83 E3 01 A4 */	lwz r31, 0x1a4(r3)
/* 8002ECA0 0002BD80  7C 00 E1 D6 */	mullw r0, r0, r28
/* 8002ECA4 0002BD84  7F DF 02 14 */	add r30, r31, r0
/* 8002ECA8 0002BD88  48 00 00 18 */	b .L_8002ECC0
.L_8002ECAC:
/* 8002ECAC 0002BD8C  7F AC EB 78 */	mr r12, r29
/* 8002ECB0 0002BD90  38 7F 00 10 */	addi r3, r31, 0x10
/* 8002ECB4 0002BD94  7D 89 03 A6 */	mtctr r12
/* 8002ECB8 0002BD98  4E 80 04 21 */	bctrl
/* 8002ECBC 0002BD9C  7F FF E2 14 */	add r31, r31, r28
.L_8002ECC0:
/* 8002ECC0 0002BDA0  7C 1F F0 40 */	cmplw r31, r30
/* 8002ECC4 0002BDA4  40 82 FF E8 */	bne .L_8002ECAC
/* 8002ECC8 0002BDA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002ECCC 0002BDAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002ECD0 0002BDB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002ECD4 0002BDB4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002ECD8 0002BDB8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8002ECDC 0002BDBC  7C 08 03 A6 */	mtlr r0
/* 8002ECE0 0002BDC0  38 21 00 20 */	addi r1, r1, 0x20
/* 8002ECE4 0002BDC4  4E 80 00 20 */	blr
.endfn "for_each<PFRQ24xhud6widget_v>__Q24xhud18@unnamed@xHud_cpp@FUcUiPFRQ24xhud6widget_v"

# xhud::@unnamed@xHud_cpp@::for_each<xhud::@unnamed@xHud_cpp@::functor_disable>(unsigned char, unsigned int, xhud::@unnamed@xHud_cpp@::functor_disable)
.fn "for_each<Q34xhud18@unnamed@xHud_cpp@15functor_disable>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@15functor_disable", weak
/* 8002ECE8 0002BDC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002ECEC 0002BDCC  7C 08 02 A6 */	mflr r0
/* 8002ECF0 0002BDD0  3C C0 80 3C */	lis r6, globals@ha
/* 8002ECF4 0002BDD4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002ECF8 0002BDD8  54 60 15 BA */	clrlslwi r0, r3, 24, 2
/* 8002ECFC 0002BDDC  38 66 05 58 */	addi r3, r6, globals@l
/* 8002ED00 0002BDE0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002ED04 0002BDE4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002ED08 0002BDE8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002ED0C 0002BDEC  7C BD 2B 78 */	mr r29, r5
/* 8002ED10 0002BDF0  93 81 00 10 */	stw r28, 0x10(r1)
/* 8002ED14 0002BDF4  7C 9C 23 78 */	mr r28, r4
/* 8002ED18 0002BDF8  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8002ED1C 0002BDFC  7C 63 02 14 */	add r3, r3, r0
/* 8002ED20 0002BE00  80 03 00 84 */	lwz r0, 0x84(r3)
/* 8002ED24 0002BE04  83 E3 01 A4 */	lwz r31, 0x1a4(r3)
/* 8002ED28 0002BE08  7C 00 E1 D6 */	mullw r0, r0, r28
/* 8002ED2C 0002BE0C  7F DF 02 14 */	add r30, r31, r0
/* 8002ED30 0002BE10  48 00 00 14 */	b .L_8002ED44
.L_8002ED34:
/* 8002ED34 0002BE14  7F A3 EB 78 */	mr r3, r29
/* 8002ED38 0002BE18  38 9F 00 10 */	addi r4, r31, 0x10
/* 8002ED3C 0002BE1C  48 00 00 31 */	bl "__cl__Q34xhud18@unnamed@xHud_cpp@15functor_disableFRQ24xhud6widget"
/* 8002ED40 0002BE20  7F FF E2 14 */	add r31, r31, r28
.L_8002ED44:
/* 8002ED44 0002BE24  7C 1F F0 40 */	cmplw r31, r30
/* 8002ED48 0002BE28  40 82 FF EC */	bne .L_8002ED34
/* 8002ED4C 0002BE2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002ED50 0002BE30  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002ED54 0002BE34  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002ED58 0002BE38  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002ED5C 0002BE3C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8002ED60 0002BE40  7C 08 03 A6 */	mtlr r0
/* 8002ED64 0002BE44  38 21 00 20 */	addi r1, r1, 0x20
/* 8002ED68 0002BE48  4E 80 00 20 */	blr
.endfn "for_each<Q34xhud18@unnamed@xHud_cpp@15functor_disable>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@15functor_disable"

# xhud::@unnamed@xHud_cpp@::functor_disable::operator()(xhud::widget&)
.fn "__cl__Q34xhud18@unnamed@xHud_cpp@15functor_disableFRQ24xhud6widget", local
/* 8002ED6C 0002BE4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002ED70 0002BE50  7C 08 02 A6 */	mflr r0
/* 8002ED74 0002BE54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002ED78 0002BE58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002ED7C 0002BE5C  7C 9F 23 78 */	mr r31, r4
/* 8002ED80 0002BE60  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002ED84 0002BE64  7C 7E 1B 78 */	mr r30, r3
/* 8002ED88 0002BE68  7F E3 FB 78 */	mr r3, r31
/* 8002ED8C 0002BE6C  48 00 00 99 */	bl disable__Q24xhud6widgetFv
/* 8002ED90 0002BE70  88 1E 00 00 */	lbz r0, 0x0(r30)
/* 8002ED94 0002BE74  28 00 00 00 */	cmplwi r0, 0x0
/* 8002ED98 0002BE78  41 82 00 18 */	beq .L_8002EDB0
/* 8002ED9C 0002BE7C  7F E3 FB 78 */	mr r3, r31
/* 8002EDA0 0002BE80  81 9F 00 74 */	lwz r12, 0x74(r31)
/* 8002EDA4 0002BE84  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 8002EDA8 0002BE88  7D 89 03 A6 */	mtctr r12
/* 8002EDAC 0002BE8C  4E 80 04 21 */	bctrl
.L_8002EDB0:
/* 8002EDB0 0002BE90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002EDB4 0002BE94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002EDB8 0002BE98  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002EDBC 0002BE9C  7C 08 03 A6 */	mtlr r0
/* 8002EDC0 0002BEA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8002EDC4 0002BEA4  4E 80 00 20 */	blr
.endfn "__cl__Q34xhud18@unnamed@xHud_cpp@15functor_disableFRQ24xhud6widget"

# xhud::@unnamed@xHud_cpp@::functor_update::operator()(xhud::widget&)
.fn "__cl__Q34xhud18@unnamed@xHud_cpp@14functor_updateFRQ24xhud6widget", local
/* 8002EDC8 0002BEA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002EDCC 0002BEAC  7C 08 02 A6 */	mflr r0
/* 8002EDD0 0002BEB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002EDD4 0002BEB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002EDD8 0002BEB8  7C 9F 23 78 */	mr r31, r4
/* 8002EDDC 0002BEBC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002EDE0 0002BEC0  7C 7E 1B 78 */	mr r30, r3
/* 8002EDE4 0002BEC4  7F E3 FB 78 */	mr r3, r31
/* 8002EDE8 0002BEC8  48 00 01 21 */	bl enabled__Q24xhud6widgetCFv
/* 8002EDEC 0002BECC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8002EDF0 0002BED0  41 82 00 1C */	beq .L_8002EE0C
/* 8002EDF4 0002BED4  7F E3 FB 78 */	mr r3, r31
/* 8002EDF8 0002BED8  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8002EDFC 0002BEDC  81 9F 00 74 */	lwz r12, 0x74(r31)
/* 8002EE00 0002BEE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8002EE04 0002BEE4  7D 89 03 A6 */	mtctr r12
/* 8002EE08 0002BEE8  4E 80 04 21 */	bctrl
.L_8002EE0C:
/* 8002EE0C 0002BEEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002EE10 0002BEF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002EE14 0002BEF4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002EE18 0002BEF8  7C 08 03 A6 */	mtlr r0
/* 8002EE1C 0002BEFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8002EE20 0002BF00  4E 80 00 20 */	blr
.endfn "__cl__Q34xhud18@unnamed@xHud_cpp@14functor_updateFRQ24xhud6widget"

# 0x8002EE24 - 0x8002EFD0
.section .text, "ax", unique, 1
.balign 4

# xhud::widget::disable()
.fn disable__Q24xhud6widgetFv, weak
/* 8002EE24 0002BF04  38 00 00 00 */	li r0, 0x0
/* 8002EE28 0002BF08  98 03 00 01 */	stb r0, 0x1(r3)
/* 8002EE2C 0002BF0C  4E 80 00 20 */	blr
.endfn disable__Q24xhud6widgetFv

# xhud::widget::add_tweaks()
.fn add_tweaks__Q24xhud6widgetFv, weak
/* 8002EE30 0002BF10  4E 80 00 20 */	blr
.endfn add_tweaks__Q24xhud6widgetFv

# xhud::motive::update(xhud::widget&, float)
.fn update__Q24xhud6motiveFRQ24xhud6widgetf, weak
/* 8002EE34 0002BF14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002EE38 0002BF18  7C 08 02 A6 */	mflr r0
/* 8002EE3C 0002BF1C  7C 65 1B 78 */	mr r5, r3
/* 8002EE40 0002BF20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002EE44 0002BF24  81 83 00 18 */	lwz r12, 0x18(r3)
/* 8002EE48 0002BF28  7C 83 23 78 */	mr r3, r4
/* 8002EE4C 0002BF2C  7C A4 2B 78 */	mr r4, r5
/* 8002EE50 0002BF30  7D 89 03 A6 */	mtctr r12
/* 8002EE54 0002BF34  4E 80 04 21 */	bctrl
/* 8002EE58 0002BF38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002EE5C 0002BF3C  7C 08 03 A6 */	mtlr r0
/* 8002EE60 0002BF40  38 21 00 10 */	addi r1, r1, 0x10
/* 8002EE64 0002BF44  4E 80 00 20 */	blr
.endfn update__Q24xhud6motiveFRQ24xhud6widgetf

# xhud::widget::enable()
.fn enable__Q24xhud6widgetFv, weak
/* 8002EE68 0002BF48  38 00 00 01 */	li r0, 0x1
/* 8002EE6C 0002BF4C  98 03 00 01 */	stb r0, 0x1(r3)
/* 8002EE70 0002BF50  4E 80 00 20 */	blr
.endfn enable__Q24xhud6widgetFv

# xhud::motive::motive(float*, float, float, float, bool (*)(xhud::widget&, xhud::motive&, float), void*)
.fn __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv, weak
/* 8002EE74 0002BF54  90 83 00 00 */	stw r4, 0x0(r3)
/* 8002EE78 0002BF58  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 8002EE7C 0002BF5C  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 8002EE80 0002BF60  D0 43 00 0C */	stfs f2, 0xc(r3)
/* 8002EE84 0002BF64  C0 02 83 EC */	lfs f0, "@949"@sda21(r2)
/* 8002EE88 0002BF68  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8002EE8C 0002BF6C  D0 63 00 14 */	stfs f3, 0x14(r3)
/* 8002EE90 0002BF70  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8002EE94 0002BF74  90 C3 00 1C */	stw r6, 0x1c(r3)
/* 8002EE98 0002BF78  4E 80 00 20 */	blr
.endfn __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv

# xhud::widget::setup()
.fn setup__Q24xhud6widgetFv, weak
/* 8002EE9C 0002BF7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002EEA0 0002BF80  7C 08 02 A6 */	mflr r0
/* 8002EEA4 0002BF84  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002EEA8 0002BF88  4B FF EF 0D */	bl presetup__Q24xhud6widgetFv
/* 8002EEAC 0002BF8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002EEB0 0002BF90  7C 08 03 A6 */	mtlr r0
/* 8002EEB4 0002BF94  38 21 00 10 */	addi r1, r1, 0x10
/* 8002EEB8 0002BF98  4E 80 00 20 */	blr
.endfn setup__Q24xhud6widgetFv

# xhud::widget::render()
.fn render__Q24xhud6widgetFv, weak
/* 8002EEBC 0002BF9C  4E 80 00 20 */	blr
.endfn render__Q24xhud6widgetFv

# xhud::widget::visible() const
.fn visible__Q24xhud6widgetCFv, weak
/* 8002EEC0 0002BFA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002EEC4 0002BFA4  7C 08 02 A6 */	mflr r0
/* 8002EEC8 0002BFA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002EECC 0002BFAC  88 03 00 00 */	lbz r0, 0x0(r3)
/* 8002EED0 0002BFB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002EED4 0002BFB4  3B E0 00 00 */	li r31, 0x0
/* 8002EED8 0002BFB8  28 00 00 00 */	cmplwi r0, 0x0
/* 8002EEDC 0002BFBC  41 82 00 14 */	beq .L_8002EEF0
/* 8002EEE0 0002BFC0  48 00 00 29 */	bl enabled__Q24xhud6widgetCFv
/* 8002EEE4 0002BFC4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8002EEE8 0002BFC8  41 82 00 08 */	beq .L_8002EEF0
/* 8002EEEC 0002BFCC  3B E0 00 01 */	li r31, 0x1
.L_8002EEF0:
/* 8002EEF0 0002BFD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002EEF4 0002BFD4  7F E3 FB 78 */	mr r3, r31
/* 8002EEF8 0002BFD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002EEFC 0002BFDC  7C 08 03 A6 */	mtlr r0
/* 8002EF00 0002BFE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8002EF04 0002BFE4  4E 80 00 20 */	blr
.endfn visible__Q24xhud6widgetCFv

# xhud::widget::enabled() const
.fn enabled__Q24xhud6widgetCFv, weak
/* 8002EF08 0002BFE8  88 63 00 01 */	lbz r3, 0x1(r3)
/* 8002EF0C 0002BFEC  4E 80 00 20 */	blr
.endfn enabled__Q24xhud6widgetCFv

# xhud::widget::debug_render()
.fn debug_render__Q24xhud6widgetFv, weak
/* 8002EF10 0002BFF0  4E 80 00 20 */	blr
.endfn debug_render__Q24xhud6widgetFv

# xhud::motive::motive(const xhud::motive&)
.fn __ct__Q24xhud6motiveFRCQ24xhud6motive, weak
/* 8002EF14 0002BFF4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8002EF18 0002BFF8  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 8002EF1C 0002BFFC  90 03 00 00 */	stw r0, 0x0(r3)
/* 8002EF20 0002C000  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 8002EF24 0002C004  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 8002EF28 0002C008  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8002EF2C 0002C00C  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 8002EF30 0002C010  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8002EF34 0002C014  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8002EF38 0002C018  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8002EF3C 0002C01C  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8002EF40 0002C020  80 A4 00 18 */	lwz r5, 0x18(r4)
/* 8002EF44 0002C024  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8002EF48 0002C028  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8002EF4C 0002C02C  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8002EF50 0002C030  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8002EF54 0002C034  4E 80 00 20 */	blr
.endfn __ct__Q24xhud6motiveFRCQ24xhud6motive

# xhud::motive::finish()
.fn finish__Q24xhud6motiveFv, weak
/* 8002EF58 0002C038  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8002EF5C 0002C03C  28 04 00 00 */	cmplwi r4, 0x0
/* 8002EF60 0002C040  41 82 00 1C */	beq .L_8002EF7C
/* 8002EF64 0002C044  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8002EF68 0002C048  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8002EF6C 0002C04C  C0 44 00 00 */	lfs f2, 0x0(r4)
/* 8002EF70 0002C050  EC 01 00 28 */	fsubs f0, f1, f0
/* 8002EF74 0002C054  EC 02 00 2A */	fadds f0, f2, f0
/* 8002EF78 0002C058  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_8002EF7C:
/* 8002EF7C 0002C05C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8002EF80 0002C060  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8002EF84 0002C064  4E 80 00 20 */	blr
.endfn finish__Q24xhud6motiveFv

# xhud::widget::dispatch(xBase*, unsigned int, const float*, xBase*)
.fn dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase, weak
/* 8002EF88 0002C068  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002EF8C 0002C06C  7C 08 02 A6 */	mflr r0
/* 8002EF90 0002C070  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002EF94 0002C074  4B FF EF 21 */	bl dispatcher__Q24xhud6widgetFP5xBaseUiPCfP5xBase
/* 8002EF98 0002C078  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002EF9C 0002C07C  7C 08 03 A6 */	mtlr r0
/* 8002EFA0 0002C080  38 21 00 10 */	addi r1, r1, 0x10
/* 8002EFA4 0002C084  4E 80 00 20 */	blr
.endfn dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase

# xhud::widget::destroy()
.fn destroy__Q24xhud6widgetFv, weak
/* 8002EFA8 0002C088  4E 80 00 20 */	blr
.endfn destroy__Q24xhud6widgetFv

# xhud::widget::init()
.fn init__Q24xhud6widgetFv, weak
/* 8002EFAC 0002C08C  4E 80 00 20 */	blr
.endfn init__Q24xhud6widgetFv

# xhud::widget::update(float)
.fn update__Q24xhud6widgetFf, weak
/* 8002EFB0 0002C090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002EFB4 0002C094  7C 08 02 A6 */	mflr r0
/* 8002EFB8 0002C098  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002EFBC 0002C09C  4B FF EE 21 */	bl updater__Q24xhud6widgetFf
/* 8002EFC0 0002C0A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002EFC4 0002C0A4  7C 08 03 A6 */	mtlr r0
/* 8002EFC8 0002C0A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8002EFCC 0002C0AC  4E 80 00 20 */	blr
.endfn update__Q24xhud6widgetFf

# 0x8002EFD0 - 0x8002EFE0
.section .text, "ax", unique, 2
.balign 4

# xhud::asset::type_name()
.fn type_name__Q24xhud5assetFv, weak
/* 8002EFD0 0002C0B0  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8002EFD4 0002C0B4  38 63 2E E8 */	addi r3, r3, "@stringBase0"@l
/* 8002EFD8 0002C0B8  38 63 00 04 */	addi r3, r3, 0x4
/* 8002EFDC 0002C0BC  4E 80 00 20 */	blr
.endfn type_name__Q24xhud5assetFv

# 0x8002EFE0 - 0x8002EFE8
.section .text, "ax", unique, 3
.balign 4

# operator new(unsigned long, void*)
.fn __nw__FUlPv, weak
/* 8002EFE0 0002C0C0  7C 83 23 78 */	mr r3, r4
/* 8002EFE4 0002C0C4  4E 80 00 20 */	blr
.endfn __nw__FUlPv

# 0x8002EFE8 - 0x8002F008
.section .text, "ax", unique, 4
.balign 4

# xColorFromRGBA(unsigned char, unsigned char, unsigned char, unsigned char)
.fn xColorFromRGBA__FUcUcUcUc, weak
/* 8002EFE8 0002C0C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002EFEC 0002C0CC  98 61 00 08 */	stb r3, 0x8(r1)
/* 8002EFF0 0002C0D0  98 81 00 09 */	stb r4, 0x9(r1)
/* 8002EFF4 0002C0D4  98 A1 00 0A */	stb r5, 0xa(r1)
/* 8002EFF8 0002C0D8  98 C1 00 0B */	stb r6, 0xb(r1)
/* 8002EFFC 0002C0DC  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8002F000 0002C0E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8002F004 0002C0E4  4E 80 00 20 */	blr
.endfn xColorFromRGBA__FUcUcUcUc

# 0x80252D18 - 0x80252F00
.rodata
.balign 8

.obj "@405", local
.sym ...rodata.0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@405"

.obj "@406", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@406"

.obj "@410", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@410"

.obj "@441", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@441"

.obj screen_bounds, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj screen_bounds

.obj default_adjust, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj default_adjust

.obj "@594", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@594"

.obj "@595", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@595"

.obj "@596", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@596"

.obj "@597", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@597"

.obj "@598", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@598"

.obj "@599", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@599"

.obj "@600", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@600"

.obj "@713", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@713"

# xhud::@unnamed@xHud_cpp@::known_types
.obj "known_types__Q24xhud18@unnamed@xHud_cpp@", local
	.4byte 0x3A000000
	.4byte 0x0000009C
	.4byte 0x3C000000
	.4byte 0x0000019C
	.4byte 0x3B000000
	.4byte 0x0000015C
	.4byte 0x47000000
	.4byte 0x0000017C
.endobj "known_types__Q24xhud18@unnamed@xHud_cpp@"

.obj "@1227", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@1227"

.obj "@1228", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
.endobj "@1228"

.obj "@1229", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@1229"

.obj mult$1265, local
	.4byte 0xBF800000
	.4byte 0xBF800000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj mult$1265

.obj "@stringBase0", local
	.4byte 0x48554400
	.4byte 0x68756400
	.4byte 0x2564002E
	.4byte 0x6D696E66
	.4byte 0x002E6466
	.2byte 0x6600
.endobj "@stringBase0"
	.2byte 0x0000

# 0x8027D618 - 0x8027D640
.data
.balign 8

# xhud::widget::__vtable
.obj __vt__Q24xhud6widget, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte destroy__Q24xhud6widgetFv
	.4byte type__Q24xhud6widgetCFv
	.4byte is__Q24xhud6widgetCFUi
	.4byte init__Q24xhud6widgetFv
	.4byte setup__Q24xhud6widgetFv
	.4byte update__Q24xhud6widgetFf
	.4byte render__Q24xhud6widgetFv
	.4byte dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase
.endobj __vt__Q24xhud6widget

# 0x802C8760 - 0x802C8770
.bss
.balign 8

.obj ba$784, local
	.skip 0x10
.endobj ba$784

# 0x803CB298 - 0x803CB2A8
.section .sbss, "wa", @nobits
.balign 8

# xhud::block_allocator::_head_alloc
.obj _head_alloc__Q24xhud15block_allocator, global
	.skip 0x4
.endobj _head_alloc__Q24xhud15block_allocator

# xhud::inited
.obj inited__4xhud, local
	.skip 0x1
.endobj inited__4xhud

.obj init$785, local
	.skip 0x1
.endobj init$785
	.skip 0x2

.obj myid$924, local
	.skip 0x4
.endobj myid$924

.obj init$925, local
	.skip 0x1
.endobj init$925
	.skip 0x3

# 0x803CCD58 - 0x803CCD88
.section .sdata2, "a"
.balign 8

.obj "@857", local
	.4byte 0x3F800000
.endobj "@857"

.obj "@945", local
	.4byte 0x322BCC76
.endobj "@945"

.obj "@946", local
	.4byte 0x41200000
.endobj "@946"

.obj "@947", local
	.4byte 0x40000000
.endobj "@947"

.obj "@948", local
	.4byte 0x40400000
.endobj "@948"

.obj "@949", local
	.4byte 0x00000000
.endobj "@949"

.obj "@955", local
	.4byte 0x3F000000
.endobj "@955"

.obj "@982", local
	.4byte 0x38D1B717
.endobj "@982"

.obj "@983", local
	.4byte 0xBF000000
.endobj "@983"

.obj "@984", local
	.4byte 0x3ECCCCCD
.endobj "@984"

.obj "@1214", local
	.4byte 0x437F0000
.endobj "@1214"

.obj "@1238", local
	.4byte 0x3C23D70A
.endobj "@1238"
