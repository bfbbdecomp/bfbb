.include "macros.inc"
.file "OSError.c"

# 0x801D2F04 - 0x801D35B0
.text
.balign 4

.fn OSReport, weak
/* 801D2F04 001CFFE4  7C 08 02 A6 */	mflr r0
/* 801D2F08 001CFFE8  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D2F0C 001CFFEC  94 21 FF 88 */	stwu r1, -0x78(r1)
/* 801D2F10 001CFFF0  40 86 00 24 */	bne cr1, .L_801D2F34
/* 801D2F14 001CFFF4  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 801D2F18 001CFFF8  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 801D2F1C 001CFFFC  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 801D2F20 001D0000  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 801D2F24 001D0004  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 801D2F28 001D0008  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 801D2F2C 001D000C  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 801D2F30 001D0010  D9 01 00 60 */	stfd f8, 0x60(r1)
.L_801D2F34:
/* 801D2F34 001D0014  90 61 00 08 */	stw r3, 0x8(r1)
/* 801D2F38 001D0018  3C 00 01 00 */	lis r0, 0x100
/* 801D2F3C 001D001C  90 81 00 0C */	stw r4, 0xc(r1)
/* 801D2F40 001D0020  38 81 00 6C */	addi r4, r1, 0x6c
/* 801D2F44 001D0024  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801D2F48 001D0028  90 C1 00 14 */	stw r6, 0x14(r1)
/* 801D2F4C 001D002C  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801D2F50 001D0030  91 01 00 1C */	stw r8, 0x1c(r1)
/* 801D2F54 001D0034  91 21 00 20 */	stw r9, 0x20(r1)
/* 801D2F58 001D0038  91 41 00 24 */	stw r10, 0x24(r1)
/* 801D2F5C 001D003C  90 01 00 6C */	stw r0, 0x6c(r1)
/* 801D2F60 001D0040  38 01 00 80 */	addi r0, r1, 0x80
/* 801D2F64 001D0044  90 01 00 70 */	stw r0, 0x70(r1)
/* 801D2F68 001D0048  38 01 00 08 */	addi r0, r1, 0x8
/* 801D2F6C 001D004C  90 01 00 74 */	stw r0, 0x74(r1)
/* 801D2F70 001D0050  48 01 11 1D */	bl vprintf
/* 801D2F74 001D0054  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 801D2F78 001D0058  38 21 00 78 */	addi r1, r1, 0x78
/* 801D2F7C 001D005C  7C 08 03 A6 */	mtlr r0
/* 801D2F80 001D0060  4E 80 00 20 */	blr
.endfn OSReport

.fn OSPanic, weak
/* 801D2F84 001D0064  7C 08 02 A6 */	mflr r0
/* 801D2F88 001D0068  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D2F8C 001D006C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801D2F90 001D0070  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 801D2F94 001D0074  93 C1 00 88 */	stw r30, 0x88(r1)
/* 801D2F98 001D0078  93 A1 00 84 */	stw r29, 0x84(r1)
/* 801D2F9C 001D007C  93 81 00 80 */	stw r28, 0x80(r1)
/* 801D2FA0 001D0080  40 86 00 24 */	bne cr1, .L_801D2FC4
/* 801D2FA4 001D0084  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 801D2FA8 001D0088  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 801D2FAC 001D008C  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 801D2FB0 001D0090  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 801D2FB4 001D0094  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 801D2FB8 001D0098  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 801D2FBC 001D009C  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 801D2FC0 001D00A0  D9 01 00 60 */	stfd f8, 0x60(r1)
.L_801D2FC4:
/* 801D2FC4 001D00A4  90 61 00 08 */	stw r3, 0x8(r1)
/* 801D2FC8 001D00A8  3B 83 00 00 */	addi r28, r3, 0x0
/* 801D2FCC 001D00AC  3B C4 00 00 */	addi r30, r4, 0x0
/* 801D2FD0 001D00B0  90 81 00 0C */	stw r4, 0xc(r1)
/* 801D2FD4 001D00B4  3B A5 00 00 */	addi r29, r5, 0x0
/* 801D2FD8 001D00B8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801D2FDC 001D00BC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 801D2FE0 001D00C0  3C C0 80 2B */	lis r6, ...data.0@ha
/* 801D2FE4 001D00C4  3B E6 56 60 */	addi r31, r6, ...data.0@l
/* 801D2FE8 001D00C8  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801D2FEC 001D00CC  91 01 00 1C */	stw r8, 0x1c(r1)
/* 801D2FF0 001D00D0  91 21 00 20 */	stw r9, 0x20(r1)
/* 801D2FF4 001D00D4  91 41 00 24 */	stw r10, 0x24(r1)
/* 801D2FF8 001D00D8  48 00 13 19 */	bl OSDisableInterrupts
/* 801D2FFC 001D00DC  3C 00 03 00 */	lis r0, 0x300
/* 801D3000 001D00E0  90 01 00 74 */	stw r0, 0x74(r1)
/* 801D3004 001D00E4  38 01 00 98 */	addi r0, r1, 0x98
/* 801D3008 001D00E8  38 81 00 74 */	addi r4, r1, 0x74
/* 801D300C 001D00EC  90 01 00 78 */	stw r0, 0x78(r1)
/* 801D3010 001D00F0  38 01 00 08 */	addi r0, r1, 0x8
/* 801D3014 001D00F4  38 7D 00 00 */	addi r3, r29, 0x0
/* 801D3018 001D00F8  90 01 00 7C */	stw r0, 0x7c(r1)
/* 801D301C 001D00FC  48 01 10 71 */	bl vprintf
/* 801D3020 001D0100  38 7F 00 00 */	addi r3, r31, 0x0
/* 801D3024 001D0104  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3028 001D0108  38 9C 00 00 */	addi r4, r28, 0x0
/* 801D302C 001D010C  38 BE 00 00 */	addi r5, r30, 0x0
/* 801D3030 001D0110  4B FF FE D5 */	bl OSReport
/* 801D3034 001D0114  38 7F 00 18 */	addi r3, r31, 0x18
/* 801D3038 001D0118  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D303C 001D011C  4B FF FE C9 */	bl OSReport
/* 801D3040 001D0120  3B C0 00 00 */	li r30, 0x0
/* 801D3044 001D0124  4B FF FB 21 */	bl OSGetStackPointer
/* 801D3048 001D0128  7C 7D 1B 78 */	mr r29, r3
/* 801D304C 001D012C  48 00 00 20 */	b .L_801D306C
.L_801D3050:
/* 801D3050 001D0130  80 BD 00 00 */	lwz r5, 0x0(r29)
/* 801D3054 001D0134  7F A4 EB 78 */	mr r4, r29
/* 801D3058 001D0138  80 DD 00 04 */	lwz r6, 0x4(r29)
/* 801D305C 001D013C  38 7F 00 40 */	addi r3, r31, 0x40
/* 801D3060 001D0140  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3064 001D0144  4B FF FE A1 */	bl OSReport
/* 801D3068 001D0148  83 BD 00 00 */	lwz r29, 0x0(r29)
.L_801D306C:
/* 801D306C 001D014C  28 1D 00 00 */	cmplwi r29, 0x0
/* 801D3070 001D0150  41 82 00 1C */	beq .L_801D308C
/* 801D3074 001D0154  3C 1D 00 01 */	addis r0, r29, 0x1
/* 801D3078 001D0158  28 00 FF FF */	cmplwi r0, 0xffff
/* 801D307C 001D015C  41 82 00 10 */	beq .L_801D308C
/* 801D3080 001D0160  28 1E 00 10 */	cmplwi r30, 0x10
/* 801D3084 001D0164  3B DE 00 01 */	addi r30, r30, 0x1
/* 801D3088 001D0168  41 80 FF C8 */	blt .L_801D3050
.L_801D308C:
/* 801D308C 001D016C  4B FE 7C 25 */	bl PPCHalt
/* 801D3090 001D0170  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801D3094 001D0174  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801D3098 001D0178  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 801D309C 001D017C  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 801D30A0 001D0180  83 81 00 80 */	lwz r28, 0x80(r1)
/* 801D30A4 001D0184  38 21 00 90 */	addi r1, r1, 0x90
/* 801D30A8 001D0188  7C 08 03 A6 */	mtlr r0
/* 801D30AC 001D018C  4E 80 00 20 */	blr
.endfn OSPanic

.fn OSSetErrorHandler, global
/* 801D30B0 001D0190  7C 08 02 A6 */	mflr r0
/* 801D30B4 001D0194  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D30B8 001D0198  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801D30BC 001D019C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801D30C0 001D01A0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801D30C4 001D01A4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801D30C8 001D01A8  3B A3 00 00 */	addi r29, r3, 0x0
/* 801D30CC 001D01AC  93 81 00 20 */	stw r28, 0x20(r1)
/* 801D30D0 001D01B0  3B 84 00 00 */	addi r28, r4, 0x0
/* 801D30D4 001D01B4  48 00 12 3D */	bl OSDisableInterrupts
/* 801D30D8 001D01B8  3C 80 80 38 */	lis r4, __OSErrorTable@ha
/* 801D30DC 001D01BC  57 A5 13 BA */	clrlslwi r5, r29, 16, 2
/* 801D30E0 001D01C0  38 04 E0 10 */	addi r0, r4, __OSErrorTable@l
/* 801D30E4 001D01C4  57 A6 04 3E */	clrlwi r6, r29, 16
/* 801D30E8 001D01C8  7C 80 2A 14 */	add r4, r0, r5
/* 801D30EC 001D01CC  83 C4 00 00 */	lwz r30, 0x0(r4)
/* 801D30F0 001D01D0  28 06 00 10 */	cmplwi r6, 0x10
/* 801D30F4 001D01D4  7C 7D 1B 78 */	mr r29, r3
/* 801D30F8 001D01D8  93 84 00 00 */	stw r28, 0x0(r4)
/* 801D30FC 001D01DC  40 82 01 A0 */	bne .L_801D329C
/* 801D3100 001D01E0  4B FE 7B 71 */	bl PPCMfmsr
/* 801D3104 001D01E4  3B E3 00 00 */	addi r31, r3, 0x0
/* 801D3108 001D01E8  63 E3 20 00 */	ori r3, r31, 0x2000
/* 801D310C 001D01EC  4B FE 7B 6D */	bl PPCMtmsr
/* 801D3110 001D01F0  4B FE 7B E5 */	bl PPCMffpscr
/* 801D3114 001D01F4  28 1C 00 00 */	cmplwi r28, 0x0
/* 801D3118 001D01F8  41 82 01 18 */	beq .L_801D3230
/* 801D311C 001D01FC  3C A0 80 00 */	lis r5, 0x8000
/* 801D3120 001D0200  3C 80 60 06 */	lis r4, 0x6006
/* 801D3124 001D0204  80 C5 00 DC */	lwz r6, 0xdc(r5)
/* 801D3128 001D0208  38 84 F8 FF */	addi r4, r4, -0x701
/* 801D312C 001D020C  48 00 00 E8 */	b .L_801D3214
.L_801D3130:
/* 801D3130 001D0210  80 06 01 9C */	lwz r0, 0x19c(r6)
/* 801D3134 001D0214  60 00 09 00 */	ori r0, r0, 0x900
/* 801D3138 001D0218  90 06 01 9C */	stw r0, 0x19c(r6)
/* 801D313C 001D021C  A0 A6 01 A2 */	lhz r5, 0x1a2(r6)
/* 801D3140 001D0220  54 A0 07 FF */	clrlwi. r0, r5, 31
/* 801D3144 001D0224  40 82 00 AC */	bne .L_801D31F0
/* 801D3148 001D0228  60 A5 00 01 */	ori r5, r5, 0x1
/* 801D314C 001D022C  38 00 00 04 */	li r0, 0x4
/* 801D3150 001D0230  B0 A6 01 A2 */	sth r5, 0x1a2(r6)
/* 801D3154 001D0234  7C 09 03 A6 */	mtctr r0
/* 801D3158 001D0238  38 A6 00 00 */	addi r5, r6, 0x0
.L_801D315C:
/* 801D315C 001D023C  38 00 FF FF */	li r0, -0x1
/* 801D3160 001D0240  90 05 00 94 */	stw r0, 0x94(r5)
/* 801D3164 001D0244  90 05 00 90 */	stw r0, 0x90(r5)
/* 801D3168 001D0248  90 05 01 CC */	stw r0, 0x1cc(r5)
/* 801D316C 001D024C  90 05 01 C8 */	stw r0, 0x1c8(r5)
/* 801D3170 001D0250  90 05 00 9C */	stw r0, 0x9c(r5)
/* 801D3174 001D0254  90 05 00 98 */	stw r0, 0x98(r5)
/* 801D3178 001D0258  90 05 01 D4 */	stw r0, 0x1d4(r5)
/* 801D317C 001D025C  90 05 01 D0 */	stw r0, 0x1d0(r5)
/* 801D3180 001D0260  90 05 00 A4 */	stw r0, 0xa4(r5)
/* 801D3184 001D0264  90 05 00 A0 */	stw r0, 0xa0(r5)
/* 801D3188 001D0268  90 05 01 DC */	stw r0, 0x1dc(r5)
/* 801D318C 001D026C  90 05 01 D8 */	stw r0, 0x1d8(r5)
/* 801D3190 001D0270  90 05 00 AC */	stw r0, 0xac(r5)
/* 801D3194 001D0274  90 05 00 A8 */	stw r0, 0xa8(r5)
/* 801D3198 001D0278  90 05 01 E4 */	stw r0, 0x1e4(r5)
/* 801D319C 001D027C  90 05 01 E0 */	stw r0, 0x1e0(r5)
/* 801D31A0 001D0280  90 05 00 B4 */	stw r0, 0xb4(r5)
/* 801D31A4 001D0284  90 05 00 B0 */	stw r0, 0xb0(r5)
/* 801D31A8 001D0288  90 05 01 EC */	stw r0, 0x1ec(r5)
/* 801D31AC 001D028C  90 05 01 E8 */	stw r0, 0x1e8(r5)
/* 801D31B0 001D0290  90 05 00 BC */	stw r0, 0xbc(r5)
/* 801D31B4 001D0294  90 05 00 B8 */	stw r0, 0xb8(r5)
/* 801D31B8 001D0298  90 05 01 F4 */	stw r0, 0x1f4(r5)
/* 801D31BC 001D029C  90 05 01 F0 */	stw r0, 0x1f0(r5)
/* 801D31C0 001D02A0  90 05 00 C4 */	stw r0, 0xc4(r5)
/* 801D31C4 001D02A4  90 05 00 C0 */	stw r0, 0xc0(r5)
/* 801D31C8 001D02A8  90 05 01 FC */	stw r0, 0x1fc(r5)
/* 801D31CC 001D02AC  90 05 01 F8 */	stw r0, 0x1f8(r5)
/* 801D31D0 001D02B0  90 05 00 CC */	stw r0, 0xcc(r5)
/* 801D31D4 001D02B4  90 05 00 C8 */	stw r0, 0xc8(r5)
/* 801D31D8 001D02B8  90 05 02 04 */	stw r0, 0x204(r5)
/* 801D31DC 001D02BC  90 05 02 00 */	stw r0, 0x200(r5)
/* 801D31E0 001D02C0  38 A5 00 40 */	addi r5, r5, 0x40
/* 801D31E4 001D02C4  42 00 FF 78 */	bdnz .L_801D315C
/* 801D31E8 001D02C8  38 00 00 04 */	li r0, 0x4
/* 801D31EC 001D02CC  90 06 01 94 */	stw r0, 0x194(r6)
.L_801D31F0:
/* 801D31F0 001D02D0  80 0D 86 50 */	lwz r0, __OSFpscrEnableBits@sda21(r13)
/* 801D31F4 001D02D4  80 A6 01 94 */	lwz r5, 0x194(r6)
/* 801D31F8 001D02D8  54 00 06 38 */	rlwinm r0, r0, 0, 24, 28
/* 801D31FC 001D02DC  7C A0 03 78 */	or r0, r5, r0
/* 801D3200 001D02E0  90 06 01 94 */	stw r0, 0x194(r6)
/* 801D3204 001D02E4  80 06 01 94 */	lwz r0, 0x194(r6)
/* 801D3208 001D02E8  7C 00 20 38 */	and r0, r0, r4
/* 801D320C 001D02EC  90 06 01 94 */	stw r0, 0x194(r6)
/* 801D3210 001D02F0  80 C6 02 FC */	lwz r6, 0x2fc(r6)
.L_801D3214:
/* 801D3214 001D02F4  28 06 00 00 */	cmplwi r6, 0x0
/* 801D3218 001D02F8  40 82 FF 18 */	bne .L_801D3130
/* 801D321C 001D02FC  80 0D 86 50 */	lwz r0, __OSFpscrEnableBits@sda21(r13)
/* 801D3220 001D0300  63 FF 09 00 */	ori r31, r31, 0x900
/* 801D3224 001D0304  54 00 06 38 */	rlwinm r0, r0, 0, 24, 28
/* 801D3228 001D0308  7C 63 03 78 */	or r3, r3, r0
/* 801D322C 001D030C  48 00 00 58 */	b .L_801D3284
.L_801D3230:
/* 801D3230 001D0310  3C A0 80 00 */	lis r5, 0x8000
/* 801D3234 001D0314  3C 80 60 06 */	lis r4, 0x6006
/* 801D3238 001D0318  80 C5 00 DC */	lwz r6, 0xdc(r5)
/* 801D323C 001D031C  38 84 F8 FF */	addi r4, r4, -0x701
/* 801D3240 001D0320  38 A0 F6 FF */	li r5, -0x901
/* 801D3244 001D0324  48 00 00 2C */	b .L_801D3270
.L_801D3248:
/* 801D3248 001D0328  80 06 01 9C */	lwz r0, 0x19c(r6)
/* 801D324C 001D032C  7C 00 28 38 */	and r0, r0, r5
/* 801D3250 001D0330  90 06 01 9C */	stw r0, 0x19c(r6)
/* 801D3254 001D0334  80 06 01 94 */	lwz r0, 0x194(r6)
/* 801D3258 001D0338  54 00 07 6E */	rlwinm r0, r0, 0, 29, 23
/* 801D325C 001D033C  90 06 01 94 */	stw r0, 0x194(r6)
/* 801D3260 001D0340  80 06 01 94 */	lwz r0, 0x194(r6)
/* 801D3264 001D0344  7C 00 20 38 */	and r0, r0, r4
/* 801D3268 001D0348  90 06 01 94 */	stw r0, 0x194(r6)
/* 801D326C 001D034C  80 C6 02 FC */	lwz r6, 0x2fc(r6)
.L_801D3270:
/* 801D3270 001D0350  28 06 00 00 */	cmplwi r6, 0x0
/* 801D3274 001D0354  40 82 FF D4 */	bne .L_801D3248
/* 801D3278 001D0358  38 00 F6 FF */	li r0, -0x901
/* 801D327C 001D035C  54 63 07 6E */	rlwinm r3, r3, 0, 29, 23
/* 801D3280 001D0360  7F FF 00 38 */	and r31, r31, r0
.L_801D3284:
/* 801D3284 001D0364  3C 80 60 06 */	lis r4, 0x6006
/* 801D3288 001D0368  38 04 F8 FF */	addi r0, r4, -0x701
/* 801D328C 001D036C  7C 63 00 38 */	and r3, r3, r0
/* 801D3290 001D0370  4B FE 7A 85 */	bl PPCMtfpscr
/* 801D3294 001D0374  7F E3 FB 78 */	mr r3, r31
/* 801D3298 001D0378  4B FE 79 E1 */	bl PPCMtmsr
.L_801D329C:
/* 801D329C 001D037C  7F A3 EB 78 */	mr r3, r29
/* 801D32A0 001D0380  48 00 10 99 */	bl OSRestoreInterrupts
/* 801D32A4 001D0384  7F C3 F3 78 */	mr r3, r30
/* 801D32A8 001D0388  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801D32AC 001D038C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801D32B0 001D0390  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801D32B4 001D0394  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801D32B8 001D0398  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801D32BC 001D039C  38 21 00 30 */	addi r1, r1, 0x30
/* 801D32C0 001D03A0  7C 08 03 A6 */	mtlr r0
/* 801D32C4 001D03A4  4E 80 00 20 */	blr
.endfn OSSetErrorHandler

.fn __OSUnhandledException, global
/* 801D32C8 001D03A8  7C 08 02 A6 */	mflr r0
/* 801D32CC 001D03AC  3D 00 80 38 */	lis r8, ...bss.0@ha
/* 801D32D0 001D03B0  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D32D4 001D03B4  3C E0 80 2B */	lis r7, ...data.0@ha
/* 801D32D8 001D03B8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801D32DC 001D03BC  BE C1 00 18 */	stmw r22, 0x18(r1)
/* 801D32E0 001D03C0  3B 03 00 00 */	addi r24, r3, 0x0
/* 801D32E4 001D03C4  3B 24 00 00 */	addi r25, r4, 0x0
/* 801D32E8 001D03C8  3B 45 00 00 */	addi r26, r5, 0x0
/* 801D32EC 001D03CC  3B 66 00 00 */	addi r27, r6, 0x0
/* 801D32F0 001D03D0  3B C8 E0 10 */	addi r30, r8, ...bss.0@l
/* 801D32F4 001D03D4  3B E7 56 60 */	addi r31, r7, ...data.0@l
/* 801D32F8 001D03D8  48 00 42 55 */	bl OSGetTime
/* 801D32FC 001D03DC  80 B9 01 9C */	lwz r5, 0x19c(r25)
/* 801D3300 001D03E0  3B 84 00 00 */	addi r28, r4, 0x0
/* 801D3304 001D03E4  3B A3 00 00 */	addi r29, r3, 0x0
/* 801D3308 001D03E8  54 A0 07 BD */	rlwinm. r0, r5, 0, 30, 30
/* 801D330C 001D03EC  40 82 00 18 */	bne .L_801D3324
/* 801D3310 001D03F0  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801D3314 001D03F4  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3318 001D03F8  57 04 06 3E */	clrlwi r4, r24, 24
/* 801D331C 001D03FC  4B FF FB E9 */	bl OSReport
/* 801D3320 001D0400  48 00 01 54 */	b .L_801D3474
.L_801D3324:
/* 801D3324 001D0404  57 00 06 3E */	clrlwi r0, r24, 24
/* 801D3328 001D0408  28 00 00 06 */	cmplwi r0, 0x6
/* 801D332C 001D040C  40 82 00 D8 */	bne .L_801D3404
/* 801D3330 001D0410  54 A0 02 D7 */	rlwinm. r0, r5, 0, 11, 11
/* 801D3334 001D0414  41 82 00 D0 */	beq .L_801D3404
/* 801D3338 001D0418  80 1E 00 40 */	lwz r0, 0x40(r30)
/* 801D333C 001D041C  28 00 00 00 */	cmplwi r0, 0x0
/* 801D3340 001D0420  41 82 00 C4 */	beq .L_801D3404
/* 801D3344 001D0424  3B 00 00 10 */	li r24, 0x10
/* 801D3348 001D0428  4B FE 79 29 */	bl PPCMfmsr
/* 801D334C 001D042C  3A E3 00 00 */	addi r23, r3, 0x0
/* 801D3350 001D0430  62 E3 20 00 */	ori r3, r23, 0x2000
/* 801D3354 001D0434  4B FE 79 25 */	bl PPCMtmsr
/* 801D3358 001D0438  3C 60 80 00 */	lis r3, 0x8000
/* 801D335C 001D043C  80 63 00 D8 */	lwz r3, 0xd8(r3)
/* 801D3360 001D0440  28 03 00 00 */	cmplwi r3, 0x0
/* 801D3364 001D0444  41 82 00 08 */	beq .L_801D336C
/* 801D3368 001D0448  4B FF F6 35 */	bl OSSaveFPUContext
.L_801D336C:
/* 801D336C 001D044C  4B FE 79 89 */	bl PPCMffpscr
/* 801D3370 001D0450  3C 80 60 06 */	lis r4, 0x6006
/* 801D3374 001D0454  3A C4 F8 FF */	addi r22, r4, -0x701
/* 801D3378 001D0458  7C 63 B0 38 */	and r3, r3, r22
/* 801D337C 001D045C  4B FE 79 99 */	bl PPCMtfpscr
/* 801D3380 001D0460  7E E3 BB 78 */	mr r3, r23
/* 801D3384 001D0464  4B FE 78 F5 */	bl PPCMtmsr
/* 801D3388 001D0468  3E E0 80 00 */	lis r23, 0x8000
/* 801D338C 001D046C  80 17 00 D8 */	lwz r0, 0xd8(r23)
/* 801D3390 001D0470  7C 00 C8 40 */	cmplw r0, r25
/* 801D3394 001D0474  40 82 00 54 */	bne .L_801D33E8
/* 801D3398 001D0478  48 00 33 ED */	bl OSDisableScheduler
/* 801D339C 001D047C  81 9E 00 40 */	lwz r12, 0x40(r30)
/* 801D33A0 001D0480  38 99 00 00 */	addi r4, r25, 0x0
/* 801D33A4 001D0484  38 BA 00 00 */	addi r5, r26, 0x0
/* 801D33A8 001D0488  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D33AC 001D048C  7D 88 03 A6 */	mtlr r12
/* 801D33B0 001D0490  38 DB 00 00 */	addi r6, r27, 0x0
/* 801D33B4 001D0494  38 60 00 10 */	li r3, 0x10
/* 801D33B8 001D0498  4E 80 00 21 */	blrl
/* 801D33BC 001D049C  80 79 01 9C */	lwz r3, 0x19c(r25)
/* 801D33C0 001D04A0  38 00 00 00 */	li r0, 0x0
/* 801D33C4 001D04A4  54 63 04 E2 */	rlwinm r3, r3, 0, 19, 17
/* 801D33C8 001D04A8  90 79 01 9C */	stw r3, 0x19c(r25)
/* 801D33CC 001D04AC  90 17 00 D8 */	stw r0, 0xd8(r23)
/* 801D33D0 001D04B0  80 19 01 94 */	lwz r0, 0x194(r25)
/* 801D33D4 001D04B4  7C 00 B0 38 */	and r0, r0, r22
/* 801D33D8 001D04B8  90 19 01 94 */	stw r0, 0x194(r25)
/* 801D33DC 001D04BC  48 00 33 E9 */	bl OSEnableScheduler
/* 801D33E0 001D04C0  48 00 38 B1 */	bl __OSReschedule
/* 801D33E4 001D04C4  48 00 00 18 */	b .L_801D33FC
.L_801D33E8:
/* 801D33E8 001D04C8  80 79 01 9C */	lwz r3, 0x19c(r25)
/* 801D33EC 001D04CC  38 00 00 00 */	li r0, 0x0
/* 801D33F0 001D04D0  54 63 04 E2 */	rlwinm r3, r3, 0, 19, 17
/* 801D33F4 001D04D4  90 79 01 9C */	stw r3, 0x19c(r25)
/* 801D33F8 001D04D8  90 17 00 D8 */	stw r0, 0xd8(r23)
.L_801D33FC:
/* 801D33FC 001D04DC  7F 23 CB 78 */	mr r3, r25
/* 801D3400 001D04E0  4B FF F6 8D */	bl OSLoadContext
.L_801D3404:
/* 801D3404 001D04E4  57 17 06 3E */	clrlwi r23, r24, 24
/* 801D3408 001D04E8  57 00 15 BA */	clrlslwi r0, r24, 24, 2
/* 801D340C 001D04EC  7E DE 02 14 */	add r22, r30, r0
/* 801D3410 001D04F0  80 16 00 00 */	lwz r0, 0x0(r22)
/* 801D3414 001D04F4  28 00 00 00 */	cmplwi r0, 0x0
/* 801D3418 001D04F8  41 82 00 38 */	beq .L_801D3450
/* 801D341C 001D04FC  48 00 33 69 */	bl OSDisableScheduler
/* 801D3420 001D0500  81 96 00 00 */	lwz r12, 0x0(r22)
/* 801D3424 001D0504  38 77 00 00 */	addi r3, r23, 0x0
/* 801D3428 001D0508  38 99 00 00 */	addi r4, r25, 0x0
/* 801D342C 001D050C  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3430 001D0510  7D 88 03 A6 */	mtlr r12
/* 801D3434 001D0514  38 BA 00 00 */	addi r5, r26, 0x0
/* 801D3438 001D0518  38 DB 00 00 */	addi r6, r27, 0x0
/* 801D343C 001D051C  4E 80 00 21 */	blrl
/* 801D3440 001D0520  48 00 33 85 */	bl OSEnableScheduler
/* 801D3444 001D0524  48 00 38 4D */	bl __OSReschedule
/* 801D3448 001D0528  7F 23 CB 78 */	mr r3, r25
/* 801D344C 001D052C  4B FF F6 41 */	bl OSLoadContext
.L_801D3450:
/* 801D3450 001D0530  57 00 06 3E */	clrlwi r0, r24, 24
/* 801D3454 001D0534  28 00 00 08 */	cmplwi r0, 0x8
/* 801D3458 001D0538  40 82 00 0C */	bne .L_801D3464
/* 801D345C 001D053C  7F 23 CB 78 */	mr r3, r25
/* 801D3460 001D0540  4B FF F6 2D */	bl OSLoadContext
.L_801D3464:
/* 801D3464 001D0544  38 7F 00 7C */	addi r3, r31, 0x7c
/* 801D3468 001D0548  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D346C 001D054C  57 04 06 3E */	clrlwi r4, r24, 24
/* 801D3470 001D0550  4B FF FA 95 */	bl OSReport
.L_801D3474:
/* 801D3474 001D0554  38 6D 86 54 */	addi r3, r13, "@76"@sda21
/* 801D3478 001D0558  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D347C 001D055C  4B FF FA 89 */	bl OSReport
/* 801D3480 001D0560  7F 23 CB 78 */	mr r3, r25
/* 801D3484 001D0564  4B FF F7 0D */	bl OSDumpContext
/* 801D3488 001D0568  38 9A 00 00 */	addi r4, r26, 0x0
/* 801D348C 001D056C  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3490 001D0570  38 BB 00 00 */	addi r5, r27, 0x0
/* 801D3494 001D0574  38 7F 00 94 */	addi r3, r31, 0x94
/* 801D3498 001D0578  4B FF FA 6D */	bl OSReport
/* 801D349C 001D057C  38 DC 00 00 */	addi r6, r28, 0x0
/* 801D34A0 001D0580  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D34A4 001D0584  38 BD 00 00 */	addi r5, r29, 0x0
/* 801D34A8 001D0588  38 7F 00 C8 */	addi r3, r31, 0xc8
/* 801D34AC 001D058C  4B FF FA 59 */	bl OSReport
/* 801D34B0 001D0590  57 00 06 3E */	clrlwi r0, r24, 24
/* 801D34B4 001D0594  28 00 00 0F */	cmplwi r0, 0xf
/* 801D34B8 001D0598  41 81 00 C4 */	bgt .L_801D357C
/* 801D34BC 001D059C  3C 60 80 2B */	lis r3, "@87"@ha
/* 801D34C0 001D05A0  38 63 59 3C */	addi r3, r3, "@87"@l
/* 801D34C4 001D05A4  54 00 10 3A */	slwi r0, r0, 2
/* 801D34C8 001D05A8  7C 03 00 2E */	lwzx r0, r3, r0
/* 801D34CC 001D05AC  7C 09 03 A6 */	mtctr r0
/* 801D34D0 001D05B0  4E 80 04 20 */	bctr
.L_801D34D4:
/* 801D34D4 001D05B4  80 99 01 98 */	lwz r4, 0x198(r25)
/* 801D34D8 001D05B8  38 BB 00 00 */	addi r5, r27, 0x0
/* 801D34DC 001D05BC  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 801D34E0 001D05C0  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D34E4 001D05C4  4B FF FA 21 */	bl OSReport
/* 801D34E8 001D05C8  48 00 00 94 */	b .L_801D357C
.L_801D34EC:
/* 801D34EC 001D05CC  80 99 01 98 */	lwz r4, 0x198(r25)
/* 801D34F0 001D05D0  38 7F 01 38 */	addi r3, r31, 0x138
/* 801D34F4 001D05D4  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D34F8 001D05D8  4B FF FA 0D */	bl OSReport
/* 801D34FC 001D05DC  48 00 00 80 */	b .L_801D357C
.L_801D3500:
/* 801D3500 001D05E0  80 99 01 98 */	lwz r4, 0x198(r25)
/* 801D3504 001D05E4  38 BB 00 00 */	addi r5, r27, 0x0
/* 801D3508 001D05E8  38 7F 01 84 */	addi r3, r31, 0x184
/* 801D350C 001D05EC  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3510 001D05F0  4B FF F9 F5 */	bl OSReport
/* 801D3514 001D05F4  48 00 00 68 */	b .L_801D357C
.L_801D3518:
/* 801D3518 001D05F8  80 99 01 98 */	lwz r4, 0x198(r25)
/* 801D351C 001D05FC  38 BB 00 00 */	addi r5, r27, 0x0
/* 801D3520 001D0600  38 7F 01 E8 */	addi r3, r31, 0x1e8
/* 801D3524 001D0604  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3528 001D0608  4B FF F9 DD */	bl OSReport
/* 801D352C 001D060C  48 00 00 50 */	b .L_801D357C
.L_801D3530:
/* 801D3530 001D0610  38 6D 86 54 */	addi r3, r13, "@76"@sda21
/* 801D3534 001D0614  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3538 001D0618  4B FF F9 CD */	bl OSReport
/* 801D353C 001D061C  3F 20 CC 00 */	lis r25, 0xcc00
/* 801D3540 001D0620  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3544 001D0624  3B 19 50 00 */	addi r24, r25, 0x5000
/* 801D3548 001D0628  A0 99 50 30 */	lhz r4, 0x5030(r25)
/* 801D354C 001D062C  38 7F 02 48 */	addi r3, r31, 0x248
/* 801D3550 001D0630  A0 B9 50 32 */	lhz r5, 0x5032(r25)
/* 801D3554 001D0634  4B FF F9 B1 */	bl OSReport
/* 801D3558 001D0638  A0 98 00 20 */	lhz r4, 0x20(r24)
/* 801D355C 001D063C  38 7F 02 68 */	addi r3, r31, 0x268
/* 801D3560 001D0640  A0 B8 00 22 */	lhz r5, 0x22(r24)
/* 801D3564 001D0644  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3568 001D0648  4B FF F9 9D */	bl OSReport
/* 801D356C 001D064C  80 99 60 14 */	lwz r4, 0x6014(r25)
/* 801D3570 001D0650  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3574 001D0654  38 7F 02 88 */	addi r3, r31, 0x288
/* 801D3578 001D0658  4B FF F9 8D */	bl OSReport
.L_801D357C:
/* 801D357C 001D065C  A8 8D 9C 78 */	lha r4, __OSLastInterrupt@sda21(r13)
/* 801D3580 001D0660  38 7F 02 A4 */	addi r3, r31, 0x2a4
/* 801D3584 001D0664  4C C6 31 82 */	crclr 4*cr1+eq
/* 801D3588 001D0668  80 AD 9C 74 */	lwz r5, __OSLastInterruptSrr0@sda21(r13)
/* 801D358C 001D066C  80 ED 9C 80 */	lwz r7, __OSLastInterruptTime@sda21(r13)
/* 801D3590 001D0670  81 0D 9C 84 */	lwz r8, __OSLastInterruptTime+0x4@sda21(r13)
/* 801D3594 001D0674  4B FF F9 71 */	bl OSReport
/* 801D3598 001D0678  4B FE 77 19 */	bl PPCHalt
/* 801D359C 001D067C  BA C1 00 18 */	lmw r22, 0x18(r1)
/* 801D35A0 001D0680  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801D35A4 001D0684  38 21 00 40 */	addi r1, r1, 0x40
/* 801D35A8 001D0688  7C 08 03 A6 */	mtlr r0
/* 801D35AC 001D068C  4E 80 00 20 */	blr
.endfn __OSUnhandledException

# 0x802B5660 - 0x802B5980
.data
.balign 8
.sym ...data.0, local

.obj "@13", local
	.4byte 0x20696E20
	.4byte 0x22257322
	.4byte 0x206F6E20
	.4byte 0x6C696E65
	.4byte 0x2025642E
	.2byte 0x0A00
.endobj "@13"
	.2byte 0x0000

.obj "@14", local
	.4byte 0x0A416464
	.4byte 0x72657373
	.4byte 0x3A202020
	.4byte 0x20202042
	.4byte 0x61636B20
	.4byte 0x43686169
	.4byte 0x6E202020
	.4byte 0x204C5220
	.4byte 0x53617665
	.2byte 0x0A00
.endobj "@14"
	.2byte 0x0000

.obj "@15", local
	.4byte 0x30782530
	.4byte 0x38783A20
	.4byte 0x20203078
	.4byte 0x25303878
	.4byte 0x20202020
	.4byte 0x30782530
	.4byte 0x38780A00
.endobj "@15"

.obj "@74", local
	.4byte 0x4E6F6E2D
	.4byte 0x7265636F
	.4byte 0x76657261
	.4byte 0x626C6520
	.4byte 0x45786365
	.4byte 0x7074696F
	.4byte 0x6E202564
	.byte 0x00
.endobj "@74"
	.byte 0x00, 0x00, 0x00

.obj "@75", local
	.4byte 0x556E6861
	.4byte 0x6E646C65
	.4byte 0x64204578
	.4byte 0x63657074
	.4byte 0x696F6E20
	.byte 0x25, 0x64, 0x00
.endobj "@75"
	.byte 0x00

.obj "@77", local
	.4byte 0x0A445349
	.4byte 0x5352203D
	.4byte 0x20307825
	.4byte 0x30387820
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20204441
	.4byte 0x5220203D
	.4byte 0x20307825
	.4byte 0x3038780A
	.byte 0x00
.endobj "@77"
	.byte 0x00, 0x00, 0x00

.obj "@78", local
	.4byte 0x5442203D
	.4byte 0x20307825
	.4byte 0x3031366C
	.4byte 0x6C780A00
.endobj "@78"

.obj "@79", local
	.4byte 0x0A496E73
	.4byte 0x74727563
	.4byte 0x74696F6E
	.4byte 0x20617420
	.4byte 0x30782578
	.4byte 0x20287265
	.4byte 0x61642066
	.4byte 0x726F6D20
	.4byte 0x53525230
	.4byte 0x29206174
	.4byte 0x74656D70
	.4byte 0x74656420
	.4byte 0x746F2061
	.4byte 0x63636573
	.4byte 0x7320696E
	.4byte 0x76616C69
	.4byte 0x64206164
	.4byte 0x64726573
	.4byte 0x73203078
	.4byte 0x25782028
	.4byte 0x72656164
	.4byte 0x2066726F
	.4byte 0x6D204441
	.4byte 0x52290A00
.endobj "@79"

.obj "@80", local
	.4byte 0x0A417474
	.4byte 0x656D7074
	.4byte 0x65642074
	.4byte 0x6F206665
	.4byte 0x74636820
	.4byte 0x696E7374
	.4byte 0x72756374
	.4byte 0x696F6E20
	.4byte 0x66726F6D
	.4byte 0x20696E76
	.4byte 0x616C6964
	.4byte 0x20616464
	.4byte 0x72657373
	.4byte 0x20307825
	.4byte 0x78202872
	.4byte 0x65616420
	.4byte 0x66726F6D
	.4byte 0x20535252
	.4byte 0x30290A00
.endobj "@80"

.obj "@81", local
	.4byte 0x0A496E73
	.4byte 0x74727563
	.4byte 0x74696F6E
	.4byte 0x20617420
	.4byte 0x30782578
	.4byte 0x20287265
	.4byte 0x61642066
	.4byte 0x726F6D20
	.4byte 0x53525230
	.4byte 0x29206174
	.4byte 0x74656D70
	.4byte 0x74656420
	.4byte 0x746F2061
	.4byte 0x63636573
	.4byte 0x7320756E
	.4byte 0x616C6967
	.4byte 0x6E656420
	.4byte 0x61646472
	.4byte 0x65737320
	.4byte 0x30782578
	.4byte 0x20287265
	.4byte 0x61642066
	.4byte 0x726F6D20
	.4byte 0x44415229
	.2byte 0x0A00
.endobj "@81"
	.2byte 0x0000

.obj "@82", local
	.4byte 0x0A50726F
	.4byte 0x6772616D
	.4byte 0x20657863
	.4byte 0x65707469
	.4byte 0x6F6E203A
	.4byte 0x20506F73
	.4byte 0x7369626C
	.4byte 0x6520696C
	.4byte 0x6C656761
	.4byte 0x6C20696E
	.4byte 0x73747275
	.4byte 0x6374696F
	.4byte 0x6E2F6F70
	.4byte 0x65726174
	.4byte 0x696F6E20
	.4byte 0x6174206F
	.4byte 0x72206172
	.4byte 0x6F756E64
	.4byte 0x20307825
	.4byte 0x78202872
	.4byte 0x65616420
	.4byte 0x66726F6D
	.4byte 0x20535252
	.4byte 0x30290A00
.endobj "@82"

.obj "@83", local
	.4byte 0x41492044
	.4byte 0x4D412041
	.4byte 0x64647265
	.4byte 0x7373203D
	.4byte 0x20202030
	.4byte 0x78253034
	.4byte 0x78253034
	.byte 0x78, 0x0A, 0x00
.endobj "@83"
	.byte 0x00

.obj "@84", local
	.4byte 0x4152414D
	.4byte 0x20444D41
	.4byte 0x20416464
	.4byte 0x72657373
	.4byte 0x203D2030
	.4byte 0x78253034
	.4byte 0x78253034
	.byte 0x78, 0x0A, 0x00
.endobj "@84"
	.byte 0x00

.obj "@85", local
	.4byte 0x44492044
	.4byte 0x4D412041
	.4byte 0x64647265
	.4byte 0x7373203D
	.4byte 0x20202030
	.4byte 0x78253038
	.byte 0x78, 0x0A, 0x00
.endobj "@85"
	.byte 0x00

.obj "@86", local
	.4byte 0x0A4C6173
	.4byte 0x7420696E
	.4byte 0x74657272
	.4byte 0x75707420
	.4byte 0x28256429
	.4byte 0x3A205352
	.4byte 0x5230203D
	.4byte 0x20307825
	.4byte 0x30387820
	.4byte 0x20544220
	.4byte 0x3D203078
	.4byte 0x25303136
	.4byte 0x6C6C780A
	.byte 0x00
.endobj "@86"
	.byte 0x00, 0x00, 0x00

.obj "@87", local
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D34D4
	.rel __OSUnhandledException, .L_801D34EC
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D3500
	.rel __OSUnhandledException, .L_801D3518
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D357C
	.rel __OSUnhandledException, .L_801D3530
.endobj "@87"
	.4byte 0x00000000

# 0x8037E010 - 0x8037E060
.section .bss, "wa", @nobits
.balign 8
.sym ...bss.0, local

.obj __OSErrorTable, global
	.skip 0x44
.endobj __OSErrorTable
	.skip 0xC

# 0x803CAF50 - 0x803CAF58
.section .sdata, "wa"
.balign 8

.obj __OSFpscrEnableBits, global
	.4byte 0x000000F8
.endobj __OSFpscrEnableBits

.obj "@76", local
	.2byte 0x0A00
.endobj "@76"
	.2byte 0x0000
