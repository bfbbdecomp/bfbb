.include "macros.inc"
.file "ptankgcn_nc_pps_ppr.c"

# 0x80209540 - 0x80209984
.text
.balign 4

.fn _rpPTankGameCubeAsmVtxRender_NC_PPS_PPR, global
/* 80209540 00206620  94 21 FF 18 */	stwu r1, -0xe8(r1)
/* 80209544 00206624  7C 00 00 26 */	mfcr r0
/* 80209548 00206628  90 01 00 08 */	stw r0, 0x8(r1)
/* 8020954C 0020662C  91 C1 00 10 */	stw r14, 0x10(r1)
/* 80209550 00206630  91 E1 00 14 */	stw r15, 0x14(r1)
/* 80209554 00206634  92 01 00 18 */	stw r16, 0x18(r1)
/* 80209558 00206638  92 21 00 1C */	stw r17, 0x1c(r1)
/* 8020955C 0020663C  92 41 00 20 */	stw r18, 0x20(r1)
/* 80209560 00206640  92 61 00 24 */	stw r19, 0x24(r1)
/* 80209564 00206644  92 81 00 28 */	stw r20, 0x28(r1)
/* 80209568 00206648  92 A1 00 2C */	stw r21, 0x2c(r1)
/* 8020956C 0020664C  92 C1 00 30 */	stw r22, 0x30(r1)
/* 80209570 00206650  92 E1 00 34 */	stw r23, 0x34(r1)
/* 80209574 00206654  93 01 00 38 */	stw r24, 0x38(r1)
/* 80209578 00206658  93 21 00 3C */	stw r25, 0x3c(r1)
/* 8020957C 0020665C  93 41 00 40 */	stw r26, 0x40(r1)
/* 80209580 00206660  93 61 00 44 */	stw r27, 0x44(r1)
/* 80209584 00206664  93 81 00 48 */	stw r28, 0x48(r1)
/* 80209588 00206668  93 A1 00 4C */	stw r29, 0x4c(r1)
/* 8020958C 0020666C  93 C1 00 50 */	stw r30, 0x50(r1)
/* 80209590 00206670  93 E1 00 54 */	stw r31, 0x54(r1)
/* 80209594 00206674  D9 C1 00 58 */	stfd f14, 0x58(r1)
/* 80209598 00206678  D9 E1 00 60 */	stfd f15, 0x60(r1)
/* 8020959C 0020667C  DA 01 00 68 */	stfd f16, 0x68(r1)
/* 802095A0 00206680  DA 21 00 70 */	stfd f17, 0x70(r1)
/* 802095A4 00206684  DA 41 00 78 */	stfd f18, 0x78(r1)
/* 802095A8 00206688  DA 61 00 80 */	stfd f19, 0x80(r1)
/* 802095AC 0020668C  DA 81 00 88 */	stfd f20, 0x88(r1)
/* 802095B0 00206690  DA A1 00 90 */	stfd f21, 0x90(r1)
/* 802095B4 00206694  DA C1 00 98 */	stfd f22, 0x98(r1)
/* 802095B8 00206698  DA E1 00 A0 */	stfd f23, 0xa0(r1)
/* 802095BC 0020669C  DB 01 00 A8 */	stfd f24, 0xa8(r1)
/* 802095C0 002066A0  DB 21 00 B0 */	stfd f25, 0xb0(r1)
/* 802095C4 002066A4  DB 41 00 B8 */	stfd f26, 0xb8(r1)
/* 802095C8 002066A8  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 802095CC 002066AC  DB 81 00 C8 */	stfd f28, 0xc8(r1)
/* 802095D0 002066B0  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 802095D4 002066B4  DB C1 00 D8 */	stfd f30, 0xd8(r1)
/* 802095D8 002066B8  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 802095DC 002066BC  54 88 02 52 */	rlwinm r8, r4, 0, 9, 9
/* 802095E0 002066C0  54 89 02 10 */	rlwinm r9, r4, 0, 8, 8
/* 802095E4 002066C4  54 8A 03 5A */	rlwinm r10, r4, 0, 13, 13
/* 802095E8 002066C8  54 8B 03 5E */	rlwinm r11, r4, 0, 13, 15
/* 802095EC 002066CC  54 8C 03 DE */	rlwinm r12, r4, 0, 15, 15
/* 802095F0 002066D0  54 8E 03 9C */	rlwinm r14, r4, 0, 14, 14
/* 802095F4 002066D4  54 8F 02 16 */	rlwinm r15, r4, 0, 8, 11
/* 802095F8 002066D8  54 90 02 D6 */	rlwinm r16, r4, 0, 11, 11
/* 802095FC 002066DC  54 91 02 94 */	rlwinm r17, r4, 0, 10, 10
/* 80209600 002066E0  54 92 01 CE */	rlwinm r18, r4, 0, 7, 7
/* 80209604 002066E4  2B 8B 00 00 */	cmplwi cr7, r11, 0x0
/* 80209608 002066E8  2B 0F 00 00 */	cmplwi cr6, r15, 0x0
/* 8020960C 002066EC  2A 92 00 00 */	cmplwi cr5, r18, 0x0
/* 80209610 002066F0  2A 10 00 00 */	cmplwi cr4, r16, 0x0
/* 80209614 002066F4  29 91 00 00 */	cmplwi cr3, r17, 0x0
/* 80209618 002066F8  29 0C 00 00 */	cmplwi cr2, r12, 0x0
/* 8020961C 002066FC  28 8E 00 00 */	cmplwi cr1, r14, 0x0
/* 80209620 00206700  81 8D 87 30 */	lwz r12, _rwPNumber1@sda21(r13)
/* 80209624 00206704  81 65 00 4C */	lwz r11, 0x4c(r5)
/* 80209628 00206708  81 CD 87 34 */	lwz r14, _rwConst@sda21(r13)
/* 8020962C 0020670C  82 E5 00 04 */	lwz r23, 0x4(r5)
/* 80209630 00206710  82 65 00 08 */	lwz r19, 0x8(r5)
/* 80209634 00206714  82 45 00 1C */	lwz r18, 0x1c(r5)
/* 80209638 00206718  82 25 00 20 */	lwz r17, 0x20(r5)
/* 8020963C 0020671C  82 05 00 34 */	lwz r16, 0x34(r5)
/* 80209640 00206720  81 E5 00 38 */	lwz r15, 0x38(r5)
/* 80209644 00206724  E1 4E 00 00 */	psq_l f10, 0x0(r14), 0, qr0
/* 80209648 00206728  E1 6E 00 08 */	psq_l f11, 0x8(r14), 0, qr0
/* 8020964C 0020672C  E1 8E 00 10 */	psq_l f12, 0x10(r14), 0, qr0
/* 80209650 00206730  E1 AE 00 18 */	psq_l f13, 0x18(r14), 0, qr0
/* 80209654 00206734  41 9E 00 3C */	beq cr7, .L_80209690
/* 80209658 00206738  41 8A 00 10 */	beq cr2, .L_80209668
/* 8020965C 0020673C  83 05 00 24 */	lwz r24, 0x24(r5)
/* 80209660 00206740  82 85 00 28 */	lwz r20, 0x28(r5)
/* 80209664 00206744  48 00 00 2C */	b .L_80209690
.L_80209668:
/* 80209668 00206748  41 A6 00 10 */	beq+ cr1, .L_80209678
/* 8020966C 0020674C  83 05 00 2C */	lwz r24, 0x2c(r5)
/* 80209670 00206750  82 85 00 30 */	lwz r20, 0x30(r5)
/* 80209674 00206754  48 00 00 1C */	b .L_80209690
.L_80209678:
/* 80209678 00206758  28 0A 00 00 */	cmplwi r10, 0x0
/* 8020967C 0020675C  41 A3 00 14 */	bso+ .L_80209690
/* 80209680 00206760  83 E5 00 80 */	lwz r31, 0x80(r5)
/* 80209684 00206764  83 C5 00 84 */	lwz r30, 0x84(r5)
/* 80209688 00206768  83 A5 00 88 */	lwz r29, 0x88(r5)
/* 8020968C 0020676C  83 85 00 8C */	lwz r28, 0x8c(r5)
.L_80209690:
/* 80209690 00206770  41 BA 00 60 */	beq+ cr6, .L_802096F0
/* 80209694 00206774  41 B2 00 10 */	beq+ cr4, .L_802096A4
/* 80209698 00206778  83 25 00 3C */	lwz r25, 0x3c(r5)
/* 8020969C 0020677C  82 A5 00 40 */	lwz r21, 0x40(r5)
/* 802096A0 00206780  48 00 00 50 */	b .L_802096F0
.L_802096A4:
/* 802096A4 00206784  41 AE 00 10 */	beq+ cr3, .L_802096B4
/* 802096A8 00206788  83 25 00 44 */	lwz r25, 0x44(r5)
/* 802096AC 0020678C  82 A5 00 48 */	lwz r21, 0x48(r5)
/* 802096B0 00206790  48 00 00 40 */	b .L_802096F0
.L_802096B4:
/* 802096B4 00206794  28 08 00 00 */	cmplwi r8, 0x0
/* 802096B8 00206798  41 A3 00 20 */	bso+ .L_802096D8
/* 802096BC 0020679C  E2 E5 00 90 */	psq_l f23, 0x90(r5), 0, qr0
/* 802096C0 002067A0  E2 A5 00 98 */	psq_l f21, 0x98(r5), 0, qr0
/* 802096C4 002067A4  60 00 00 00 */	nop
/* 802096C8 002067A8  60 00 00 00 */	nop
/* 802096CC 002067AC  12 D7 AC 60 */	ps_merge01 f22, f23, f21
/* 802096D0 002067B0  12 95 BC 60 */	ps_merge01 f20, f21, f23
/* 802096D4 002067B4  48 00 00 1C */	b .L_802096F0
.L_802096D8:
/* 802096D8 002067B8  28 09 00 00 */	cmplwi r9, 0x0
/* 802096DC 002067BC  41 83 00 14 */	bso .L_802096F0
/* 802096E0 002067C0  E2 E5 00 90 */	psq_l f23, 0x90(r5), 0, qr0
/* 802096E4 002067C4  E2 C5 00 98 */	psq_l f22, 0x98(r5), 0, qr0
/* 802096E8 002067C8  E2 A5 00 A0 */	psq_l f21, 0xa0(r5), 0, qr0
/* 802096EC 002067CC  E2 85 00 A8 */	psq_l f20, 0xa8(r5), 0, qr0
.L_802096F0:
/* 802096F0 002067D0  41 B6 00 0C */	beq+ cr5, .L_802096FC
/* 802096F4 002067D4  83 45 00 14 */	lwz r26, 0x14(r5)
/* 802096F8 002067D8  82 C5 00 18 */	lwz r22, 0x18(r5)
.L_802096FC:
/* 802096FC 002067DC  2C 03 00 00 */	cmpwi r3, 0x0
/* 80209700 002067E0  83 62 BB 20 */	lwz r27, _rwFifo@sda21(r2)
/* 80209704 002067E4  7C 69 03 A6 */	mtctr r3
/* 80209708 002067E8  40 81 01 DC */	ble .L_802098E4
.L_8020970C:
/* 8020970C 002067EC  E2 30 80 00 */	psq_l f17, 0x0(r16), 1, qr0
/* 80209710 002067F0  11 C0 50 50 */	ps_neg f14, f10
/* 80209714 002067F4  E0 2C 80 00 */	psq_l f1, 0x0(r12), 1, qr0
/* 80209718 002067F8  12 2C 5C 5C */	ps_madds0 f17, f12, f17, f11
/* 8020971C 002067FC  E1 2B 00 00 */	psq_l f9, 0x0(r11), 0, qr0
/* 80209720 00206800  E1 0B 80 08 */	psq_l f8, 0x8(r11), 1, qr0
/* 80209724 00206804  12 11 53 AE */	ps_sel f16, f17, f14, f10
/* 80209728 00206808  E1 D2 00 00 */	psq_l f14, 0x0(r18), 0, qr0
/* 8020972C 0020680C  E0 EB 00 0C */	psq_l f7, 0xc(r11), 0, qr0
/* 80209730 00206810  12 31 80 2A */	ps_add f17, f17, f16
/* 80209734 00206814  11 CE 00 58 */	ps_muls0 f14, f14, f1
/* 80209738 00206818  E0 CB 80 14 */	psq_l f6, 0x14(r11), 1, qr0
/* 8020973C 0020681C  12 00 89 10 */	ps_nabs f16, f17
/* 80209740 00206820  12 31 03 58 */	ps_muls0 f17, f17, f13
/* 80209744 00206824  60 00 00 00 */	nop
/* 80209748 00206828  12 0C 82 9E */	ps_madds1 f16, f12, f10, f16
/* 8020974C 0020682C  E2 77 00 00 */	psq_l f19, 0x0(r23), 0, qr0
/* 80209750 00206830  E2 57 80 08 */	psq_l f18, 0x8(r23), 1, qr0
/* 80209754 00206834  12 30 04 72 */	ps_mul f17, f16, f17
/* 80209758 00206838  10 A0 38 50 */	ps_neg f5, f7
/* 8020975C 0020683C  10 80 30 50 */	ps_neg f4, f6
/* 80209760 00206840  13 E9 04 5A */	ps_muls1 f31, f9, f17
/* 80209764 00206844  13 C8 04 5A */	ps_muls1 f30, f8, f17
/* 80209768 00206848  13 A9 04 58 */	ps_muls0 f29, f9, f17
/* 8020976C 0020684C  13 88 04 58 */	ps_muls0 f28, f8, f17
/* 80209770 00206850  13 E5 FC 5C */	ps_madds0 f31, f5, f17, f31
/* 80209774 00206854  13 C4 F4 5C */	ps_madds0 f30, f4, f17, f30
/* 80209778 00206858  13 A7 EC 5E */	ps_madds1 f29, f7, f17, f29
/* 8020977C 0020685C  13 86 E4 5E */	ps_madds1 f28, f6, f17, f28
/* 80209780 00206860  13 FF 03 98 */	ps_muls0 f31, f31, f14
/* 80209784 00206864  13 DE 03 98 */	ps_muls0 f30, f30, f14
/* 80209788 00206868  13 BD 03 9A */	ps_muls1 f29, f29, f14
/* 8020978C 0020686C  13 9C 03 9A */	ps_muls1 f28, f28, f14
/* 80209790 00206870  60 00 00 00 */	nop
/* 80209794 00206874  11 FF E8 2A */	ps_add f15, f31, f29
/* 80209798 00206878  11 DE E0 2A */	ps_add f14, f30, f28
/* 8020979C 0020687C  12 3F E8 28 */	ps_sub f17, f31, f29
/* 802097A0 00206880  12 1E E0 28 */	ps_sub f16, f30, f28
/* 802097A4 00206884  13 F3 78 28 */	ps_sub f31, f19, f15
/* 802097A8 00206888  13 D2 70 28 */	ps_sub f30, f18, f14
/* 802097AC 0020688C  13 B3 88 2A */	ps_add f29, f19, f17
/* 802097B0 00206890  13 92 80 2A */	ps_add f28, f18, f16
/* 802097B4 00206894  13 73 78 2A */	ps_add f27, f19, f15
/* 802097B8 00206898  13 52 70 2A */	ps_add f26, f18, f14
/* 802097BC 0020689C  13 33 88 28 */	ps_sub f25, f19, f17
/* 802097C0 002068A0  13 12 80 28 */	ps_sub f24, f18, f16
/* 802097C4 002068A4  41 9E 00 30 */	beq cr7, .L_802097F4
/* 802097C8 002068A8  41 8A 00 18 */	beq cr2, .L_802097E0
/* 802097CC 002068AC  83 F8 00 00 */	lwz r31, 0x0(r24)
/* 802097D0 002068B0  83 D8 00 00 */	lwz r30, 0x0(r24)
/* 802097D4 002068B4  83 B8 00 00 */	lwz r29, 0x0(r24)
/* 802097D8 002068B8  83 98 00 00 */	lwz r28, 0x0(r24)
/* 802097DC 002068BC  48 00 00 18 */	b .L_802097F4
.L_802097E0:
/* 802097E0 002068C0  41 A6 00 14 */	beq+ cr1, .L_802097F4
/* 802097E4 002068C4  83 F8 00 00 */	lwz r31, 0x0(r24)
/* 802097E8 002068C8  83 D8 00 04 */	lwz r30, 0x4(r24)
/* 802097EC 002068CC  83 B8 00 08 */	lwz r29, 0x8(r24)
/* 802097F0 002068D0  83 98 00 0C */	lwz r28, 0xc(r24)
.L_802097F4:
/* 802097F4 002068D4  41 BA 00 38 */	beq+ cr6, .L_8020982C
/* 802097F8 002068D8  41 B2 00 20 */	beq+ cr4, .L_80209818
/* 802097FC 002068DC  E2 F9 00 00 */	psq_l f23, 0x0(r25), 0, qr0
/* 80209800 002068E0  E2 B9 00 08 */	psq_l f21, 0x8(r25), 0, qr0
/* 80209804 002068E4  60 00 00 00 */	nop
/* 80209808 002068E8  60 00 00 00 */	nop
/* 8020980C 002068EC  12 D7 AC 60 */	ps_merge01 f22, f23, f21
/* 80209810 002068F0  12 95 BC 60 */	ps_merge01 f20, f21, f23
/* 80209814 002068F4  48 00 00 24 */	b .L_80209838
.L_80209818:
/* 80209818 002068F8  41 AE 00 14 */	beq+ cr3, .L_8020982C
/* 8020981C 002068FC  E2 F9 00 00 */	psq_l f23, 0x0(r25), 0, qr0
/* 80209820 00206900  E2 D9 00 08 */	psq_l f22, 0x8(r25), 0, qr0
/* 80209824 00206904  E2 B9 00 10 */	psq_l f21, 0x10(r25), 0, qr0
/* 80209828 00206908  E2 99 00 18 */	psq_l f20, 0x18(r25), 0, qr0
.L_8020982C:
/* 8020982C 0020690C  41 B6 00 0C */	beq+ cr5, .L_80209838
/* 80209830 00206910  E2 7A 00 00 */	psq_l f19, 0x0(r26), 0, qr0
/* 80209834 00206914  E2 5A 80 08 */	psq_l f18, 0x8(r26), 1, qr0
.L_80209838:
/* 80209838 00206918  F3 FB 60 00 */	psq_st f31, 0x0(r27), 0, qr6
/* 8020983C 0020691C  F3 DB E0 00 */	psq_st f30, 0x0(r27), 1, qr6
/* 80209840 00206920  41 B6 00 0C */	beq+ cr5, .L_8020984C
/* 80209844 00206924  F2 7B 70 00 */	psq_st f19, 0x0(r27), 0, qr7
/* 80209848 00206928  F2 5B F0 00 */	psq_st f18, 0x0(r27), 1, qr7
.L_8020984C:
/* 8020984C 0020692C  41 9E 00 08 */	beq cr7, .L_80209854
/* 80209850 00206930  93 FB 00 00 */	stw r31, 0x0(r27)
.L_80209854:
/* 80209854 00206934  41 BA 00 08 */	beq+ cr6, .L_8020985C
/* 80209858 00206938  F2 9B 00 00 */	psq_st f20, 0x0(r27), 0, qr0
.L_8020985C:
/* 8020985C 0020693C  F3 BB 60 00 */	psq_st f29, 0x0(r27), 0, qr6
/* 80209860 00206940  F3 9B E0 00 */	psq_st f28, 0x0(r27), 1, qr6
/* 80209864 00206944  41 B6 00 0C */	beq+ cr5, .L_80209870
/* 80209868 00206948  F2 7B 70 00 */	psq_st f19, 0x0(r27), 0, qr7
/* 8020986C 0020694C  F2 5B F0 00 */	psq_st f18, 0x0(r27), 1, qr7
.L_80209870:
/* 80209870 00206950  41 9E 00 08 */	beq cr7, .L_80209878
/* 80209874 00206954  93 DB 00 00 */	stw r30, 0x0(r27)
.L_80209878:
/* 80209878 00206958  41 BA 00 08 */	beq+ cr6, .L_80209880
/* 8020987C 0020695C  F2 FB 00 00 */	psq_st f23, 0x0(r27), 0, qr0
.L_80209880:
/* 80209880 00206960  F3 7B 60 00 */	psq_st f27, 0x0(r27), 0, qr6
/* 80209884 00206964  F3 5B E0 00 */	psq_st f26, 0x0(r27), 1, qr6
/* 80209888 00206968  41 B6 00 0C */	beq+ cr5, .L_80209894
/* 8020988C 0020696C  F2 7B 70 00 */	psq_st f19, 0x0(r27), 0, qr7
/* 80209890 00206970  F2 5B F0 00 */	psq_st f18, 0x0(r27), 1, qr7
.L_80209894:
/* 80209894 00206974  41 9E 00 08 */	beq cr7, .L_8020989C
/* 80209898 00206978  93 BB 00 00 */	stw r29, 0x0(r27)
.L_8020989C:
/* 8020989C 0020697C  41 BA 00 08 */	beq+ cr6, .L_802098A4
/* 802098A0 00206980  F2 DB 00 00 */	psq_st f22, 0x0(r27), 0, qr0
.L_802098A4:
/* 802098A4 00206984  7E 52 8A 14 */	add r18, r18, r17
/* 802098A8 00206988  F3 3B 60 00 */	psq_st f25, 0x0(r27), 0, qr6
/* 802098AC 0020698C  7E 10 7A 14 */	add r16, r16, r15
/* 802098B0 00206990  F3 1B E0 00 */	psq_st f24, 0x0(r27), 1, qr6
/* 802098B4 00206994  7E F7 9A 14 */	add r23, r23, r19
/* 802098B8 00206998  41 B6 00 10 */	beq+ cr5, .L_802098C8
/* 802098BC 0020699C  F2 7B 70 00 */	psq_st f19, 0x0(r27), 0, qr7
/* 802098C0 002069A0  F2 5B F0 00 */	psq_st f18, 0x0(r27), 1, qr7
/* 802098C4 002069A4  7F 5A B2 14 */	add r26, r26, r22
.L_802098C8:
/* 802098C8 002069A8  41 9E 00 0C */	beq cr7, .L_802098D4
/* 802098CC 002069AC  93 9B 00 00 */	stw r28, 0x0(r27)
/* 802098D0 002069B0  7F 18 A2 14 */	add r24, r24, r20
.L_802098D4:
/* 802098D4 002069B4  41 BA 00 0C */	beq+ cr6, .L_802098E0
/* 802098D8 002069B8  F2 BB 00 00 */	psq_st f21, 0x0(r27), 0, qr0
/* 802098DC 002069BC  7F 39 AA 14 */	add r25, r25, r21
.L_802098E0:
/* 802098E0 002069C0  42 00 FE 2C */	bdnz .L_8020970C
.L_802098E4:
/* 802098E4 002069C4  80 01 00 08 */	lwz r0, 0x8(r1)
/* 802098E8 002069C8  7C 0F F1 20 */	mtcrf 255, r0
/* 802098EC 002069CC  81 C1 00 10 */	lwz r14, 0x10(r1)
/* 802098F0 002069D0  81 E1 00 14 */	lwz r15, 0x14(r1)
/* 802098F4 002069D4  82 01 00 18 */	lwz r16, 0x18(r1)
/* 802098F8 002069D8  82 21 00 1C */	lwz r17, 0x1c(r1)
/* 802098FC 002069DC  82 41 00 20 */	lwz r18, 0x20(r1)
/* 80209900 002069E0  82 61 00 24 */	lwz r19, 0x24(r1)
/* 80209904 002069E4  82 81 00 28 */	lwz r20, 0x28(r1)
/* 80209908 002069E8  82 A1 00 2C */	lwz r21, 0x2c(r1)
/* 8020990C 002069EC  82 C1 00 30 */	lwz r22, 0x30(r1)
/* 80209910 002069F0  82 E1 00 34 */	lwz r23, 0x34(r1)
/* 80209914 002069F4  83 01 00 38 */	lwz r24, 0x38(r1)
/* 80209918 002069F8  83 21 00 3C */	lwz r25, 0x3c(r1)
/* 8020991C 002069FC  83 41 00 40 */	lwz r26, 0x40(r1)
/* 80209920 00206A00  83 61 00 44 */	lwz r27, 0x44(r1)
/* 80209924 00206A04  83 81 00 48 */	lwz r28, 0x48(r1)
/* 80209928 00206A08  83 A1 00 4C */	lwz r29, 0x4c(r1)
/* 8020992C 00206A0C  83 C1 00 50 */	lwz r30, 0x50(r1)
/* 80209930 00206A10  83 E1 00 54 */	lwz r31, 0x54(r1)
/* 80209934 00206A14  C9 C1 00 58 */	lfd f14, 0x58(r1)
/* 80209938 00206A18  C9 E1 00 60 */	lfd f15, 0x60(r1)
/* 8020993C 00206A1C  CA 01 00 68 */	lfd f16, 0x68(r1)
/* 80209940 00206A20  CA 21 00 70 */	lfd f17, 0x70(r1)
/* 80209944 00206A24  CA 41 00 78 */	lfd f18, 0x78(r1)
/* 80209948 00206A28  CA 61 00 80 */	lfd f19, 0x80(r1)
/* 8020994C 00206A2C  CA 81 00 88 */	lfd f20, 0x88(r1)
/* 80209950 00206A30  CA A1 00 90 */	lfd f21, 0x90(r1)
/* 80209954 00206A34  CA C1 00 98 */	lfd f22, 0x98(r1)
/* 80209958 00206A38  CA E1 00 A0 */	lfd f23, 0xa0(r1)
/* 8020995C 00206A3C  CB 01 00 A8 */	lfd f24, 0xa8(r1)
/* 80209960 00206A40  CB 21 00 B0 */	lfd f25, 0xb0(r1)
/* 80209964 00206A44  CB 41 00 B8 */	lfd f26, 0xb8(r1)
/* 80209968 00206A48  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 8020996C 00206A4C  CB 81 00 C8 */	lfd f28, 0xc8(r1)
/* 80209970 00206A50  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 80209974 00206A54  CB C1 00 D8 */	lfd f30, 0xd8(r1)
/* 80209978 00206A58  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8020997C 00206A5C  38 21 00 E8 */	addi r1, r1, 0xe8
/* 80209980 00206A60  4E 80 00 20 */	blr
.endfn _rpPTankGameCubeAsmVtxRender_NC_PPS_PPR