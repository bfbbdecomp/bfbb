.include "macros.inc"
.file "__exception.s"

# 0x800035E4 - 0x80005518
.section .init, "ax"
.balign 4
.sym gTRKInterruptVectorTable, global
.asciz "Metrowerks Target Resident Kernel for PowerPC"
.balign 4
.space 0xD0
/* 800036E4 000007C4  48 00 1E 34 */	b __TRK_reset
.space 0xFC
/* 800037E4 000008C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800037E8 000008C8  7C 5A 02 A6 */	mfsrr0 r2
/* 800037EC 000008CC  7C 00 17 AC */	icbi r0, r2
/* 800037F0 000008D0  7C 53 02 A6 */	mfdar r2
/* 800037F4 000008D4  7C 00 13 AC */	dcbi r0, r2
/* 800037F8 000008D8  7C 51 42 A6 */	mfsprg r2, 1
/* 800037FC 000008DC  7C 51 43 A6 */	mtsprg 1, r2
/* 80003800 000008E0  7C 72 43 A6 */	mtsprg 2, r3
/* 80003804 000008E4  7C 93 43 A6 */	mtsprg 3, r4
/* 80003808 000008E8  7C 5A 02 A6 */	mfsrr0 r2
/* 8000380C 000008EC  7C 9B 02 A6 */	mfsrr1 r4
/* 80003810 000008F0  7C 60 00 A6 */	mfmsr r3
/* 80003814 000008F4  60 63 00 30 */	ori r3, r3, 0x30
/* 80003818 000008F8  7C 7B 03 A6 */	mtsrr1 r3
/* 8000381C 000008FC  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80003820 00000900  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80003824 00000904  7C 7A 03 A6 */	mtsrr0 r3
/* 80003828 00000908  38 60 02 00 */	li r3, 0x200
/* 8000382C 0000090C  4C 00 00 64 */	rfi
.space 0xB4
/* 800038E4 000009C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800038E8 000009C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800038EC 000009CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800038F0 000009D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800038F4 000009D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800038F8 000009D8  7C 60 00 A6 */	mfmsr r3
/* 800038FC 000009DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80003900 000009E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80003904 000009E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80003908 000009E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000390C 000009EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80003910 000009F0  38 60 03 00 */	li r3, 0x300
/* 80003914 000009F4  4C 00 00 64 */	rfi
.space 0xCC
/* 800039E4 00000AC4  7C 51 43 A6 */	mtsprg 1, r2
/* 800039E8 00000AC8  7C 72 43 A6 */	mtsprg 2, r3
/* 800039EC 00000ACC  7C 93 43 A6 */	mtsprg 3, r4
/* 800039F0 00000AD0  7C 5A 02 A6 */	mfsrr0 r2
/* 800039F4 00000AD4  7C 9B 02 A6 */	mfsrr1 r4
/* 800039F8 00000AD8  7C 60 00 A6 */	mfmsr r3
/* 800039FC 00000ADC  60 63 00 30 */	ori r3, r3, 0x30
/* 80003A00 00000AE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80003A04 00000AE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80003A08 00000AE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80003A0C 00000AEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80003A10 00000AF0  38 60 04 00 */	li r3, 0x400
/* 80003A14 00000AF4  4C 00 00 64 */	rfi
.space 0xCC
/* 80003AE4 00000BC4  7C 51 43 A6 */	mtsprg 1, r2
/* 80003AE8 00000BC8  7C 72 43 A6 */	mtsprg 2, r3
/* 80003AEC 00000BCC  7C 93 43 A6 */	mtsprg 3, r4
/* 80003AF0 00000BD0  7C 5A 02 A6 */	mfsrr0 r2
/* 80003AF4 00000BD4  7C 9B 02 A6 */	mfsrr1 r4
/* 80003AF8 00000BD8  7C 60 00 A6 */	mfmsr r3
/* 80003AFC 00000BDC  60 63 00 30 */	ori r3, r3, 0x30
/* 80003B00 00000BE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80003B04 00000BE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80003B08 00000BE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80003B0C 00000BEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80003B10 00000BF0  38 60 05 00 */	li r3, 0x500
/* 80003B14 00000BF4  4C 00 00 64 */	rfi
.space 0xCC
/* 80003BE4 00000CC4  7C 51 43 A6 */	mtsprg 1, r2
/* 80003BE8 00000CC8  7C 72 43 A6 */	mtsprg 2, r3
/* 80003BEC 00000CCC  7C 93 43 A6 */	mtsprg 3, r4
/* 80003BF0 00000CD0  7C 5A 02 A6 */	mfsrr0 r2
/* 80003BF4 00000CD4  7C 9B 02 A6 */	mfsrr1 r4
/* 80003BF8 00000CD8  7C 60 00 A6 */	mfmsr r3
/* 80003BFC 00000CDC  60 63 00 30 */	ori r3, r3, 0x30
/* 80003C00 00000CE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80003C04 00000CE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80003C08 00000CE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80003C0C 00000CEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80003C10 00000CF0  38 60 06 00 */	li r3, 0x600
/* 80003C14 00000CF4  4C 00 00 64 */	rfi
.space 0xCC
/* 80003CE4 00000DC4  7C 51 43 A6 */	mtsprg 1, r2
/* 80003CE8 00000DC8  7C 72 43 A6 */	mtsprg 2, r3
/* 80003CEC 00000DCC  7C 93 43 A6 */	mtsprg 3, r4
/* 80003CF0 00000DD0  7C 5A 02 A6 */	mfsrr0 r2
/* 80003CF4 00000DD4  7C 9B 02 A6 */	mfsrr1 r4
/* 80003CF8 00000DD8  7C 60 00 A6 */	mfmsr r3
/* 80003CFC 00000DDC  60 63 00 30 */	ori r3, r3, 0x30
/* 80003D00 00000DE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80003D04 00000DE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80003D08 00000DE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80003D0C 00000DEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80003D10 00000DF0  38 60 07 00 */	li r3, 0x700
/* 80003D14 00000DF4  4C 00 00 64 */	rfi
.space 0xCC
/* 80003DE4 00000EC4  7C 51 43 A6 */	mtsprg 1, r2
/* 80003DE8 00000EC8  7C 72 43 A6 */	mtsprg 2, r3
/* 80003DEC 00000ECC  7C 93 43 A6 */	mtsprg 3, r4
/* 80003DF0 00000ED0  7C 5A 02 A6 */	mfsrr0 r2
/* 80003DF4 00000ED4  7C 9B 02 A6 */	mfsrr1 r4
/* 80003DF8 00000ED8  7C 60 00 A6 */	mfmsr r3
/* 80003DFC 00000EDC  60 63 00 30 */	ori r3, r3, 0x30
/* 80003E00 00000EE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80003E04 00000EE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80003E08 00000EE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80003E0C 00000EEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80003E10 00000EF0  38 60 08 00 */	li r3, 0x800
/* 80003E14 00000EF4  4C 00 00 64 */	rfi
.space 0xCC
/* 80003EE4 00000FC4  7C 51 43 A6 */	mtsprg 1, r2
/* 80003EE8 00000FC8  7C 72 43 A6 */	mtsprg 2, r3
/* 80003EEC 00000FCC  7C 93 43 A6 */	mtsprg 3, r4
/* 80003EF0 00000FD0  7C 5A 02 A6 */	mfsrr0 r2
/* 80003EF4 00000FD4  7C 9B 02 A6 */	mfsrr1 r4
/* 80003EF8 00000FD8  7C 60 00 A6 */	mfmsr r3
/* 80003EFC 00000FDC  60 63 00 30 */	ori r3, r3, 0x30
/* 80003F00 00000FE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80003F04 00000FE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80003F08 00000FE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80003F0C 00000FEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80003F10 00000FF0  38 60 09 00 */	li r3, 0x900
/* 80003F14 00000FF4  4C 00 00 64 */	rfi
.space 0x2CC
/* 800041E4 000012C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800041E8 000012C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800041EC 000012CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800041F0 000012D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800041F4 000012D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800041F8 000012D8  7C 60 00 A6 */	mfmsr r3
/* 800041FC 000012DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80004200 000012E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80004204 000012E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004208 000012E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000420C 000012EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80004210 000012F0  38 60 0C 00 */	li r3, 0xc00
/* 80004214 000012F4  4C 00 00 64 */	rfi
.space 0xCC
/* 800042E4 000013C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800042E8 000013C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800042EC 000013CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800042F0 000013D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800042F4 000013D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800042F8 000013D8  7C 60 00 A6 */	mfmsr r3
/* 800042FC 000013DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80004300 000013E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80004304 000013E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004308 000013E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000430C 000013EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80004310 000013F0  38 60 0D 00 */	li r3, 0xd00
/* 80004314 000013F4  4C 00 00 64 */	rfi
.space 0xCC
/* 800043E4 000014C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800043E8 000014C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800043EC 000014CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800043F0 000014D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800043F4 000014D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800043F8 000014D8  7C 60 00 A6 */	mfmsr r3
/* 800043FC 000014DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80004400 000014E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80004404 000014E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004408 000014E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000440C 000014EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80004410 000014F0  38 60 0E 00 */	li r3, 0xe00
/* 80004414 000014F4  4C 00 00 64 */	rfi
.space 0xCC
/* 800044E4 000015C4  48 00 00 54 */	b .L_80004538
.space 0x1C
/* 80004504 000015E4  7C 51 43 A6 */	mtsprg 1, r2
/* 80004508 000015E8  7C 72 43 A6 */	mtsprg 2, r3
/* 8000450C 000015EC  7C 93 43 A6 */	mtsprg 3, r4
/* 80004510 000015F0  7C 5A 02 A6 */	mfsrr0 r2
/* 80004514 000015F4  7C 9B 02 A6 */	mfsrr1 r4
/* 80004518 000015F8  7C 60 00 A6 */	mfmsr r3
/* 8000451C 000015FC  60 63 00 30 */	ori r3, r3, 0x30
/* 80004520 00001600  7C 7B 03 A6 */	mtsrr1 r3
/* 80004524 00001604  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004528 00001608  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000452C 0000160C  7C 7A 03 A6 */	mtsrr0 r3
/* 80004530 00001610  38 60 0F 20 */	li r3, 0xf20
/* 80004534 00001614  4C 00 00 64 */	rfi
.L_80004538:
/* 80004538 00001618  7C 51 43 A6 */	mtsprg 1, r2
/* 8000453C 0000161C  7C 72 43 A6 */	mtsprg 2, r3
/* 80004540 00001620  7C 93 43 A6 */	mtsprg 3, r4
/* 80004544 00001624  7C 5A 02 A6 */	mfsrr0 r2
/* 80004548 00001628  7C 9B 02 A6 */	mfsrr1 r4
/* 8000454C 0000162C  7C 60 00 A6 */	mfmsr r3
/* 80004550 00001630  60 63 00 30 */	ori r3, r3, 0x30
/* 80004554 00001634  7C 7B 03 A6 */	mtsrr1 r3
/* 80004558 00001638  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 8000455C 0000163C  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80004560 00001640  7C 7A 03 A6 */	mtsrr0 r3
/* 80004564 00001644  38 60 0F 00 */	li r3, 0xf00
/* 80004568 00001648  4C 00 00 64 */	rfi
.space 0x78
/* 800045E4 000016C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800045E8 000016C8  7C 40 00 26 */	mfcr r2
/* 800045EC 000016CC  7C 52 43 A6 */	mtsprg 2, r2
/* 800045F0 000016D0  7C 40 00 A6 */	mfmsr r2
/* 800045F4 000016D4  74 42 00 02 */	andis. r2, r2, 0x2
/* 800045F8 000016D8  41 82 00 1C */	beq .L_80004614
/* 800045FC 000016DC  7C 40 00 A6 */	mfmsr r2
/* 80004600 000016E0  6C 42 00 02 */	xoris r2, r2, 0x2
/* 80004604 000016E4  7C 00 04 AC */	sync
/* 80004608 000016E8  7C 40 01 24 */	mtmsr r2
/* 8000460C 000016EC  7C 00 04 AC */	sync
/* 80004610 000016F0  7C 51 43 A6 */	mtsprg 1, r2
.L_80004614:
/* 80004614 000016F4  7C 52 42 A6 */	mfsprg r2, 2
/* 80004618 000016F8  7C 4F F1 20 */	mtcrf 255, r2
/* 8000461C 000016FC  7C 51 42 A6 */	mfsprg r2, 1
/* 80004620 00001700  7C 51 43 A6 */	mtsprg 1, r2
/* 80004624 00001704  7C 72 43 A6 */	mtsprg 2, r3
/* 80004628 00001708  7C 93 43 A6 */	mtsprg 3, r4
/* 8000462C 0000170C  7C 5A 02 A6 */	mfsrr0 r2
/* 80004630 00001710  7C 9B 02 A6 */	mfsrr1 r4
/* 80004634 00001714  7C 60 00 A6 */	mfmsr r3
/* 80004638 00001718  60 63 00 30 */	ori r3, r3, 0x30
/* 8000463C 0000171C  7C 7B 03 A6 */	mtsrr1 r3
/* 80004640 00001720  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004644 00001724  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80004648 00001728  7C 7A 03 A6 */	mtsrr0 r3
/* 8000464C 0000172C  38 60 10 00 */	li r3, 0x1000
/* 80004650 00001730  4C 00 00 64 */	rfi
.space 0x90
/* 800046E4 000017C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800046E8 000017C8  7C 40 00 26 */	mfcr r2
/* 800046EC 000017CC  7C 52 43 A6 */	mtsprg 2, r2
/* 800046F0 000017D0  7C 40 00 A6 */	mfmsr r2
/* 800046F4 000017D4  74 42 00 02 */	andis. r2, r2, 0x2
/* 800046F8 000017D8  41 82 00 1C */	beq .L_80004714
/* 800046FC 000017DC  7C 40 00 A6 */	mfmsr r2
/* 80004700 000017E0  6C 42 00 02 */	xoris r2, r2, 0x2
/* 80004704 000017E4  7C 00 04 AC */	sync
/* 80004708 000017E8  7C 40 01 24 */	mtmsr r2
/* 8000470C 000017EC  7C 00 04 AC */	sync
/* 80004710 000017F0  7C 51 43 A6 */	mtsprg 1, r2
.L_80004714:
/* 80004714 000017F4  7C 52 42 A6 */	mfsprg r2, 2
/* 80004718 000017F8  7C 4F F1 20 */	mtcrf 255, r2
/* 8000471C 000017FC  7C 51 42 A6 */	mfsprg r2, 1
/* 80004720 00001800  7C 51 43 A6 */	mtsprg 1, r2
/* 80004724 00001804  7C 72 43 A6 */	mtsprg 2, r3
/* 80004728 00001808  7C 93 43 A6 */	mtsprg 3, r4
/* 8000472C 0000180C  7C 5A 02 A6 */	mfsrr0 r2
/* 80004730 00001810  7C 9B 02 A6 */	mfsrr1 r4
/* 80004734 00001814  7C 60 00 A6 */	mfmsr r3
/* 80004738 00001818  60 63 00 30 */	ori r3, r3, 0x30
/* 8000473C 0000181C  7C 7B 03 A6 */	mtsrr1 r3
/* 80004740 00001820  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004744 00001824  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80004748 00001828  7C 7A 03 A6 */	mtsrr0 r3
/* 8000474C 0000182C  38 60 11 00 */	li r3, 0x1100
/* 80004750 00001830  4C 00 00 64 */	rfi
.space 0x90
/* 800047E4 000018C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800047E8 000018C8  7C 40 00 26 */	mfcr r2
/* 800047EC 000018CC  7C 52 43 A6 */	mtsprg 2, r2
/* 800047F0 000018D0  7C 40 00 A6 */	mfmsr r2
/* 800047F4 000018D4  74 42 00 02 */	andis. r2, r2, 0x2
/* 800047F8 000018D8  41 82 00 1C */	beq .L_80004814
/* 800047FC 000018DC  7C 40 00 A6 */	mfmsr r2
/* 80004800 000018E0  6C 42 00 02 */	xoris r2, r2, 0x2
/* 80004804 000018E4  7C 00 04 AC */	sync
/* 80004808 000018E8  7C 40 01 24 */	mtmsr r2
/* 8000480C 000018EC  7C 00 04 AC */	sync
/* 80004810 000018F0  7C 51 43 A6 */	mtsprg 1, r2
.L_80004814:
/* 80004814 000018F4  7C 52 42 A6 */	mfsprg r2, 2
/* 80004818 000018F8  7C 4F F1 20 */	mtcrf 255, r2
/* 8000481C 000018FC  7C 51 42 A6 */	mfsprg r2, 1
/* 80004820 00001900  7C 51 43 A6 */	mtsprg 1, r2
/* 80004824 00001904  7C 72 43 A6 */	mtsprg 2, r3
/* 80004828 00001908  7C 93 43 A6 */	mtsprg 3, r4
/* 8000482C 0000190C  7C 5A 02 A6 */	mfsrr0 r2
/* 80004830 00001910  7C 9B 02 A6 */	mfsrr1 r4
/* 80004834 00001914  7C 60 00 A6 */	mfmsr r3
/* 80004838 00001918  60 63 00 30 */	ori r3, r3, 0x30
/* 8000483C 0000191C  7C 7B 03 A6 */	mtsrr1 r3
/* 80004840 00001920  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004844 00001924  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80004848 00001928  7C 7A 03 A6 */	mtsrr0 r3
/* 8000484C 0000192C  38 60 12 00 */	li r3, 0x1200
/* 80004850 00001930  4C 00 00 64 */	rfi
.space 0x90
/* 800048E4 000019C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800048E8 000019C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800048EC 000019CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800048F0 000019D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800048F4 000019D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800048F8 000019D8  7C 60 00 A6 */	mfmsr r3
/* 800048FC 000019DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80004900 000019E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80004904 000019E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004908 000019E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000490C 000019EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80004910 000019F0  38 60 13 00 */	li r3, 0x1300
/* 80004914 000019F4  4C 00 00 64 */	rfi
.space 0xCC
/* 800049E4 00001AC4  7C 51 43 A6 */	mtsprg 1, r2
/* 800049E8 00001AC8  7C 72 43 A6 */	mtsprg 2, r3
/* 800049EC 00001ACC  7C 93 43 A6 */	mtsprg 3, r4
/* 800049F0 00001AD0  7C 5A 02 A6 */	mfsrr0 r2
/* 800049F4 00001AD4  7C 9B 02 A6 */	mfsrr1 r4
/* 800049F8 00001AD8  7C 60 00 A6 */	mfmsr r3
/* 800049FC 00001ADC  60 63 00 30 */	ori r3, r3, 0x30
/* 80004A00 00001AE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80004A04 00001AE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004A08 00001AE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80004A0C 00001AEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80004A10 00001AF0  38 60 14 00 */	li r3, 0x1400
/* 80004A14 00001AF4  4C 00 00 64 */	rfi
.space 0x1CC
/* 80004BE4 00001CC4  7C 51 43 A6 */	mtsprg 1, r2
/* 80004BE8 00001CC8  7C 72 43 A6 */	mtsprg 2, r3
/* 80004BEC 00001CCC  7C 93 43 A6 */	mtsprg 3, r4
/* 80004BF0 00001CD0  7C 5A 02 A6 */	mfsrr0 r2
/* 80004BF4 00001CD4  7C 9B 02 A6 */	mfsrr1 r4
/* 80004BF8 00001CD8  7C 60 00 A6 */	mfmsr r3
/* 80004BFC 00001CDC  60 63 00 30 */	ori r3, r3, 0x30
/* 80004C00 00001CE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80004C04 00001CE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004C08 00001CE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80004C0C 00001CEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80004C10 00001CF0  38 60 16 00 */	li r3, 0x1600
/* 80004C14 00001CF4  4C 00 00 64 */	rfi
.space 0xCC
/* 80004CE4 00001DC4  7C 51 43 A6 */	mtsprg 1, r2
/* 80004CE8 00001DC8  7C 72 43 A6 */	mtsprg 2, r3
/* 80004CEC 00001DCC  7C 93 43 A6 */	mtsprg 3, r4
/* 80004CF0 00001DD0  7C 5A 02 A6 */	mfsrr0 r2
/* 80004CF4 00001DD4  7C 9B 02 A6 */	mfsrr1 r4
/* 80004CF8 00001DD8  7C 60 00 A6 */	mfmsr r3
/* 80004CFC 00001DDC  60 63 00 30 */	ori r3, r3, 0x30
/* 80004D00 00001DE0  7C 7B 03 A6 */	mtsrr1 r3
/* 80004D04 00001DE4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80004D08 00001DE8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 80004D0C 00001DEC  7C 7A 03 A6 */	mtsrr0 r3
/* 80004D10 00001DF0  38 60 17 00 */	li r3, 0x1700
/* 80004D14 00001DF4  4C 00 00 64 */	rfi
.space 0x4CC
/* 800051E4 000022C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800051E8 000022C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800051EC 000022CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800051F0 000022D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800051F4 000022D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800051F8 000022D8  7C 60 00 A6 */	mfmsr r3
/* 800051FC 000022DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80005200 000022E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80005204 000022E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80005208 000022E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000520C 000022EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80005210 000022F0  38 60 1C 00 */	li r3, 0x1c00
/* 80005214 000022F4  4C 00 00 64 */	rfi
.space 0xCC
/* 800052E4 000023C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800052E8 000023C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800052EC 000023CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800052F0 000023D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800052F4 000023D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800052F8 000023D8  7C 60 00 A6 */	mfmsr r3
/* 800052FC 000023DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80005300 000023E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80005304 000023E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80005308 000023E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000530C 000023EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80005310 000023F0  38 60 1D 00 */	li r3, 0x1d00
/* 80005314 000023F4  4C 00 00 64 */	rfi
.space 0xCC
/* 800053E4 000024C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800053E8 000024C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800053EC 000024CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800053F0 000024D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800053F4 000024D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800053F8 000024D8  7C 60 00 A6 */	mfmsr r3
/* 800053FC 000024DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80005400 000024E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80005404 000024E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80005408 000024E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000540C 000024EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80005410 000024F0  38 60 1E 00 */	li r3, 0x1e00
/* 80005414 000024F4  4C 00 00 64 */	rfi
.space 0xCC
/* 800054E4 000025C4  7C 51 43 A6 */	mtsprg 1, r2
/* 800054E8 000025C8  7C 72 43 A6 */	mtsprg 2, r3
/* 800054EC 000025CC  7C 93 43 A6 */	mtsprg 3, r4
/* 800054F0 000025D0  7C 5A 02 A6 */	mfsrr0 r2
/* 800054F4 000025D4  7C 9B 02 A6 */	mfsrr1 r4
/* 800054F8 000025D8  7C 60 00 A6 */	mfmsr r3
/* 800054FC 000025DC  60 63 00 30 */	ori r3, r3, 0x30
/* 80005500 000025E0  7C 7B 03 A6 */	mtsrr1 r3
/* 80005504 000025E4  3C 60 80 1F */	lis r3, TRKInterruptHandler@h
/* 80005508 000025E8  60 63 3C 2C */	ori r3, r3, TRKInterruptHandler@l
/* 8000550C 000025EC  7C 7A 03 A6 */	mtsrr0 r3
/* 80005510 000025F0  38 60 1F 00 */	li r3, 0x1f00
/* 80005514 000025F4  4C 00 00 64 */	rfi
