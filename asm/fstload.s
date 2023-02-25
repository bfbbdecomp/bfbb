.include "macros.inc"
.file "fstload.c"

# 0x801C6FF8 - 0x801C7238
.text
.balign 4

.fn cb, local
/* 801C6FF8 001C40D8  7C 08 02 A6 */	mflr r0
/* 801C6FFC 001C40DC  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C7000 001C40E0  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C7004 001C40E4  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801C7008 001C40E8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801C700C 001C40EC  3B E4 00 00 */	addi r31, r4, 0x0
/* 801C7010 001C40F0  40 81 00 7C */	ble .L_801C708C
/* 801C7014 001C40F4  80 0D 9B 78 */	lwz r0, status@sda21(r13)
/* 801C7018 001C40F8  2C 00 00 01 */	cmpwi r0, 0x1
/* 801C701C 001C40FC  41 82 00 3C */	beq .L_801C7058
/* 801C7020 001C4100  40 80 00 9C */	bge .L_801C70BC
/* 801C7024 001C4104  2C 00 00 00 */	cmpwi r0, 0x0
/* 801C7028 001C4108  40 80 00 08 */	bge .L_801C7030
/* 801C702C 001C410C  48 00 00 90 */	b .L_801C70BC
.L_801C7030:
/* 801C7030 001C4110  38 00 00 01 */	li r0, 0x1
/* 801C7034 001C4114  80 8D 9B 7C */	lwz r4, bb2@sda21(r13)
/* 801C7038 001C4118  3C 60 80 1C */	lis r3, cb@ha
/* 801C703C 001C411C  90 0D 9B 78 */	stw r0, status@sda21(r13)
/* 801C7040 001C4120  38 E3 6F F8 */	addi r7, r3, cb@l
/* 801C7044 001C4124  38 7F 00 00 */	addi r3, r31, 0x0
/* 801C7048 001C4128  38 A0 00 20 */	li r5, 0x20
/* 801C704C 001C412C  38 C0 04 20 */	li r6, 0x420
/* 801C7050 001C4130  4B FF EE 6D */	bl DVDReadAbsAsyncForBS
/* 801C7054 001C4134  48 00 00 68 */	b .L_801C70BC
.L_801C7058:
/* 801C7058 001C4138  38 00 00 02 */	li r0, 0x2
/* 801C705C 001C413C  80 CD 9B 7C */	lwz r6, bb2@sda21(r13)
/* 801C7060 001C4140  90 0D 9B 78 */	stw r0, status@sda21(r13)
/* 801C7064 001C4144  3C 60 80 1C */	lis r3, cb@ha
/* 801C7068 001C4148  38 E3 6F F8 */	addi r7, r3, cb@l
/* 801C706C 001C414C  80 A6 00 08 */	lwz r5, 0x8(r6)
/* 801C7070 001C4150  7F E3 FB 78 */	mr r3, r31
/* 801C7074 001C4154  80 86 00 10 */	lwz r4, 0x10(r6)
/* 801C7078 001C4158  38 05 00 1F */	addi r0, r5, 0x1f
/* 801C707C 001C415C  80 C6 00 04 */	lwz r6, 0x4(r6)
/* 801C7080 001C4160  54 05 00 34 */	clrrwi r5, r0, 5
/* 801C7084 001C4164  4B FF EE 39 */	bl DVDReadAbsAsyncForBS
/* 801C7088 001C4168  48 00 00 34 */	b .L_801C70BC
.L_801C708C:
/* 801C708C 001C416C  2C 03 FF FF */	cmpwi r3, -0x1
/* 801C7090 001C4170  41 82 00 2C */	beq .L_801C70BC
/* 801C7094 001C4174  2C 03 FF FC */	cmpwi r3, -0x4
/* 801C7098 001C4178  40 82 00 24 */	bne .L_801C70BC
/* 801C709C 001C417C  38 00 00 00 */	li r0, 0x0
/* 801C70A0 001C4180  90 0D 9B 78 */	stw r0, status@sda21(r13)
/* 801C70A4 001C4184  4B FF F1 49 */	bl DVDReset
/* 801C70A8 001C4188  3C 60 80 1C */	lis r3, cb@ha
/* 801C70AC 001C418C  80 8D 9B 80 */	lwz r4, idTmp@sda21(r13)
/* 801C70B0 001C4190  38 A3 6F F8 */	addi r5, r3, cb@l
/* 801C70B4 001C4194  38 7F 00 00 */	addi r3, r31, 0x0
/* 801C70B8 001C4198  4B FF EE D5 */	bl DVDReadDiskID
.L_801C70BC:
/* 801C70BC 001C419C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801C70C0 001C41A0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801C70C4 001C41A4  38 21 00 18 */	addi r1, r1, 0x18
/* 801C70C8 001C41A8  7C 08 03 A6 */	mtlr r0
/* 801C70CC 001C41AC  4E 80 00 20 */	blr
.endfn cb

.fn __fstLoad, global
/* 801C70D0 001C41B0  7C 08 02 A6 */	mflr r0
/* 801C70D4 001C41B4  3C 60 80 2B */	lis r3, ...data.0@ha
/* 801C70D8 001C41B8  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C70DC 001C41BC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C70E0 001C41C0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801C70E4 001C41C4  3B E3 45 F0 */	addi r31, r3, ...data.0@l
/* 801C70E8 001C41C8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801C70EC 001C41CC  93 A1 00 54 */	stw r29, 0x54(r1)
/* 801C70F0 001C41D0  48 00 AF 75 */	bl OSGetArenaHi
/* 801C70F4 001C41D4  3C 60 80 38 */	lis r3, bb2Buf@ha
/* 801C70F8 001C41D8  38 63 D8 58 */	addi r3, r3, bb2Buf@l
/* 801C70FC 001C41DC  38 81 00 2B */	addi r4, r1, 0x2b
/* 801C7100 001C41E0  38 03 00 1F */	addi r0, r3, 0x1f
/* 801C7104 001C41E4  54 83 00 34 */	clrrwi r3, r4, 5
/* 801C7108 001C41E8  54 00 00 34 */	clrrwi r0, r0, 5
/* 801C710C 001C41EC  90 6D 9B 80 */	stw r3, idTmp@sda21(r13)
/* 801C7110 001C41F0  90 0D 9B 7C */	stw r0, bb2@sda21(r13)
/* 801C7114 001C41F4  4B FF F0 D9 */	bl DVDReset
/* 801C7118 001C41F8  3C 60 80 38 */	lis r3, block$18@ha
/* 801C711C 001C41FC  80 8D 9B 80 */	lwz r4, idTmp@sda21(r13)
/* 801C7120 001C4200  3C A0 80 1C */	lis r5, cb@ha
/* 801C7124 001C4204  38 63 D8 98 */	addi r3, r3, block$18@l
/* 801C7128 001C4208  38 A5 6F F8 */	addi r5, r5, cb@l
/* 801C712C 001C420C  4B FF EE 61 */	bl DVDReadDiskID
.L_801C7130:
/* 801C7130 001C4210  4B FF F1 4D */	bl DVDGetDriveStatus
/* 801C7134 001C4214  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C7138 001C4218  40 82 FF F8 */	bne .L_801C7130
/* 801C713C 001C421C  80 6D 9B 7C */	lwz r3, bb2@sda21(r13)
/* 801C7140 001C4220  3F A0 80 00 */	lis r29, 0x8000
/* 801C7144 001C4224  3F C0 80 00 */	lis r30, 0x8000
/* 801C7148 001C4228  80 03 00 10 */	lwz r0, 0x10(r3)
/* 801C714C 001C422C  38 7D 00 00 */	addi r3, r29, 0x0
/* 801C7150 001C4230  38 A0 00 20 */	li r5, 0x20
/* 801C7154 001C4234  90 1E 00 38 */	stw r0, 0x38(r30)
/* 801C7158 001C4238  80 8D 9B 7C */	lwz r4, bb2@sda21(r13)
/* 801C715C 001C423C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 801C7160 001C4240  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 801C7164 001C4244  80 8D 9B 80 */	lwz r4, idTmp@sda21(r13)
/* 801C7168 001C4248  4B E3 C3 D9 */	bl memcpy
/* 801C716C 001C424C  38 6D 85 B8 */	addi r3, r13, "@37"@sda21
/* 801C7170 001C4250  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C7174 001C4254  48 00 BD 91 */	bl OSReport
/* 801C7178 001C4258  88 9D 00 00 */	lbz r4, 0x0(r29)
/* 801C717C 001C425C  7F E3 FB 78 */	mr r3, r31
/* 801C7180 001C4260  88 BD 00 01 */	lbz r5, 0x1(r29)
/* 801C7184 001C4264  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C7188 001C4268  88 DD 00 02 */	lbz r6, 0x2(r29)
/* 801C718C 001C426C  88 FD 00 03 */	lbz r7, 0x3(r29)
/* 801C7190 001C4270  7C 84 07 74 */	extsb r4, r4
/* 801C7194 001C4274  7C A5 07 74 */	extsb r5, r5
/* 801C7198 001C4278  7C C6 07 74 */	extsb r6, r6
/* 801C719C 001C427C  7C E7 07 74 */	extsb r7, r7
/* 801C71A0 001C4280  48 00 BD 65 */	bl OSReport
/* 801C71A4 001C4284  88 9D 00 04 */	lbz r4, 0x4(r29)
/* 801C71A8 001C4288  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801C71AC 001C428C  88 BD 00 05 */	lbz r5, 0x5(r29)
/* 801C71B0 001C4290  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C71B4 001C4294  7C 84 07 74 */	extsb r4, r4
/* 801C71B8 001C4298  7C A5 07 74 */	extsb r5, r5
/* 801C71BC 001C429C  48 00 BD 49 */	bl OSReport
/* 801C71C0 001C42A0  88 9D 00 06 */	lbz r4, 0x6(r29)
/* 801C71C4 001C42A4  38 7F 00 34 */	addi r3, r31, 0x34
/* 801C71C8 001C42A8  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C71CC 001C42AC  48 00 BD 39 */	bl OSReport
/* 801C71D0 001C42B0  88 9D 00 07 */	lbz r4, 0x7(r29)
/* 801C71D4 001C42B4  38 7F 00 48 */	addi r3, r31, 0x48
/* 801C71D8 001C42B8  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C71DC 001C42BC  48 00 BD 29 */	bl OSReport
/* 801C71E0 001C42C0  88 1E 00 08 */	lbz r0, 0x8(r30)
/* 801C71E4 001C42C4  28 00 00 00 */	cmplwi r0, 0x0
/* 801C71E8 001C42C8  40 82 00 0C */	bne .L_801C71F4
/* 801C71EC 001C42CC  38 8D 85 BC */	addi r4, r13, "@42"@sda21
/* 801C71F0 001C42D0  48 00 00 08 */	b .L_801C71F8
.L_801C71F4:
/* 801C71F4 001C42D4  38 8D 85 C0 */	addi r4, r13, "@43"@sda21
.L_801C71F8:
/* 801C71F8 001C42D8  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C71FC 001C42DC  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C7200 001C42E0  48 00 BD 05 */	bl OSReport
/* 801C7204 001C42E4  38 6D 85 B8 */	addi r3, r13, "@37"@sda21
/* 801C7208 001C42E8  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C720C 001C42EC  48 00 BC F9 */	bl OSReport
/* 801C7210 001C42F0  80 6D 9B 7C */	lwz r3, bb2@sda21(r13)
/* 801C7214 001C42F4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801C7218 001C42F8  48 00 AE 5D */	bl OSSetArenaHi
/* 801C721C 001C42FC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C7220 001C4300  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801C7224 001C4304  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801C7228 001C4308  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 801C722C 001C430C  38 21 00 60 */	addi r1, r1, 0x60
/* 801C7230 001C4310  7C 08 03 A6 */	mtlr r0
/* 801C7234 001C4314  4E 80 00 20 */	blr
.endfn __fstLoad

# 0x802B45F0 - 0x802B4660
.data
.balign 8
.sym ...data.0, local

.obj "@38", local
	.4byte 0x20204761
	.4byte 0x6D65204E
	.4byte 0x616D6520
	.4byte 0x2E2E2E20
	.4byte 0x25632563
	.4byte 0x25632563
	.2byte 0x0A00
.endobj "@38"
	.2byte 0x0000

.obj "@39", local
	.4byte 0x2020436F
	.4byte 0x6D70616E
	.4byte 0x79202E2E
	.4byte 0x2E2E2E20
	.4byte 0x25632563
	.2byte 0x0A00
.endobj "@39"
	.2byte 0x0000

.obj "@40", local
	.4byte 0x20204469
	.4byte 0x736B2023
	.4byte 0x202E2E2E
	.4byte 0x2E2E2E20
	.4byte 0x25640A00
.endobj "@40"

.obj "@41", local
	.4byte 0x20204761
	.4byte 0x6D652076
	.4byte 0x6572202E
	.4byte 0x2E2E2E20
	.4byte 0x25640A00
.endobj "@41"

.obj "@44", local
	.4byte 0x20205374
	.4byte 0x7265616D
	.4byte 0x696E6720
	.4byte 0x2E2E2E20
	.4byte 0x25730A00
.endobj "@44"

# 0x8037D858 - 0x8037D8C8
.section .bss, "wa", @nobits
.balign 8

.obj bb2Buf, local
	.skip 0x3F
.endobj bb2Buf
	.skip 0x1

.obj block$18, local
	.skip 0x30
.endobj block$18

# 0x803CAEB8 - 0x803CAEC8
.section .sdata, "wa"
.balign 8

.obj "@37", local
	.2byte 0x0A00
.endobj "@37"
	.2byte 0x0000

.obj "@42", local
	.4byte 0x4F464600
.endobj "@42"

.obj "@43", local
	.byte 0x4F, 0x4E, 0x00
.endobj "@43"
	.4byte 0x00000000
	.byte 0x00

# 0x803CC478 - 0x803CC488
.section .sbss, "wa", @nobits
.balign 8

.obj status, local
	.skip 0x4
.endobj status

.obj bb2, local
	.skip 0x4
.endobj bb2

.obj idTmp, local
	.skip 0x4
.endobj idTmp
	.skip 0x4
