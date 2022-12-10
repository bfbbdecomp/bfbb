.include "macros.inc"
.file "arq.c"

# 0x801B77A4 - 0x801B7C60
.text
.balign 4

.fn __ARQServiceQueueLo, global
/* 801B77A4 001B4884  7C 08 02 A6 */	mflr r0
/* 801B77A8 001B4888  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B77AC 001B488C  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801B77B0 001B4890  80 0D 99 9C */	lwz r0, __ARQRequestPendingLo@sda21(r13)
/* 801B77B4 001B4894  28 00 00 00 */	cmplwi r0, 0x0
/* 801B77B8 001B4898  40 82 00 1C */	bne .L_801B77D4
/* 801B77BC 001B489C  80 6D 99 88 */	lwz r3, __ARQRequestQueueLo@sda21(r13)
/* 801B77C0 001B48A0  28 03 00 00 */	cmplwi r3, 0x0
/* 801B77C4 001B48A4  41 82 00 10 */	beq .L_801B77D4
/* 801B77C8 001B48A8  90 6D 99 9C */	stw r3, __ARQRequestPendingLo@sda21(r13)
/* 801B77CC 001B48AC  80 03 00 00 */	lwz r0, 0x0(r3)
/* 801B77D0 001B48B0  90 0D 99 88 */	stw r0, __ARQRequestQueueLo@sda21(r13)
.L_801B77D4:
/* 801B77D4 001B48B4  80 AD 99 9C */	lwz r5, __ARQRequestPendingLo@sda21(r13)
/* 801B77D8 001B48B8  28 05 00 00 */	cmplwi r5, 0x0
/* 801B77DC 001B48BC  41 82 00 B8 */	beq .L_801B7894
/* 801B77E0 001B48C0  80 C5 00 18 */	lwz r6, 0x18(r5)
/* 801B77E4 001B48C4  80 0D 99 A8 */	lwz r0, __ARQChunkSize@sda21(r13)
/* 801B77E8 001B48C8  7C 06 00 40 */	cmplw r6, r0
/* 801B77EC 001B48CC  41 81 00 3C */	bgt .L_801B7828
/* 801B77F0 001B48D0  80 65 00 08 */	lwz r3, 0x8(r5)
/* 801B77F4 001B48D4  28 03 00 00 */	cmplwi r3, 0x0
/* 801B77F8 001B48D8  40 82 00 14 */	bne .L_801B780C
/* 801B77FC 001B48DC  80 85 00 10 */	lwz r4, 0x10(r5)
/* 801B7800 001B48E0  80 A5 00 14 */	lwz r5, 0x14(r5)
/* 801B7804 001B48E4  4B FF E4 A5 */	bl ARStartDMA
/* 801B7808 001B48E8  48 00 00 10 */	b .L_801B7818
.L_801B780C:
/* 801B780C 001B48EC  80 85 00 14 */	lwz r4, 0x14(r5)
/* 801B7810 001B48F0  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 801B7814 001B48F4  4B FF E4 95 */	bl ARStartDMA
.L_801B7818:
/* 801B7818 001B48F8  80 6D 99 9C */	lwz r3, __ARQRequestPendingLo@sda21(r13)
/* 801B781C 001B48FC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801B7820 001B4900  90 0D 99 A4 */	stw r0, __ARQCallbackLo@sda21(r13)
/* 801B7824 001B4904  48 00 00 34 */	b .L_801B7858
.L_801B7828:
/* 801B7828 001B4908  80 65 00 08 */	lwz r3, 0x8(r5)
/* 801B782C 001B490C  28 03 00 00 */	cmplwi r3, 0x0
/* 801B7830 001B4910  40 82 00 18 */	bne .L_801B7848
/* 801B7834 001B4914  80 85 00 10 */	lwz r4, 0x10(r5)
/* 801B7838 001B4918  7C 06 03 78 */	mr r6, r0
/* 801B783C 001B491C  80 A5 00 14 */	lwz r5, 0x14(r5)
/* 801B7840 001B4920  4B FF E4 69 */	bl ARStartDMA
/* 801B7844 001B4924  48 00 00 14 */	b .L_801B7858
.L_801B7848:
/* 801B7848 001B4928  80 85 00 14 */	lwz r4, 0x14(r5)
/* 801B784C 001B492C  7C 06 03 78 */	mr r6, r0
/* 801B7850 001B4930  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 801B7854 001B4934  4B FF E4 55 */	bl ARStartDMA
.L_801B7858:
/* 801B7858 001B4938  80 6D 99 9C */	lwz r3, __ARQRequestPendingLo@sda21(r13)
/* 801B785C 001B493C  80 8D 99 A8 */	lwz r4, __ARQChunkSize@sda21(r13)
/* 801B7860 001B4940  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801B7864 001B4944  7C 04 00 50 */	subf r0, r4, r0
/* 801B7868 001B4948  90 03 00 18 */	stw r0, 0x18(r3)
/* 801B786C 001B494C  80 8D 99 9C */	lwz r4, __ARQRequestPendingLo@sda21(r13)
/* 801B7870 001B4950  80 0D 99 A8 */	lwz r0, __ARQChunkSize@sda21(r13)
/* 801B7874 001B4954  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801B7878 001B4958  7C 03 02 14 */	add r0, r3, r0
/* 801B787C 001B495C  90 04 00 10 */	stw r0, 0x10(r4)
/* 801B7880 001B4960  80 8D 99 9C */	lwz r4, __ARQRequestPendingLo@sda21(r13)
/* 801B7884 001B4964  80 0D 99 A8 */	lwz r0, __ARQChunkSize@sda21(r13)
/* 801B7888 001B4968  80 64 00 14 */	lwz r3, 0x14(r4)
/* 801B788C 001B496C  7C 03 02 14 */	add r0, r3, r0
/* 801B7890 001B4970  90 04 00 14 */	stw r0, 0x14(r4)
.L_801B7894:
/* 801B7894 001B4974  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801B7898 001B4978  38 21 00 08 */	addi r1, r1, 0x8
/* 801B789C 001B497C  7C 08 03 A6 */	mtlr r0
/* 801B78A0 001B4980  4E 80 00 20 */	blr
.endfn __ARQServiceQueueLo

.fn __ARQCallbackHack, global
/* 801B78A4 001B4984  4E 80 00 20 */	blr
.endfn __ARQCallbackHack

.fn __ARQInterruptServiceRoutine, global
/* 801B78A8 001B4988  7C 08 02 A6 */	mflr r0
/* 801B78AC 001B498C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B78B0 001B4990  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801B78B4 001B4994  81 8D 99 A0 */	lwz r12, __ARQCallbackHi@sda21(r13)
/* 801B78B8 001B4998  28 0C 00 00 */	cmplwi r12, 0x0
/* 801B78BC 001B499C  41 82 00 20 */	beq .L_801B78DC
/* 801B78C0 001B49A0  80 6D 99 98 */	lwz r3, __ARQRequestPendingHi@sda21(r13)
/* 801B78C4 001B49A4  7D 88 03 A6 */	mtlr r12
/* 801B78C8 001B49A8  4E 80 00 21 */	blrl
/* 801B78CC 001B49AC  38 00 00 00 */	li r0, 0x0
/* 801B78D0 001B49B0  90 0D 99 98 */	stw r0, __ARQRequestPendingHi@sda21(r13)
/* 801B78D4 001B49B4  90 0D 99 A0 */	stw r0, __ARQCallbackHi@sda21(r13)
/* 801B78D8 001B49B8  48 00 00 28 */	b .L_801B7900
.L_801B78DC:
/* 801B78DC 001B49BC  81 8D 99 A4 */	lwz r12, __ARQCallbackLo@sda21(r13)
/* 801B78E0 001B49C0  28 0C 00 00 */	cmplwi r12, 0x0
/* 801B78E4 001B49C4  41 82 00 1C */	beq .L_801B7900
/* 801B78E8 001B49C8  80 6D 99 9C */	lwz r3, __ARQRequestPendingLo@sda21(r13)
/* 801B78EC 001B49CC  7D 88 03 A6 */	mtlr r12
/* 801B78F0 001B49D0  4E 80 00 21 */	blrl
/* 801B78F4 001B49D4  38 00 00 00 */	li r0, 0x0
/* 801B78F8 001B49D8  90 0D 99 9C */	stw r0, __ARQRequestPendingLo@sda21(r13)
/* 801B78FC 001B49DC  90 0D 99 A4 */	stw r0, __ARQCallbackLo@sda21(r13)
.L_801B7900:
/* 801B7900 001B49E0  80 CD 99 80 */	lwz r6, __ARQRequestQueueHi@sda21(r13)
/* 801B7904 001B49E4  28 06 00 00 */	cmplwi r6, 0x0
/* 801B7908 001B49E8  41 82 00 4C */	beq .L_801B7954
/* 801B790C 001B49EC  80 66 00 08 */	lwz r3, 0x8(r6)
/* 801B7910 001B49F0  28 03 00 00 */	cmplwi r3, 0x0
/* 801B7914 001B49F4  40 82 00 18 */	bne .L_801B792C
/* 801B7918 001B49F8  80 86 00 10 */	lwz r4, 0x10(r6)
/* 801B791C 001B49FC  80 A6 00 14 */	lwz r5, 0x14(r6)
/* 801B7920 001B4A00  80 C6 00 18 */	lwz r6, 0x18(r6)
/* 801B7924 001B4A04  4B FF E3 85 */	bl ARStartDMA
/* 801B7928 001B4A08  48 00 00 14 */	b .L_801B793C
.L_801B792C:
/* 801B792C 001B4A0C  80 86 00 14 */	lwz r4, 0x14(r6)
/* 801B7930 001B4A10  80 A6 00 10 */	lwz r5, 0x10(r6)
/* 801B7934 001B4A14  80 C6 00 18 */	lwz r6, 0x18(r6)
/* 801B7938 001B4A18  4B FF E3 71 */	bl ARStartDMA
.L_801B793C:
/* 801B793C 001B4A1C  80 6D 99 80 */	lwz r3, __ARQRequestQueueHi@sda21(r13)
/* 801B7940 001B4A20  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801B7944 001B4A24  90 0D 99 A0 */	stw r0, __ARQCallbackHi@sda21(r13)
/* 801B7948 001B4A28  90 6D 99 98 */	stw r3, __ARQRequestPendingHi@sda21(r13)
/* 801B794C 001B4A2C  80 03 00 00 */	lwz r0, 0x0(r3)
/* 801B7950 001B4A30  90 0D 99 80 */	stw r0, __ARQRequestQueueHi@sda21(r13)
.L_801B7954:
/* 801B7954 001B4A34  80 0D 99 98 */	lwz r0, __ARQRequestPendingHi@sda21(r13)
/* 801B7958 001B4A38  28 00 00 00 */	cmplwi r0, 0x0
/* 801B795C 001B4A3C  40 82 00 08 */	bne .L_801B7964
/* 801B7960 001B4A40  4B FF FE 45 */	bl __ARQServiceQueueLo
.L_801B7964:
/* 801B7964 001B4A44  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801B7968 001B4A48  38 21 00 08 */	addi r1, r1, 0x8
/* 801B796C 001B4A4C  7C 08 03 A6 */	mtlr r0
/* 801B7970 001B4A50  4E 80 00 20 */	blr
.endfn __ARQInterruptServiceRoutine

.fn ARQInit, global
/* 801B7974 001B4A54  7C 08 02 A6 */	mflr r0
/* 801B7978 001B4A58  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B797C 001B4A5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B7980 001B4A60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B7984 001B4A64  80 0D 99 AC */	lwz r0, __ARQ_init_flag@sda21(r13)
/* 801B7988 001B4A68  2C 00 00 01 */	cmpwi r0, 0x1
/* 801B798C 001B4A6C  41 82 00 44 */	beq .L_801B79D0
/* 801B7990 001B4A70  80 6D 85 58 */	lwz r3, __ARQVersion@sda21(r13)
/* 801B7994 001B4A74  48 01 9C 69 */	bl OSRegisterVersion
/* 801B7998 001B4A78  3B E0 00 00 */	li r31, 0x0
/* 801B799C 001B4A7C  38 00 10 00 */	li r0, 0x1000
/* 801B79A0 001B4A80  93 ED 99 88 */	stw r31, __ARQRequestQueueLo@sda21(r13)
/* 801B79A4 001B4A84  3C 60 80 1B */	lis r3, __ARQInterruptServiceRoutine@ha
/* 801B79A8 001B4A88  93 ED 99 80 */	stw r31, __ARQRequestQueueHi@sda21(r13)
/* 801B79AC 001B4A8C  38 63 78 A8 */	addi r3, r3, __ARQInterruptServiceRoutine@l
/* 801B79B0 001B4A90  90 0D 99 A8 */	stw r0, __ARQChunkSize@sda21(r13)
/* 801B79B4 001B4A94  4B FF E2 B1 */	bl ARRegisterDMACallback
/* 801B79B8 001B4A98  38 00 00 01 */	li r0, 0x1
/* 801B79BC 001B4A9C  93 ED 99 98 */	stw r31, __ARQRequestPendingHi@sda21(r13)
/* 801B79C0 001B4AA0  93 ED 99 9C */	stw r31, __ARQRequestPendingLo@sda21(r13)
/* 801B79C4 001B4AA4  93 ED 99 A0 */	stw r31, __ARQCallbackHi@sda21(r13)
/* 801B79C8 001B4AA8  93 ED 99 A4 */	stw r31, __ARQCallbackLo@sda21(r13)
/* 801B79CC 001B4AAC  90 0D 99 AC */	stw r0, __ARQ_init_flag@sda21(r13)
.L_801B79D0:
/* 801B79D0 001B4AB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B79D4 001B4AB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B79D8 001B4AB8  38 21 00 10 */	addi r1, r1, 0x10
/* 801B79DC 001B4ABC  7C 08 03 A6 */	mtlr r0
/* 801B79E0 001B4AC0  4E 80 00 20 */	blr
.endfn ARQInit

.fn ARQPostRequest, global
/* 801B79E4 001B4AC4  7C 08 02 A6 */	mflr r0
/* 801B79E8 001B4AC8  28 0A 00 00 */	cmplwi r10, 0x0
/* 801B79EC 001B4ACC  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B79F0 001B4AD0  38 00 00 00 */	li r0, 0x0
/* 801B79F4 001B4AD4  94 21 FF C8 */	stwu r1, -0x38(r1)
/* 801B79F8 001B4AD8  93 E1 00 34 */	stw r31, 0x34(r1)
/* 801B79FC 001B4ADC  93 C1 00 30 */	stw r30, 0x30(r1)
/* 801B7A00 001B4AE0  3B C6 00 00 */	addi r30, r6, 0x0
/* 801B7A04 001B4AE4  93 A1 00 2C */	stw r29, 0x2c(r1)
/* 801B7A08 001B4AE8  3B A3 00 00 */	addi r29, r3, 0x0
/* 801B7A0C 001B4AEC  90 03 00 00 */	stw r0, 0x0(r3)
/* 801B7A10 001B4AF0  90 83 00 04 */	stw r4, 0x4(r3)
/* 801B7A14 001B4AF4  90 A3 00 08 */	stw r5, 0x8(r3)
/* 801B7A18 001B4AF8  90 E3 00 10 */	stw r7, 0x10(r3)
/* 801B7A1C 001B4AFC  91 03 00 14 */	stw r8, 0x14(r3)
/* 801B7A20 001B4B00  91 23 00 18 */	stw r9, 0x18(r3)
/* 801B7A24 001B4B04  41 82 00 0C */	beq .L_801B7A30
/* 801B7A28 001B4B08  91 5D 00 1C */	stw r10, 0x1c(r29)
/* 801B7A2C 001B4B0C  48 00 00 10 */	b .L_801B7A3C
.L_801B7A30:
/* 801B7A30 001B4B10  3C 60 80 1B */	lis r3, __ARQCallbackHack@ha
/* 801B7A34 001B4B14  38 03 78 A4 */	addi r0, r3, __ARQCallbackHack@l
/* 801B7A38 001B4B18  90 1D 00 1C */	stw r0, 0x1c(r29)
.L_801B7A3C:
/* 801B7A3C 001B4B1C  48 01 C8 D5 */	bl OSDisableInterrupts
/* 801B7A40 001B4B20  2C 1E 00 01 */	cmpwi r30, 0x1
/* 801B7A44 001B4B24  3B E3 00 00 */	addi r31, r3, 0x0
/* 801B7A48 001B4B28  41 82 00 38 */	beq .L_801B7A80
/* 801B7A4C 001B4B2C  40 80 00 54 */	bge .L_801B7AA0
/* 801B7A50 001B4B30  2C 1E 00 00 */	cmpwi r30, 0x0
/* 801B7A54 001B4B34  40 80 00 08 */	bge .L_801B7A5C
/* 801B7A58 001B4B38  48 00 00 48 */	b .L_801B7AA0
.L_801B7A5C:
/* 801B7A5C 001B4B3C  80 0D 99 88 */	lwz r0, __ARQRequestQueueLo@sda21(r13)
/* 801B7A60 001B4B40  28 00 00 00 */	cmplwi r0, 0x0
/* 801B7A64 001B4B44  41 82 00 10 */	beq .L_801B7A74
/* 801B7A68 001B4B48  80 6D 99 8C */	lwz r3, __ARQRequestTailLo@sda21(r13)
/* 801B7A6C 001B4B4C  93 A3 00 00 */	stw r29, 0x0(r3)
/* 801B7A70 001B4B50  48 00 00 08 */	b .L_801B7A78
.L_801B7A74:
/* 801B7A74 001B4B54  93 AD 99 88 */	stw r29, __ARQRequestQueueLo@sda21(r13)
.L_801B7A78:
/* 801B7A78 001B4B58  93 AD 99 8C */	stw r29, __ARQRequestTailLo@sda21(r13)
/* 801B7A7C 001B4B5C  48 00 00 24 */	b .L_801B7AA0
.L_801B7A80:
/* 801B7A80 001B4B60  80 0D 99 80 */	lwz r0, __ARQRequestQueueHi@sda21(r13)
/* 801B7A84 001B4B64  28 00 00 00 */	cmplwi r0, 0x0
/* 801B7A88 001B4B68  41 82 00 10 */	beq .L_801B7A98
/* 801B7A8C 001B4B6C  80 6D 99 84 */	lwz r3, __ARQRequestTailHi@sda21(r13)
/* 801B7A90 001B4B70  93 A3 00 00 */	stw r29, 0x0(r3)
/* 801B7A94 001B4B74  48 00 00 08 */	b .L_801B7A9C
.L_801B7A98:
/* 801B7A98 001B4B78  93 AD 99 80 */	stw r29, __ARQRequestQueueHi@sda21(r13)
.L_801B7A9C:
/* 801B7A9C 001B4B7C  93 AD 99 84 */	stw r29, __ARQRequestTailHi@sda21(r13)
.L_801B7AA0:
/* 801B7AA0 001B4B80  80 0D 99 98 */	lwz r0, __ARQRequestPendingHi@sda21(r13)
/* 801B7AA4 001B4B84  28 00 00 00 */	cmplwi r0, 0x0
/* 801B7AA8 001B4B88  40 82 00 74 */	bne .L_801B7B1C
/* 801B7AAC 001B4B8C  80 0D 99 9C */	lwz r0, __ARQRequestPendingLo@sda21(r13)
/* 801B7AB0 001B4B90  28 00 00 00 */	cmplwi r0, 0x0
/* 801B7AB4 001B4B94  40 82 00 68 */	bne .L_801B7B1C
/* 801B7AB8 001B4B98  80 CD 99 80 */	lwz r6, __ARQRequestQueueHi@sda21(r13)
/* 801B7ABC 001B4B9C  28 06 00 00 */	cmplwi r6, 0x0
/* 801B7AC0 001B4BA0  41 82 00 4C */	beq .L_801B7B0C
/* 801B7AC4 001B4BA4  80 66 00 08 */	lwz r3, 0x8(r6)
/* 801B7AC8 001B4BA8  28 03 00 00 */	cmplwi r3, 0x0
/* 801B7ACC 001B4BAC  40 82 00 18 */	bne .L_801B7AE4
/* 801B7AD0 001B4BB0  80 86 00 10 */	lwz r4, 0x10(r6)
/* 801B7AD4 001B4BB4  80 A6 00 14 */	lwz r5, 0x14(r6)
/* 801B7AD8 001B4BB8  80 C6 00 18 */	lwz r6, 0x18(r6)
/* 801B7ADC 001B4BBC  4B FF E1 CD */	bl ARStartDMA
/* 801B7AE0 001B4BC0  48 00 00 14 */	b .L_801B7AF4
.L_801B7AE4:
/* 801B7AE4 001B4BC4  80 86 00 14 */	lwz r4, 0x14(r6)
/* 801B7AE8 001B4BC8  80 A6 00 10 */	lwz r5, 0x10(r6)
/* 801B7AEC 001B4BCC  80 C6 00 18 */	lwz r6, 0x18(r6)
/* 801B7AF0 001B4BD0  4B FF E1 B9 */	bl ARStartDMA
.L_801B7AF4:
/* 801B7AF4 001B4BD4  80 6D 99 80 */	lwz r3, __ARQRequestQueueHi@sda21(r13)
/* 801B7AF8 001B4BD8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801B7AFC 001B4BDC  90 0D 99 A0 */	stw r0, __ARQCallbackHi@sda21(r13)
/* 801B7B00 001B4BE0  90 6D 99 98 */	stw r3, __ARQRequestPendingHi@sda21(r13)
/* 801B7B04 001B4BE4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 801B7B08 001B4BE8  90 0D 99 80 */	stw r0, __ARQRequestQueueHi@sda21(r13)
.L_801B7B0C:
/* 801B7B0C 001B4BEC  80 0D 99 98 */	lwz r0, __ARQRequestPendingHi@sda21(r13)
/* 801B7B10 001B4BF0  28 00 00 00 */	cmplwi r0, 0x0
/* 801B7B14 001B4BF4  40 82 00 08 */	bne .L_801B7B1C
/* 801B7B18 001B4BF8  4B FF FC 8D */	bl __ARQServiceQueueLo
.L_801B7B1C:
/* 801B7B1C 001B4BFC  7F E3 FB 78 */	mr r3, r31
/* 801B7B20 001B4C00  48 01 C8 19 */	bl OSRestoreInterrupts
/* 801B7B24 001B4C04  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 801B7B28 001B4C08  83 E1 00 34 */	lwz r31, 0x34(r1)
/* 801B7B2C 001B4C0C  83 C1 00 30 */	lwz r30, 0x30(r1)
/* 801B7B30 001B4C10  83 A1 00 2C */	lwz r29, 0x2c(r1)
/* 801B7B34 001B4C14  38 21 00 38 */	addi r1, r1, 0x38
/* 801B7B38 001B4C18  7C 08 03 A6 */	mtlr r0
/* 801B7B3C 001B4C1C  4E 80 00 20 */	blr
.endfn ARQPostRequest

.fn ARQRemoveRequest, global
/* 801B7B40 001B4C20  7C 08 02 A6 */	mflr r0
/* 801B7B44 001B4C24  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B7B48 001B4C28  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801B7B4C 001B4C2C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801B7B50 001B4C30  7C 7F 1B 78 */	mr r31, r3
/* 801B7B54 001B4C34  48 01 C7 BD */	bl OSDisableInterrupts
/* 801B7B58 001B4C38  38 00 00 00 */	li r0, 0x0
/* 801B7B5C 001B4C3C  80 AD 99 80 */	lwz r5, __ARQRequestQueueHi@sda21(r13)
/* 801B7B60 001B4C40  90 0D 99 90 */	stw r0, __ARQRequestQueueTemp@sda21(r13)
/* 801B7B64 001B4C44  90 0D 99 94 */	stw r0, __ARQRequestTailTemp@sda21(r13)
/* 801B7B68 001B4C48  48 00 00 34 */	b .L_801B7B9C
.L_801B7B6C:
/* 801B7B6C 001B4C4C  7C 05 F8 40 */	cmplw r5, r31
/* 801B7B70 001B4C50  41 82 00 28 */	beq .L_801B7B98
/* 801B7B74 001B4C54  80 0D 99 90 */	lwz r0, __ARQRequestQueueTemp@sda21(r13)
/* 801B7B78 001B4C58  28 00 00 00 */	cmplwi r0, 0x0
/* 801B7B7C 001B4C5C  40 82 00 10 */	bne .L_801B7B8C
/* 801B7B80 001B4C60  90 AD 99 90 */	stw r5, __ARQRequestQueueTemp@sda21(r13)
/* 801B7B84 001B4C64  90 AD 99 94 */	stw r5, __ARQRequestTailTemp@sda21(r13)
/* 801B7B88 001B4C68  48 00 00 10 */	b .L_801B7B98
.L_801B7B8C:
/* 801B7B8C 001B4C6C  80 8D 99 94 */	lwz r4, __ARQRequestTailTemp@sda21(r13)
/* 801B7B90 001B4C70  90 A4 00 00 */	stw r5, 0x0(r4)
/* 801B7B94 001B4C74  90 AD 99 94 */	stw r5, __ARQRequestTailTemp@sda21(r13)
.L_801B7B98:
/* 801B7B98 001B4C78  80 A5 00 00 */	lwz r5, 0x0(r5)
.L_801B7B9C:
/* 801B7B9C 001B4C7C  28 05 00 00 */	cmplwi r5, 0x0
/* 801B7BA0 001B4C80  40 82 FF CC */	bne .L_801B7B6C
/* 801B7BA4 001B4C84  80 AD 99 90 */	lwz r5, __ARQRequestQueueTemp@sda21(r13)
/* 801B7BA8 001B4C88  38 00 00 00 */	li r0, 0x0
/* 801B7BAC 001B4C8C  80 8D 99 94 */	lwz r4, __ARQRequestTailTemp@sda21(r13)
/* 801B7BB0 001B4C90  90 AD 99 80 */	stw r5, __ARQRequestQueueHi@sda21(r13)
/* 801B7BB4 001B4C94  80 AD 99 88 */	lwz r5, __ARQRequestQueueLo@sda21(r13)
/* 801B7BB8 001B4C98  90 8D 99 84 */	stw r4, __ARQRequestTailHi@sda21(r13)
/* 801B7BBC 001B4C9C  90 0D 99 90 */	stw r0, __ARQRequestQueueTemp@sda21(r13)
/* 801B7BC0 001B4CA0  90 0D 99 94 */	stw r0, __ARQRequestTailTemp@sda21(r13)
/* 801B7BC4 001B4CA4  48 00 00 34 */	b .L_801B7BF8
.L_801B7BC8:
/* 801B7BC8 001B4CA8  7C 05 F8 40 */	cmplw r5, r31
/* 801B7BCC 001B4CAC  41 82 00 28 */	beq .L_801B7BF4
/* 801B7BD0 001B4CB0  80 0D 99 90 */	lwz r0, __ARQRequestQueueTemp@sda21(r13)
/* 801B7BD4 001B4CB4  28 00 00 00 */	cmplwi r0, 0x0
/* 801B7BD8 001B4CB8  40 82 00 10 */	bne .L_801B7BE8
/* 801B7BDC 001B4CBC  90 AD 99 90 */	stw r5, __ARQRequestQueueTemp@sda21(r13)
/* 801B7BE0 001B4CC0  90 AD 99 94 */	stw r5, __ARQRequestTailTemp@sda21(r13)
/* 801B7BE4 001B4CC4  48 00 00 10 */	b .L_801B7BF4
.L_801B7BE8:
/* 801B7BE8 001B4CC8  80 8D 99 94 */	lwz r4, __ARQRequestTailTemp@sda21(r13)
/* 801B7BEC 001B4CCC  90 A4 00 00 */	stw r5, 0x0(r4)
/* 801B7BF0 001B4CD0  90 AD 99 94 */	stw r5, __ARQRequestTailTemp@sda21(r13)
.L_801B7BF4:
/* 801B7BF4 001B4CD4  80 A5 00 00 */	lwz r5, 0x0(r5)
.L_801B7BF8:
/* 801B7BF8 001B4CD8  28 05 00 00 */	cmplwi r5, 0x0
/* 801B7BFC 001B4CDC  40 82 FF CC */	bne .L_801B7BC8
/* 801B7C00 001B4CE0  80 8D 99 90 */	lwz r4, __ARQRequestQueueTemp@sda21(r13)
/* 801B7C04 001B4CE4  80 0D 99 94 */	lwz r0, __ARQRequestTailTemp@sda21(r13)
/* 801B7C08 001B4CE8  90 8D 99 88 */	stw r4, __ARQRequestQueueLo@sda21(r13)
/* 801B7C0C 001B4CEC  90 0D 99 8C */	stw r0, __ARQRequestTailLo@sda21(r13)
/* 801B7C10 001B4CF0  48 01 C7 29 */	bl OSRestoreInterrupts
/* 801B7C14 001B4CF4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801B7C18 001B4CF8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801B7C1C 001B4CFC  38 21 00 18 */	addi r1, r1, 0x18
/* 801B7C20 001B4D00  7C 08 03 A6 */	mtlr r0
/* 801B7C24 001B4D04  4E 80 00 20 */	blr
.endfn ARQRemoveRequest

.fn ARQFlushQueue, global
/* 801B7C28 001B4D08  7C 08 02 A6 */	mflr r0
/* 801B7C2C 001B4D0C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B7C30 001B4D10  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801B7C34 001B4D14  48 01 C6 DD */	bl OSDisableInterrupts
/* 801B7C38 001B4D18  38 00 00 00 */	li r0, 0x0
/* 801B7C3C 001B4D1C  90 0D 99 80 */	stw r0, __ARQRequestQueueHi@sda21(r13)
/* 801B7C40 001B4D20  90 0D 99 84 */	stw r0, __ARQRequestTailHi@sda21(r13)
/* 801B7C44 001B4D24  90 0D 99 88 */	stw r0, __ARQRequestQueueLo@sda21(r13)
/* 801B7C48 001B4D28  90 0D 99 8C */	stw r0, __ARQRequestTailLo@sda21(r13)
/* 801B7C4C 001B4D2C  48 01 C6 ED */	bl OSRestoreInterrupts
/* 801B7C50 001B4D30  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801B7C54 001B4D34  38 21 00 08 */	addi r1, r1, 0x8
/* 801B7C58 001B4D38  7C 08 03 A6 */	mtlr r0
/* 801B7C5C 001B4D3C  4E 80 00 20 */	blr
.endfn ARQFlushQueue

# 0x802B0450 - 0x802B0498
.data
.balign 8
.sym ...data.0, local

.obj "@1", local
	.4byte 0x3C3C2044
	.4byte 0x6F6C7068
	.4byte 0x696E2053
	.4byte 0x444B202D
	.4byte 0x20415251
	.4byte 0x0972656C
	.4byte 0x65617365
	.4byte 0x20627569
	.4byte 0x6C643A20
	.4byte 0x41707220
	.4byte 0x31372032
	.4byte 0x30303320
	.4byte 0x31323A33
	.4byte 0x333A3536
	.4byte 0x20283078
	.4byte 0x32333031
	.4byte 0x29203E3E
	.byte 0x00
.endobj "@1"
	.byte 0x00, 0x00, 0x00

# 0x803CAE58 - 0x803CAE60
.section .sdata, "wa"
.balign 8

.obj __ARQVersion, global
	.4byte ...data.0
.endobj __ARQVersion
	.4byte 0x00000000

# 0x803CC280 - 0x803CC2B0
.section .sbss, "wa", @nobits
.balign 8

.obj __ARQRequestQueueHi, local
	.skip 0x4
.endobj __ARQRequestQueueHi

.obj __ARQRequestTailHi, local
	.skip 0x4
.endobj __ARQRequestTailHi

.obj __ARQRequestQueueLo, local
	.skip 0x4
.endobj __ARQRequestQueueLo

.obj __ARQRequestTailLo, local
	.skip 0x4
.endobj __ARQRequestTailLo

.obj __ARQRequestQueueTemp, local
	.skip 0x4
.endobj __ARQRequestQueueTemp

.obj __ARQRequestTailTemp, local
	.skip 0x4
.endobj __ARQRequestTailTemp

.obj __ARQRequestPendingHi, local
	.skip 0x4
.endobj __ARQRequestPendingHi

.obj __ARQRequestPendingLo, local
	.skip 0x4
.endobj __ARQRequestPendingLo

.obj __ARQCallbackHi, local
	.skip 0x4
.endobj __ARQCallbackHi

.obj __ARQCallbackLo, local
	.skip 0x4
.endobj __ARQCallbackLo

.obj __ARQChunkSize, local
	.skip 0x4
.endobj __ARQChunkSize

.obj __ARQ_init_flag, local
	.skip 0x4
.endobj __ARQ_init_flag
