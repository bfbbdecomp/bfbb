.include "macros.inc"
.file "zDiscoFloor.cpp"

# 0x8013AF64 - 0x8013D054
.text
.balign 4

# @unnamed@zDiscoFloor_cpp@::create_glow_light()
.fn "create_glow_light__25@unnamed@zDiscoFloor_cpp@Fv", local
/* 8013AF64 00138044  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013AF68 00138048  7C 08 02 A6 */	mflr r0
/* 8013AF6C 0013804C  3C 60 80 32 */	lis r3, "glow_light__25@unnamed@zDiscoFloor_cpp@"@ha
/* 8013AF70 00138050  38 80 00 00 */	li r4, 0x0
/* 8013AF74 00138054  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013AF78 00138058  38 63 7D 30 */	addi r3, r3, "glow_light__25@unnamed@zDiscoFloor_cpp@"@l
/* 8013AF7C 0013805C  38 A0 00 70 */	li r5, 0x70
/* 8013AF80 00138060  4B EC 84 D9 */	bl memset
/* 8013AF84 00138064  3C 60 80 32 */	lis r3, "glow_light__25@unnamed@zDiscoFloor_cpp@"@ha
/* 8013AF88 00138068  3C 80 54 49 */	lis r4, 0x5449
/* 8013AF8C 0013806C  38 63 7D 30 */	addi r3, r3, "glow_light__25@unnamed@zDiscoFloor_cpp@"@l
/* 8013AF90 00138070  38 00 00 01 */	li r0, 0x1
/* 8013AF94 00138074  38 A3 00 10 */	addi r5, r3, 0x10
/* 8013AF98 00138078  38 84 4B 4C */	addi r4, r4, 0x4b4c
/* 8013AF9C 0013807C  90 83 00 00 */	stw r4, 0x0(r3)
/* 8013AFA0 00138080  90 03 00 08 */	stw r0, 0x8(r3)
/* 8013AFA4 00138084  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8013AFA8 00138088  90 03 00 10 */	stw r0, 0x10(r3)
/* 8013AFAC 0013808C  C0 02 A4 28 */	lfs f0, "@710"@sda21(r2)
/* 8013AFB0 00138090  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8013AFB4 00138094  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8013AFB8 00138098  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8013AFBC 0013809C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8013AFC0 001380A0  4B FE 82 69 */	bl xLightKit_Prepare__FPv
/* 8013AFC4 001380A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013AFC8 001380A8  7C 08 03 A6 */	mtlr r0
/* 8013AFCC 001380AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8013AFD0 001380B0  4E 80 00 20 */	blr
.endfn "create_glow_light__25@unnamed@zDiscoFloor_cpp@Fv"

# @unnamed@zDiscoFloor_cpp@::destroy_glow_light()
.fn "destroy_glow_light__25@unnamed@zDiscoFloor_cpp@Fv", local
/* 8013AFD4 001380B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013AFD8 001380B8  7C 08 02 A6 */	mflr r0
/* 8013AFDC 001380BC  3C 60 80 32 */	lis r3, "glow_light__25@unnamed@zDiscoFloor_cpp@"@ha
/* 8013AFE0 001380C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013AFE4 001380C4  38 63 7D 30 */	addi r3, r3, "glow_light__25@unnamed@zDiscoFloor_cpp@"@l
/* 8013AFE8 001380C8  4B FE 85 C5 */	bl xLightKit_Destroy__FP9xLightKit
/* 8013AFEC 001380CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013AFF0 001380D0  7C 08 03 A6 */	mtlr r0
/* 8013AFF4 001380D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8013AFF8 001380D8  4E 80 00 20 */	blr
.endfn "destroy_glow_light__25@unnamed@zDiscoFloor_cpp@Fv"

# @unnamed@zDiscoFloor_cpp@::object_prefix(const char*, unsigned long&, unsigned long&)
.fn "object_prefix__25@unnamed@zDiscoFloor_cpp@FPCcRUlRUl", local
/* 8013AFFC 001380DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B000 001380E0  7C 08 02 A6 */	mflr r0
/* 8013B004 001380E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B008 001380E8  38 00 00 00 */	li r0, 0x0
/* 8013B00C 001380EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013B010 001380F0  7C BF 2B 78 */	mr r31, r5
/* 8013B014 001380F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013B018 001380F8  7C 9E 23 78 */	mr r30, r4
/* 8013B01C 001380FC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013B020 00138100  7C 7D 1B 78 */	mr r29, r3
/* 8013B024 00138104  90 04 00 00 */	stw r0, 0x0(r4)
/* 8013B028 00138108  90 05 00 00 */	stw r0, 0x0(r5)
/* 8013B02C 0013810C  48 0A C7 8D */	bl strlen
/* 8013B030 00138110  28 03 00 00 */	cmplwi r3, 0x0
/* 8013B034 00138114  41 82 00 60 */	beq .L_8013B094
/* 8013B038 00138118  34 A3 FF FF */	addic. r5, r3, -0x1
/* 8013B03C 0013811C  38 05 00 01 */	addi r0, r5, 0x1
/* 8013B040 00138120  7C 9D 2A 14 */	add r4, r29, r5
/* 8013B044 00138124  7C 09 03 A6 */	mtctr r0
/* 8013B048 00138128  41 80 00 4C */	blt .L_8013B094
.L_8013B04C:
/* 8013B04C 0013812C  88 04 00 00 */	lbz r0, 0x0(r4)
/* 8013B050 00138130  28 00 00 30 */	cmplwi r0, 0x30
/* 8013B054 00138134  41 80 00 10 */	blt .L_8013B064
/* 8013B058 00138138  54 00 06 3E */	clrlwi r0, r0, 24
/* 8013B05C 0013813C  28 00 00 39 */	cmplwi r0, 0x39
/* 8013B060 00138140  40 81 00 28 */	ble .L_8013B088
.L_8013B064:
/* 8013B064 00138144  38 05 00 01 */	addi r0, r5, 0x1
/* 8013B068 00138148  90 1E 00 00 */	stw r0, 0x0(r30)
/* 8013B06C 0013814C  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 8013B070 00138150  7C 00 18 40 */	cmplw r0, r3
/* 8013B074 00138154  40 80 00 20 */	bge .L_8013B094
/* 8013B078 00138158  7C 7D 02 14 */	add r3, r29, r0
/* 8013B07C 0013815C  48 0A D7 F1 */	bl atoi
/* 8013B080 00138160  90 7F 00 00 */	stw r3, 0x0(r31)
/* 8013B084 00138164  48 00 00 10 */	b .L_8013B094
.L_8013B088:
/* 8013B088 00138168  38 A5 FF FF */	addi r5, r5, -0x1
/* 8013B08C 0013816C  38 84 FF FF */	addi r4, r4, -0x1
/* 8013B090 00138170  42 00 FF BC */	bdnz .L_8013B04C
.L_8013B094:
/* 8013B094 00138174  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B098 00138178  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013B09C 0013817C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013B0A0 00138180  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013B0A4 00138184  7C 08 03 A6 */	mtlr r0
/* 8013B0A8 00138188  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B0AC 0013818C  4E 80 00 20 */	blr
.endfn "object_prefix__25@unnamed@zDiscoFloor_cpp@FPCcRUlRUl"

# @unnamed@zDiscoFloor_cpp@::find_object(const char*)
.fn "find_object__25@unnamed@zDiscoFloor_cpp@FPCc", local
/* 8013B0B0 00138190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B0B4 00138194  7C 08 02 A6 */	mflr r0
/* 8013B0B8 00138198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B0BC 0013819C  4B F1 11 59 */	bl xStrHash__FPCc
/* 8013B0C0 001381A0  4B F7 99 7D */	bl zSceneFindObject__FUi
/* 8013B0C4 001381A4  28 03 00 00 */	cmplwi r3, 0x0
/* 8013B0C8 001381A8  40 82 00 08 */	bne .L_8013B0D0
/* 8013B0CC 001381AC  38 60 00 00 */	li r3, 0x0
.L_8013B0D0:
/* 8013B0D0 001381B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B0D4 001381B4  7C 08 03 A6 */	mtlr r0
/* 8013B0D8 001381B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B0DC 001381BC  4E 80 00 20 */	blr
.endfn "find_object__25@unnamed@zDiscoFloor_cpp@FPCc"

# @unnamed@zDiscoFloor_cpp@::find_tiles(const char*, z_disco_floor::tile_data*, unsigned long)
.fn "find_tiles__25@unnamed@zDiscoFloor_cpp@FPCcPQ213z_disco_floor9tile_dataUl", local
/* 8013B0E0 001381C0  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8013B0E4 001381C4  7C 08 02 A6 */	mflr r0
/* 8013B0E8 001381C8  90 01 01 34 */	stw r0, 0x134(r1)
/* 8013B0EC 001381CC  BF 21 01 14 */	stmw r25, 0x114(r1)
/* 8013B0F0 001381D0  7C 99 23 78 */	mr r25, r4
/* 8013B0F4 001381D4  7C BA 2B 78 */	mr r26, r5
/* 8013B0F8 001381D8  7C 7B 1B 78 */	mr r27, r3
/* 8013B0FC 001381DC  38 81 00 0C */	addi r4, r1, 0xc
/* 8013B100 001381E0  38 A1 00 08 */	addi r5, r1, 0x8
/* 8013B104 001381E4  4B FF FE F9 */	bl "object_prefix__25@unnamed@zDiscoFloor_cpp@FPCcRUlRUl"
/* 8013B108 001381E8  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8013B10C 001381EC  7F 64 DB 78 */	mr r4, r27
/* 8013B110 001381F0  38 61 00 10 */	addi r3, r1, 0x10
/* 8013B114 001381F4  4B EC 84 2D */	bl memcpy
/* 8013B118 001381F8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8013B11C 001381FC  83 A1 00 08 */	lwz r29, 0x8(r1)
/* 8013B120 00138200  3B E3 D0 C8 */	addi r31, r3, "@stringBase0"@l
.L_8013B124:
/* 8013B124 00138204  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8013B128 00138208  7F 80 E8 50 */	subf r28, r0, r29
/* 8013B12C 0013820C  7C 1C D0 40 */	cmplw r28, r26
/* 8013B130 00138210  41 80 00 0C */	blt .L_8013B13C
/* 8013B134 00138214  7F 83 E3 78 */	mr r3, r28
/* 8013B138 00138218  48 00 00 78 */	b .L_8013B1B0
.L_8013B13C:
/* 8013B13C 0013821C  1C 7C 00 18 */	mulli r3, r28, 0x18
/* 8013B140 00138220  38 00 00 00 */	li r0, 0x0
/* 8013B144 00138224  3B 60 00 01 */	li r27, 0x1
/* 8013B148 00138228  3B C3 00 04 */	addi r30, r3, 0x4
/* 8013B14C 0013822C  7C 19 F1 2E */	stwx r0, r25, r30
.L_8013B150:
/* 8013B150 00138230  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8013B154 00138234  38 61 00 10 */	addi r3, r1, 0x10
/* 8013B158 00138238  7F E4 FB 78 */	mr r4, r31
/* 8013B15C 0013823C  7F 65 DB 78 */	mr r5, r27
/* 8013B160 00138240  7F A6 EB 78 */	mr r6, r29
/* 8013B164 00138244  7C 63 02 14 */	add r3, r3, r0
/* 8013B168 00138248  4C C6 31 82 */	crclr 4*cr1+eq
/* 8013B16C 0013824C  48 0A 8D C9 */	bl sprintf
/* 8013B170 00138250  38 61 00 10 */	addi r3, r1, 0x10
/* 8013B174 00138254  4B FF FF 3D */	bl "find_object__25@unnamed@zDiscoFloor_cpp@FPCc"
/* 8013B178 00138258  7C 79 F1 2E */	stwx r3, r25, r30
/* 8013B17C 0013825C  7C 19 F0 2E */	lwzx r0, r25, r30
/* 8013B180 00138260  28 00 00 00 */	cmplwi r0, 0x0
/* 8013B184 00138264  40 82 00 10 */	bne .L_8013B194
/* 8013B188 00138268  3B 7B 00 01 */	addi r27, r27, 0x1
/* 8013B18C 0013826C  2C 1B 00 05 */	cmpwi r27, 0x5
/* 8013B190 00138270  41 80 FF C0 */	blt .L_8013B150
.L_8013B194:
/* 8013B194 00138274  7C 19 F0 2E */	lwzx r0, r25, r30
/* 8013B198 00138278  28 00 00 00 */	cmplwi r0, 0x0
/* 8013B19C 0013827C  40 82 00 0C */	bne .L_8013B1A8
/* 8013B1A0 00138280  7F 83 E3 78 */	mr r3, r28
/* 8013B1A4 00138284  48 00 00 0C */	b .L_8013B1B0
.L_8013B1A8:
/* 8013B1A8 00138288  3B BD 00 01 */	addi r29, r29, 0x1
/* 8013B1AC 0013828C  4B FF FF 78 */	b .L_8013B124
.L_8013B1B0:
/* 8013B1B0 00138290  BB 21 01 14 */	lmw r25, 0x114(r1)
/* 8013B1B4 00138294  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8013B1B8 00138298  7C 08 03 A6 */	mtlr r0
/* 8013B1BC 0013829C  38 21 01 30 */	addi r1, r1, 0x130
/* 8013B1C0 001382A0  4E 80 00 20 */	blr
.endfn "find_tiles__25@unnamed@zDiscoFloor_cpp@FPCcPQ213z_disco_floor9tile_dataUl"

# @unnamed@zDiscoFloor_cpp@::get_tile(const unsigned char*, unsigned long)
.fn "get_tile__25@unnamed@zDiscoFloor_cpp@FPCUcUl", local
/* 8013B1C4 001382A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B1C8 001382A8  7C 08 02 A6 */	mflr r0
/* 8013B1CC 001382AC  54 85 F0 FE */	extrwi r5, r4, 29, 1
/* 8013B1D0 001382B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B1D4 001382B4  54 80 0F 7C */	clrlslwi r0, r4, 30, 1
/* 8013B1D8 001382B8  7C 63 28 AE */	lbzx r3, r3, r5
/* 8013B1DC 001382BC  7C 60 06 30 */	sraw r0, r3, r0
/* 8013B1E0 001382C0  54 03 07 BE */	clrlwi r3, r0, 30
/* 8013B1E4 001382C4  28 03 00 02 */	cmplwi r3, 0x2
/* 8013B1E8 001382C8  40 82 00 68 */	bne .L_8013B250
/* 8013B1EC 001382CC  88 0D 96 68 */	lbz r0, init$830@sda21(r13)
/* 8013B1F0 001382D0  7C 00 07 75 */	extsb. r0, r0
/* 8013B1F4 001382D4  40 82 00 14 */	bne .L_8013B208
/* 8013B1F8 001382D8  38 60 00 20 */	li r3, 0x20
/* 8013B1FC 001382DC  38 00 00 01 */	li r0, 0x1
/* 8013B200 001382E0  90 6D 96 64 */	stw r3, bit_index$829@sda21(r13)
/* 8013B204 001382E4  98 0D 96 68 */	stb r0, init$830@sda21(r13)
.L_8013B208:
/* 8013B208 001382E8  80 6D 96 64 */	lwz r3, bit_index$829@sda21(r13)
/* 8013B20C 001382EC  38 03 00 01 */	addi r0, r3, 0x1
/* 8013B210 001382F0  90 0D 96 64 */	stw r0, bit_index$829@sda21(r13)
/* 8013B214 001382F4  80 0D 96 64 */	lwz r0, bit_index$829@sda21(r13)
/* 8013B218 001382F8  2C 00 00 20 */	cmpwi r0, 0x20
/* 8013B21C 001382FC  41 80 00 14 */	blt .L_8013B230
/* 8013B220 00138300  38 00 00 00 */	li r0, 0x0
/* 8013B224 00138304  90 0D 96 64 */	stw r0, bit_index$829@sda21(r13)
/* 8013B228 00138308  4B EF 5A 41 */	bl xrand__Fv
/* 8013B22C 0013830C  90 6D 96 6C */	stw r3, r$832@sda21(r13)
.L_8013B230:
/* 8013B230 00138310  80 0D 96 64 */	lwz r0, bit_index$829@sda21(r13)
/* 8013B234 00138314  38 60 00 01 */	li r3, 0x1
/* 8013B238 00138318  80 8D 96 6C */	lwz r4, r$832@sda21(r13)
/* 8013B23C 0013831C  7C 60 00 30 */	slw r0, r3, r0
/* 8013B240 00138320  7C 83 00 38 */	and r3, r4, r0
/* 8013B244 00138324  7C 03 00 D0 */	neg r0, r3
/* 8013B248 00138328  7C 00 1B 78 */	or r0, r0, r3
/* 8013B24C 0013832C  54 03 0F FE */	srwi r3, r0, 31
.L_8013B250:
/* 8013B250 00138330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B254 00138334  7C 08 03 A6 */	mtlr r0
/* 8013B258 00138338  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B25C 0013833C  4E 80 00 20 */	blr
.endfn "get_tile__25@unnamed@zDiscoFloor_cpp@FPCUcUl"

# @unnamed@zDiscoFloor_cpp@::set_tile(unsigned char*, unsigned long, unsigned int)
.fn "set_tile__25@unnamed@zDiscoFloor_cpp@FPUcUlUi", local
/* 8013B260 00138340  54 87 F0 FE */	extrwi r7, r4, 29, 1
/* 8013B264 00138344  54 88 0F 7C */	clrlslwi r8, r4, 30, 1
/* 8013B268 00138348  38 00 00 03 */	li r0, 0x3
/* 8013B26C 0013834C  7C C3 38 AE */	lbzx r6, r3, r7
/* 8013B270 00138350  7C 04 40 30 */	slw r4, r0, r8
/* 8013B274 00138354  7C A0 40 30 */	slw r0, r5, r8
/* 8013B278 00138358  7C C4 20 78 */	andc r4, r6, r4
/* 8013B27C 0013835C  7C 80 03 78 */	or r0, r4, r0
/* 8013B280 00138360  7C 03 39 AE */	stbx r0, r3, r7
/* 8013B284 00138364  4E 80 00 20 */	blr
.endfn "set_tile__25@unnamed@zDiscoFloor_cpp@FPUcUlUi"

# @unnamed@zDiscoFloor_cpp@::translate_mask(unsigned char*, const unsigned char*, unsigned long)
.fn "translate_mask__25@unnamed@zDiscoFloor_cpp@FPUcPCUcUl", local
/* 8013B288 00138368  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B28C 0013836C  7C 08 02 A6 */	mflr r0
/* 8013B290 00138370  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B294 00138374  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013B298 00138378  3B E0 00 00 */	li r31, 0x0
/* 8013B29C 0013837C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013B2A0 00138380  7C BE 2B 78 */	mr r30, r5
/* 8013B2A4 00138384  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013B2A8 00138388  7C 9D 23 78 */	mr r29, r4
/* 8013B2AC 0013838C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8013B2B0 00138390  7C 7C 1B 78 */	mr r28, r3
/* 8013B2B4 00138394  48 00 00 28 */	b .L_8013B2DC
.L_8013B2B8:
/* 8013B2B8 00138398  7F A3 EB 78 */	mr r3, r29
/* 8013B2BC 0013839C  7F E4 FB 78 */	mr r4, r31
/* 8013B2C0 001383A0  4B FF FF 05 */	bl "get_tile__25@unnamed@zDiscoFloor_cpp@FPCUcUl"
/* 8013B2C4 001383A4  7C 60 1B 78 */	mr r0, r3
/* 8013B2C8 001383A8  7F 83 E3 78 */	mr r3, r28
/* 8013B2CC 001383AC  7C 05 03 78 */	mr r5, r0
/* 8013B2D0 001383B0  7F E4 FB 78 */	mr r4, r31
/* 8013B2D4 001383B4  4B FF FF 8D */	bl "set_tile__25@unnamed@zDiscoFloor_cpp@FPUcUlUi"
/* 8013B2D8 001383B8  3B FF 00 01 */	addi r31, r31, 0x1
.L_8013B2DC:
/* 8013B2DC 001383BC  7C 1F F0 40 */	cmplw r31, r30
/* 8013B2E0 001383C0  41 80 FF D8 */	blt .L_8013B2B8
/* 8013B2E4 001383C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B2E8 001383C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013B2EC 001383CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013B2F0 001383D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013B2F4 001383D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8013B2F8 001383D8  7C 08 03 A6 */	mtlr r0
/* 8013B2FC 001383DC  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B300 001383E0  4E 80 00 20 */	blr
.endfn "translate_mask__25@unnamed@zDiscoFloor_cpp@FPUcPCUcUl"

# @unnamed@zDiscoFloor_cpp@::refresh_state(z_disco_floor&)
.fn "refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor", local
/* 8013B304 001383E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B308 001383E8  7C 08 02 A6 */	mflr r0
/* 8013B30C 001383EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B310 001383F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013B314 001383F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013B318 001383F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013B31C 001383FC  7C 7D 1B 78 */	mr r29, r3
/* 8013B320 00138400  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8013B324 00138404  90 0D 96 60 */	stw r0, "current_disco_floor__25@unnamed@zDiscoFloor_cpp@"@sda21(r13)
/* 8013B328 00138408  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8013B32C 0013840C  80 1D 00 48 */	lwz r0, 0x48(r29)
/* 8013B330 00138410  7C 03 00 40 */	cmplw r3, r0
/* 8013B334 00138414  41 82 00 84 */	beq .L_8013B3B8
/* 8013B338 00138418  3B C0 00 00 */	li r30, 0x0
/* 8013B33C 0013841C  48 00 00 6C */	b .L_8013B3A8
.L_8013B340:
/* 8013B340 00138420  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 8013B344 00138424  7F C4 F3 78 */	mr r4, r30
/* 8013B348 00138428  4B FF FE 7D */	bl "get_tile__25@unnamed@zDiscoFloor_cpp@FPCUcUl"
/* 8013B34C 0013842C  7C 7F 1B 78 */	mr r31, r3
/* 8013B350 00138430  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8013B354 00138434  7F C4 F3 78 */	mr r4, r30
/* 8013B358 00138438  4B FF FE 6D */	bl "get_tile__25@unnamed@zDiscoFloor_cpp@FPCUcUl"
/* 8013B35C 0013843C  28 03 00 00 */	cmplwi r3, 0x0
/* 8013B360 00138440  40 82 00 18 */	bne .L_8013B378
/* 8013B364 00138444  7F A3 EB 78 */	mr r3, r29
/* 8013B368 00138448  7F C4 F3 78 */	mr r4, r30
/* 8013B36C 0013844C  38 A0 00 00 */	li r5, 0x0
/* 8013B370 00138450  48 00 00 B5 */	bl "set_object_state__25@unnamed@zDiscoFloor_cpp@FRC13z_disco_floorUli"
/* 8013B374 00138454  48 00 00 30 */	b .L_8013B3A4
.L_8013B378:
/* 8013B378 00138458  28 1F 00 01 */	cmplwi r31, 0x1
/* 8013B37C 0013845C  40 82 00 18 */	bne .L_8013B394
/* 8013B380 00138460  7F A3 EB 78 */	mr r3, r29
/* 8013B384 00138464  7F C4 F3 78 */	mr r4, r30
/* 8013B388 00138468  38 A0 00 02 */	li r5, 0x2
/* 8013B38C 0013846C  48 00 00 99 */	bl "set_object_state__25@unnamed@zDiscoFloor_cpp@FRC13z_disco_floorUli"
/* 8013B390 00138470  48 00 00 14 */	b .L_8013B3A4
.L_8013B394:
/* 8013B394 00138474  7F A3 EB 78 */	mr r3, r29
/* 8013B398 00138478  7F C4 F3 78 */	mr r4, r30
/* 8013B39C 0013847C  38 A0 00 01 */	li r5, 0x1
/* 8013B3A0 00138480  48 00 00 85 */	bl "set_object_state__25@unnamed@zDiscoFloor_cpp@FRC13z_disco_floorUli"
.L_8013B3A4:
/* 8013B3A4 00138484  3B DE 00 01 */	addi r30, r30, 0x1
.L_8013B3A8:
/* 8013B3A8 00138488  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 8013B3AC 0013848C  7C 1E 00 40 */	cmplw r30, r0
/* 8013B3B0 00138490  41 80 FF 90 */	blt .L_8013B340
/* 8013B3B4 00138494  48 00 00 54 */	b .L_8013B408
.L_8013B3B8:
/* 8013B3B8 00138498  3B C0 00 00 */	li r30, 0x0
/* 8013B3BC 0013849C  48 00 00 40 */	b .L_8013B3FC
.L_8013B3C0:
/* 8013B3C0 001384A0  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 8013B3C4 001384A4  7F C4 F3 78 */	mr r4, r30
/* 8013B3C8 001384A8  4B FF FD FD */	bl "get_tile__25@unnamed@zDiscoFloor_cpp@FPCUcUl"
/* 8013B3CC 001384AC  28 03 00 01 */	cmplwi r3, 0x1
/* 8013B3D0 001384B0  40 82 00 18 */	bne .L_8013B3E8
/* 8013B3D4 001384B4  7F A3 EB 78 */	mr r3, r29
/* 8013B3D8 001384B8  7F C4 F3 78 */	mr r4, r30
/* 8013B3DC 001384BC  38 A0 00 02 */	li r5, 0x2
/* 8013B3E0 001384C0  48 00 00 45 */	bl "set_object_state__25@unnamed@zDiscoFloor_cpp@FRC13z_disco_floorUli"
/* 8013B3E4 001384C4  48 00 00 14 */	b .L_8013B3F8
.L_8013B3E8:
/* 8013B3E8 001384C8  7F A3 EB 78 */	mr r3, r29
/* 8013B3EC 001384CC  7F C4 F3 78 */	mr r4, r30
/* 8013B3F0 001384D0  38 A0 00 00 */	li r5, 0x0
/* 8013B3F4 001384D4  48 00 00 31 */	bl "set_object_state__25@unnamed@zDiscoFloor_cpp@FRC13z_disco_floorUli"
.L_8013B3F8:
/* 8013B3F8 001384D8  3B DE 00 01 */	addi r30, r30, 0x1
.L_8013B3FC:
/* 8013B3FC 001384DC  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 8013B400 001384E0  7C 1E 00 40 */	cmplw r30, r0
/* 8013B404 001384E4  41 80 FF BC */	blt .L_8013B3C0
.L_8013B408:
/* 8013B408 001384E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B40C 001384EC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013B410 001384F0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013B414 001384F4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013B418 001384F8  7C 08 03 A6 */	mtlr r0
/* 8013B41C 001384FC  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B420 00138500  4E 80 00 20 */	blr
.endfn "refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"

# @unnamed@zDiscoFloor_cpp@::set_object_state(const z_disco_floor&, unsigned long, int)
.fn "set_object_state__25@unnamed@zDiscoFloor_cpp@FRC13z_disco_floorUli", local
/* 8013B424 00138504  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B428 00138508  7C 08 02 A6 */	mflr r0
/* 8013B42C 0013850C  1D 04 00 18 */	mulli r8, r4, 0x18
/* 8013B430 00138510  38 82 A4 2C */	addi r4, r2, off_flag$790@sda21
/* 8013B434 00138514  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B438 00138518  39 82 A4 30 */	addi r12, r2, transition_flag$791@sda21
/* 8013B43C 0013851C  39 62 A4 34 */	addi r11, r2, on_flag$792@sda21
/* 8013B440 00138520  80 E3 00 30 */	lwz r7, 0x30(r3)
/* 8013B444 00138524  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013B448 00138528  39 42 A4 38 */	addi r10, r2, off_flag$798@sda21
/* 8013B44C 0013852C  39 22 A4 3C */	addi r9, r2, transition_flag$799@sda21
/* 8013B450 00138530  80 C3 00 34 */	lwz r6, 0x34(r3)
/* 8013B454 00138534  80 03 00 38 */	lwz r0, 0x38(r3)
/* 8013B458 00138538  7C 67 42 14 */	add r3, r7, r8
/* 8013B45C 0013853C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8013B460 00138540  7C E6 42 14 */	add r7, r6, r8
/* 8013B464 00138544  7C C0 42 14 */	add r6, r0, r8
/* 8013B468 00138548  39 02 A4 40 */	addi r8, r2, on_flag$800@sda21
/* 8013B46C 0013854C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8013B470 00138550  7C 84 28 AE */	lbzx r4, r4, r5
/* 8013B474 00138554  88 03 00 18 */	lbz r0, 0x18(r3)
/* 8013B478 00138558  83 E7 00 04 */	lwz r31, 0x4(r7)
/* 8013B47C 0013855C  38 E2 A4 44 */	addi r7, r2, off_flag$806@sda21
/* 8013B480 00138560  54 00 00 3C */	clrrwi r0, r0, 1
/* 8013B484 00138564  83 C6 00 04 */	lwz r30, 0x4(r6)
/* 8013B488 00138568  7C 80 03 78 */	or r0, r4, r0
/* 8013B48C 0013856C  38 C2 A4 48 */	addi r6, r2, transition_flag$807@sda21
/* 8013B490 00138570  98 03 00 18 */	stb r0, 0x18(r3)
/* 8013B494 00138574  38 82 A4 4C */	addi r4, r2, on_flag$808@sda21
/* 8013B498 00138578  7D 8C 28 AE */	lbzx r12, r12, r5
/* 8013B49C 0013857C  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8013B4A0 00138580  7D 6B 28 AE */	lbzx r11, r11, r5
/* 8013B4A4 00138584  54 00 00 3C */	clrrwi r0, r0, 1
/* 8013B4A8 00138588  7D 4A 28 AE */	lbzx r10, r10, r5
/* 8013B4AC 0013858C  7D 80 03 78 */	or r0, r12, r0
/* 8013B4B0 00138590  7D 29 28 AE */	lbzx r9, r9, r5
/* 8013B4B4 00138594  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8013B4B8 00138598  7D 08 28 AE */	lbzx r8, r8, r5
/* 8013B4BC 0013859C  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8013B4C0 001385A0  7C E7 28 AE */	lbzx r7, r7, r5
/* 8013B4C4 001385A4  54 00 00 3C */	clrrwi r0, r0, 1
/* 8013B4C8 001385A8  7C C6 28 AE */	lbzx r6, r6, r5
/* 8013B4CC 001385AC  7D 60 03 78 */	or r0, r11, r0
/* 8013B4D0 001385B0  7C 84 28 AE */	lbzx r4, r4, r5
/* 8013B4D4 001385B4  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8013B4D8 001385B8  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 8013B4DC 001385BC  54 00 07 B8 */	rlwinm r0, r0, 0, 30, 28
/* 8013B4E0 001385C0  7D 40 03 78 */	or r0, r10, r0
/* 8013B4E4 001385C4  98 03 00 1C */	stb r0, 0x1c(r3)
/* 8013B4E8 001385C8  88 1F 00 1C */	lbz r0, 0x1c(r31)
/* 8013B4EC 001385CC  54 00 07 B8 */	rlwinm r0, r0, 0, 30, 28
/* 8013B4F0 001385D0  7D 20 03 78 */	or r0, r9, r0
/* 8013B4F4 001385D4  98 1F 00 1C */	stb r0, 0x1c(r31)
/* 8013B4F8 001385D8  88 1E 00 1C */	lbz r0, 0x1c(r30)
/* 8013B4FC 001385DC  54 00 07 B8 */	rlwinm r0, r0, 0, 30, 28
/* 8013B500 001385E0  7D 00 03 78 */	or r0, r8, r0
/* 8013B504 001385E4  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 8013B508 001385E8  88 03 00 22 */	lbz r0, 0x22(r3)
/* 8013B50C 001385EC  54 00 07 74 */	rlwinm r0, r0, 0, 29, 26
/* 8013B510 001385F0  7C E0 03 78 */	or r0, r7, r0
/* 8013B514 001385F4  98 03 00 22 */	stb r0, 0x22(r3)
/* 8013B518 001385F8  88 1F 00 22 */	lbz r0, 0x22(r31)
/* 8013B51C 001385FC  54 00 07 74 */	rlwinm r0, r0, 0, 29, 26
/* 8013B520 00138600  7C C0 03 78 */	or r0, r6, r0
/* 8013B524 00138604  98 1F 00 22 */	stb r0, 0x22(r31)
/* 8013B528 00138608  88 1E 00 22 */	lbz r0, 0x22(r30)
/* 8013B52C 0013860C  54 00 07 74 */	rlwinm r0, r0, 0, 29, 26
/* 8013B530 00138610  7C 80 03 78 */	or r0, r4, r0
/* 8013B534 00138614  98 1E 00 22 */	stb r0, 0x22(r30)
/* 8013B538 00138618  4B FE 8E F1 */	bl zGridUpdateEnt__FP4xEnt
/* 8013B53C 0013861C  7F E3 FB 78 */	mr r3, r31
/* 8013B540 00138620  4B FE 8E E9 */	bl zGridUpdateEnt__FP4xEnt
/* 8013B544 00138624  7F C3 F3 78 */	mr r3, r30
/* 8013B548 00138628  4B FE 8E E1 */	bl zGridUpdateEnt__FP4xEnt
/* 8013B54C 0013862C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B550 00138630  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013B554 00138634  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8013B558 00138638  7C 08 03 A6 */	mtlr r0
/* 8013B55C 0013863C  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B560 00138640  4E 80 00 20 */	blr
.endfn "set_object_state__25@unnamed@zDiscoFloor_cpp@FRC13z_disco_floorUli"

# @unnamed@zDiscoFloor_cpp@::play_sound(z_disco_floor&)
.fn "play_sound__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor", local
/* 8013B564 00138644  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8013B568 00138648  7C 08 02 A6 */	mflr r0
/* 8013B56C 0013864C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8013B570 00138650  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8013B574 00138654  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8013B578 00138658  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8013B57C 0013865C  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 8013B580 00138660  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8013B584 00138664  3C 80 80 3C */	lis r4, globals@ha
/* 8013B588 00138668  7C 7F 1B 78 */	mr r31, r3
/* 8013B58C 0013866C  38 84 05 58 */	addi r4, r4, globals@l
/* 8013B590 00138670  38 61 00 08 */	addi r3, r1, 0x8
/* 8013B594 00138674  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 8013B598 00138678  38 9F 00 64 */	addi r4, r31, 0x64
/* 8013B59C 0013867C  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8013B5A0 00138680  38 A5 00 30 */	addi r5, r5, 0x30
/* 8013B5A4 00138684  4B ED 30 ED */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8013B5A8 00138688  38 61 00 08 */	addi r3, r1, 0x8
/* 8013B5AC 0013868C  4B ED 9B 21 */	bl xVec3Length2__FPC5xVec3
/* 8013B5B0 00138690  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 8013B5B4 00138694  C0 42 A4 50 */	lfs f2, "@908"@sda21(r2)
/* 8013B5B8 00138698  EC 00 00 32 */	fmuls f0, f0, f0
/* 8013B5BC 0013869C  EC 02 00 32 */	fmuls f0, f2, f0
/* 8013B5C0 001386A0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8013B5C4 001386A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013B5C8 001386A8  40 80 01 2C */	bge .L_8013B6F4
/* 8013B5CC 001386AC  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 8013B5D0 001386B0  38 03 00 01 */	addi r0, r3, 0x1
/* 8013B5D4 001386B4  90 1F 00 94 */	stw r0, 0x94(r31)
/* 8013B5D8 001386B8  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8013B5DC 001386BC  2C 00 00 05 */	cmpwi r0, 0x5
/* 8013B5E0 001386C0  41 80 00 24 */	blt .L_8013B604
/* 8013B5E4 001386C4  4B EF 56 A5 */	bl xurand__Fv
/* 8013B5E8 001386C8  FC 20 08 50 */	fneg f1, f1
/* 8013B5EC 001386CC  C0 02 A4 54 */	lfs f0, "@909"@sda21(r2)
/* 8013B5F0 001386D0  EC 00 00 78 */	fmsubs f0, f0, f1, f0
/* 8013B5F4 001386D4  FC 00 00 1E */	fctiwz f0, f0
/* 8013B5F8 001386D8  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8013B5FC 001386DC  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8013B600 001386E0  90 1F 00 94 */	stw r0, 0x94(r31)
.L_8013B604:
/* 8013B604 001386E4  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8013B608 001386E8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8013B60C 001386EC  41 80 00 18 */	blt .L_8013B624
/* 8013B610 001386F0  3C 60 80 27 */	lis r3, "close_encounters__25@unnamed@zDiscoFloor_cpp@"@ha
/* 8013B614 001386F4  54 00 10 3A */	slwi r0, r0, 2
/* 8013B618 001386F8  38 63 D0 90 */	addi r3, r3, "close_encounters__25@unnamed@zDiscoFloor_cpp@"@l
/* 8013B61C 001386FC  7C 83 04 2E */	lfsx f4, r3, r0
/* 8013B620 00138700  48 00 00 30 */	b .L_8013B650
.L_8013B624:
/* 8013B624 00138704  4B EF 56 65 */	bl xurand__Fv
/* 8013B628 00138708  C0 42 A4 58 */	lfs f2, "@910"@sda21(r2)
/* 8013B62C 0013870C  3C 60 80 27 */	lis r3, "blues_scale__25@unnamed@zDiscoFloor_cpp@"@ha
/* 8013B630 00138710  C0 02 A4 5C */	lfs f0, "@911"@sda21(r2)
/* 8013B634 00138714  38 63 D0 A4 */	addi r3, r3, "blues_scale__25@unnamed@zDiscoFloor_cpp@"@l
/* 8013B638 00138718  EC 02 00 78 */	fmsubs f0, f2, f1, f0
/* 8013B63C 0013871C  FC 00 00 1E */	fctiwz f0, f0
/* 8013B640 00138720  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8013B644 00138724  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8013B648 00138728  54 00 10 3A */	slwi r0, r0, 2
/* 8013B64C 0013872C  7C 83 04 2E */	lfsx f4, r3, r0
.L_8013B650:
/* 8013B650 00138730  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8013B654 00138734  C0 02 A4 60 */	lfs f0, "@912"@sda21(r2)
/* 8013B658 00138738  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013B65C 0013873C  40 80 00 10 */	bge .L_8013B66C
/* 8013B660 00138740  C0 02 A4 64 */	lfs f0, "@913"@sda21(r2)
/* 8013B664 00138744  EF C4 00 2A */	fadds f30, f4, f0
/* 8013B668 00138748  48 00 00 40 */	b .L_8013B6A8
.L_8013B66C:
/* 8013B66C 0013874C  C0 62 A4 28 */	lfs f3, "@710"@sda21(r2)
/* 8013B670 00138750  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 8013B674 00138754  40 81 00 10 */	ble .L_8013B684
/* 8013B678 00138758  C0 02 A4 68 */	lfs f0, "@914"@sda21(r2)
/* 8013B67C 0013875C  EF C4 00 2A */	fadds f30, f4, f0
/* 8013B680 00138760  48 00 00 28 */	b .L_8013B6A8
.L_8013B684:
/* 8013B684 00138764  EC A1 00 28 */	fsubs f5, f1, f0
/* 8013B688 00138768  C0 22 A4 6C */	lfs f1, "@915"@sda21(r2)
/* 8013B68C 0013876C  C0 42 A4 70 */	lfs f2, "@916"@sda21(r2)
/* 8013B690 00138770  C0 02 A4 68 */	lfs f0, "@914"@sda21(r2)
/* 8013B694 00138774  EC A5 08 24 */	fdivs f5, f5, f1
/* 8013B698 00138778  EC 23 28 28 */	fsubs f1, f3, f5
/* 8013B69C 0013877C  EC 22 00 72 */	fmuls f1, f2, f1
/* 8013B6A0 00138780  EC 21 00 2A */	fadds f1, f1, f0
/* 8013B6A4 00138784  EF C4 08 2A */	fadds f30, f4, f1
.L_8013B6A8:
/* 8013B6A8 00138788  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8013B6AC 0013878C  C3 FF 00 70 */	lfs f31, 0x70(r31)
/* 8013B6B0 00138790  38 63 D0 C8 */	addi r3, r3, "@stringBase0"@l
/* 8013B6B4 00138794  38 63 00 05 */	addi r3, r3, 0x5
/* 8013B6B8 00138798  4B F1 0B 5D */	bl xStrHash__FPCc
/* 8013B6BC 0013879C  C0 22 A4 78 */	lfs f1, "@918"@sda21(r2)
/* 8013B6C0 001387A0  FC 40 F0 90 */	fmr f2, f30
/* 8013B6C4 001387A4  C0 02 A4 50 */	lfs f0, "@908"@sda21(r2)
/* 8013B6C8 001387A8  38 DF 00 64 */	addi r6, r31, 0x64
/* 8013B6CC 001387AC  EC 61 07 F2 */	fmuls f3, f1, f31
/* 8013B6D0 001387B0  C0 22 A4 74 */	lfs f1, "@917"@sda21(r2)
/* 8013B6D4 001387B4  EC 80 07 F2 */	fmuls f4, f0, f31
/* 8013B6D8 001387B8  C0 A2 A4 7C */	lfs f5, "@919"@sda21(r2)
/* 8013B6DC 001387BC  38 80 00 00 */	li r4, 0x0
/* 8013B6E0 001387C0  38 A0 00 00 */	li r5, 0x0
/* 8013B6E4 001387C4  38 E0 00 00 */	li r7, 0x0
/* 8013B6E8 001387C8  4B F0 D3 AD */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 8013B6EC 001387CC  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013B6F0 001387D0  D0 1F 00 90 */	stfs f0, 0x90(r31)
.L_8013B6F4:
/* 8013B6F4 001387D4  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8013B6F8 001387D8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8013B6FC 001387DC  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 8013B700 001387E0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8013B704 001387E4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8013B708 001387E8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8013B70C 001387EC  7C 08 03 A6 */	mtlr r0
/* 8013B710 001387F0  38 21 00 50 */	addi r1, r1, 0x50
/* 8013B714 001387F4  4E 80 00 20 */	blr
.endfn "play_sound__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"

# @unnamed@zDiscoFloor_cpp@::update_transition(z_disco_floor&, float)
.fn "update_transition__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf", local
/* 8013B718 001387F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B71C 001387FC  7C 08 02 A6 */	mflr r0
/* 8013B720 00138800  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B724 00138804  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8013B728 00138808  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8013B72C 0013880C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013B730 00138810  7C 7F 1B 78 */	mr r31, r3
/* 8013B734 00138814  FF E0 08 90 */	fmr f31, f1
/* 8013B738 00138818  C0 03 00 5C */	lfs f0, 0x5c(r3)
/* 8013B73C 0013881C  EC 00 F8 2A */	fadds f0, f0, f31
/* 8013B740 00138820  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 8013B744 00138824  C0 23 00 5C */	lfs f1, 0x5c(r3)
/* 8013B748 00138828  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8013B74C 0013882C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013B750 00138830  40 80 00 0C */	bge .L_8013B75C
/* 8013B754 00138834  C0 22 A4 7C */	lfs f1, "@919"@sda21(r2)
/* 8013B758 00138838  48 00 00 6C */	b .L_8013B7C4
.L_8013B75C:
/* 8013B75C 0013883C  C0 3F 00 90 */	lfs f1, 0x90(r31)
/* 8013B760 00138840  C0 02 A4 60 */	lfs f0, "@912"@sda21(r2)
/* 8013B764 00138844  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013B768 00138848  40 81 00 08 */	ble .L_8013B770
/* 8013B76C 0013884C  4B FF FD F9 */	bl "play_sound__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"
.L_8013B770:
/* 8013B770 00138850  C0 5F 00 5C */	lfs f2, 0x5c(r31)
/* 8013B774 00138854  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8013B778 00138858  EC 02 F8 28 */	fsubs f0, f2, f31
/* 8013B77C 0013885C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013B780 00138860  40 80 00 08 */	bge .L_8013B788
/* 8013B784 00138864  EF E2 08 28 */	fsubs f31, f2, f1
.L_8013B788:
/* 8013B788 00138868  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8013B78C 0013886C  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8013B790 00138870  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8013B794 00138874  38 03 00 01 */	addi r0, r3, 0x1
/* 8013B798 00138878  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8013B79C 0013887C  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8013B7A0 00138880  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8013B7A4 00138884  48 00 00 3D */	bl "state_byte_size__25@unnamed@zDiscoFloor_cpp@FUl"
/* 8013B7A8 00138888  7C 65 1B 78 */	mr r5, r3
/* 8013B7AC 0013888C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8013B7B0 00138890  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 8013B7B4 00138894  4B EC 7D 8D */	bl memcpy
/* 8013B7B8 00138898  7F E3 FB 78 */	mr r3, r31
/* 8013B7BC 0013889C  4B FF FB 49 */	bl "refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"
/* 8013B7C0 001388A0  FC 20 F8 90 */	fmr f1, f31
.L_8013B7C4:
/* 8013B7C4 001388A4  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8013B7C8 001388A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B7CC 001388AC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8013B7D0 001388B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013B7D4 001388B4  7C 08 03 A6 */	mtlr r0
/* 8013B7D8 001388B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B7DC 001388BC  4E 80 00 20 */	blr
.endfn "update_transition__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf"

# @unnamed@zDiscoFloor_cpp@::state_byte_size(unsigned long)
.fn "state_byte_size__25@unnamed@zDiscoFloor_cpp@FUl", local
/* 8013B7E0 001388C0  54 63 08 3C */	slwi r3, r3, 1
/* 8013B7E4 001388C4  38 03 00 07 */	addi r0, r3, 0x7
/* 8013B7E8 001388C8  54 03 E8 FE */	srwi r3, r0, 3
/* 8013B7EC 001388CC  4E 80 00 20 */	blr
.endfn "state_byte_size__25@unnamed@zDiscoFloor_cpp@FUl"

# @unnamed@zDiscoFloor_cpp@::update_state(z_disco_floor&, float)
.fn "update_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf", local
/* 8013B7F0 001388D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B7F4 001388D4  7C 08 02 A6 */	mflr r0
/* 8013B7F8 001388D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B7FC 001388DC  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8013B800 001388E0  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8013B804 001388E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013B808 001388E8  7C 7F 1B 78 */	mr r31, r3
/* 8013B80C 001388EC  FF E0 08 90 */	fmr f31, f1
/* 8013B810 001388F0  C0 03 00 60 */	lfs f0, 0x60(r3)
/* 8013B814 001388F4  EC 00 F8 2A */	fadds f0, f0, f31
/* 8013B818 001388F8  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 8013B81C 001388FC  C0 23 00 60 */	lfs f1, 0x60(r3)
/* 8013B820 00138900  C0 43 00 58 */	lfs f2, 0x58(r3)
/* 8013B824 00138904  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8013B828 00138908  41 80 01 14 */	blt .L_8013B93C
/* 8013B82C 0013890C  EC 01 F8 28 */	fsubs f0, f1, f31
/* 8013B830 00138910  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8013B834 00138914  40 80 00 08 */	bge .L_8013B83C
/* 8013B838 00138918  EF E1 10 28 */	fsubs f31, f1, f2
.L_8013B83C:
/* 8013B83C 0013891C  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013B840 00138920  38 60 FF FF */	li r3, -0x1
/* 8013B844 00138924  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 8013B848 00138928  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 8013B84C 0013892C  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 8013B850 00138930  28 00 00 00 */	cmplwi r0, 0x0
/* 8013B854 00138934  41 82 00 08 */	beq .L_8013B85C
/* 8013B858 00138938  38 60 00 01 */	li r3, 0x1
.L_8013B85C:
/* 8013B85C 0013893C  7C 04 1A 14 */	add r0, r4, r3
/* 8013B860 00138940  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8013B864 00138944  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8013B868 00138948  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 8013B86C 0013894C  7C 03 00 40 */	cmplw r3, r0
/* 8013B870 00138950  40 80 00 28 */	bge .L_8013B898
/* 8013B874 00138954  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8013B878 00138958  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8013B87C 0013895C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8013B880 00138960  41 82 00 10 */	beq .L_8013B890
/* 8013B884 00138964  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 8013B888 00138968  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8013B88C 0013896C  48 00 00 0C */	b .L_8013B898
.L_8013B890:
/* 8013B890 00138970  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8013B894 00138974  90 1F 00 4C */	stw r0, 0x4c(r31)
.L_8013B898:
/* 8013B898 00138978  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8013B89C 0013897C  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 8013B8A0 00138980  7C 03 00 40 */	cmplw r3, r0
/* 8013B8A4 00138984  40 81 00 28 */	ble .L_8013B8CC
/* 8013B8A8 00138988  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8013B8AC 0013898C  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8013B8B0 00138990  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8013B8B4 00138994  41 82 00 10 */	beq .L_8013B8C4
/* 8013B8B8 00138998  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 8013B8BC 0013899C  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8013B8C0 001389A0  48 00 00 0C */	b .L_8013B8CC
.L_8013B8C4:
/* 8013B8C4 001389A4  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8013B8C8 001389A8  90 1F 00 4C */	stw r0, 0x4c(r31)
.L_8013B8CC:
/* 8013B8CC 001389AC  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8013B8D0 001389B0  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 8013B8D4 001389B4  54 00 10 3A */	slwi r0, r0, 2
/* 8013B8D8 001389B8  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8013B8DC 001389BC  7C 84 00 2E */	lwzx r4, r4, r0
/* 8013B8E0 001389C0  80 BF 00 3C */	lwz r5, 0x3c(r31)
/* 8013B8E4 001389C4  4B FF F9 A5 */	bl "translate_mask__25@unnamed@zDiscoFloor_cpp@FPUcPCUcUl"
/* 8013B8E8 001389C8  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 8013B8EC 001389CC  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8013B8F0 001389D0  4C 40 13 82 */	cror eq, lt, eq
/* 8013B8F4 001389D4  40 82 00 38 */	bne .L_8013B92C
/* 8013B8F8 001389D8  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8013B8FC 001389DC  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8013B900 001389E0  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8013B904 001389E4  38 03 00 01 */	addi r0, r3, 0x1
/* 8013B908 001389E8  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8013B90C 001389EC  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8013B910 001389F0  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8013B914 001389F4  4B FF FE CD */	bl "state_byte_size__25@unnamed@zDiscoFloor_cpp@FUl"
/* 8013B918 001389F8  7C 65 1B 78 */	mr r5, r3
/* 8013B91C 001389FC  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8013B920 00138A00  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 8013B924 00138A04  4B EC 7C 1D */	bl memcpy
/* 8013B928 00138A08  48 00 00 0C */	b .L_8013B934
.L_8013B92C:
/* 8013B92C 00138A0C  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013B930 00138A10  D0 1F 00 5C */	stfs f0, 0x5c(r31)
.L_8013B934:
/* 8013B934 00138A14  7F E3 FB 78 */	mr r3, r31
/* 8013B938 00138A18  4B FF F9 CD */	bl "refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"
.L_8013B93C:
/* 8013B93C 00138A1C  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8013B940 00138A20  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B944 00138A24  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8013B948 00138A28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013B94C 00138A2C  7C 08 03 A6 */	mtlr r0
/* 8013B950 00138A30  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B954 00138A34  4E 80 00 20 */	blr
.endfn "update_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf"

# @unnamed@zDiscoFloor_cpp@::get_damage_surface()
.fn "get_damage_surface__25@unnamed@zDiscoFloor_cpp@Fv", local
/* 8013B958 00138A38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B95C 00138A3C  7C 08 02 A6 */	mflr r0
/* 8013B960 00138A40  3C 60 80 32 */	lis r3, ...bss.0@ha
/* 8013B964 00138A44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B968 00138A48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013B96C 00138A4C  3B E3 7D 30 */	addi r31, r3, ...bss.0@l
/* 8013B970 00138A50  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8013B974 00138A54  88 0D 96 71 */	lbz r0, init$976@sda21(r13)
/* 8013B978 00138A58  7C 00 07 75 */	extsb. r0, r0
/* 8013B97C 00138A5C  40 82 00 14 */	bne .L_8013B990
/* 8013B980 00138A60  38 60 00 00 */	li r3, 0x0
/* 8013B984 00138A64  38 00 00 01 */	li r0, 0x1
/* 8013B988 00138A68  98 6D 96 70 */	stb r3, inited$975@sda21(r13)
/* 8013B98C 00138A6C  98 0D 96 71 */	stb r0, init$976@sda21(r13)
.L_8013B990:
/* 8013B990 00138A70  88 0D 96 70 */	lbz r0, inited$975@sda21(r13)
/* 8013B994 00138A74  28 00 00 00 */	cmplwi r0, 0x0
/* 8013B998 00138A78  41 82 00 0C */	beq .L_8013B9A4
/* 8013B99C 00138A7C  38 7F 00 70 */	addi r3, r31, 0x70
/* 8013B9A0 00138A80  48 00 00 50 */	b .L_8013B9F0
.L_8013B9A4:
/* 8013B9A4 00138A84  4B F7 AF 79 */	bl zSurfaceGetDefault__Fv
/* 8013B9A8 00138A88  7C 60 1B 78 */	mr r0, r3
/* 8013B9AC 00138A8C  38 7F 00 70 */	addi r3, r31, 0x70
/* 8013B9B0 00138A90  7C 1E 03 78 */	mr r30, r0
/* 8013B9B4 00138A94  7F C4 F3 78 */	mr r4, r30
/* 8013B9B8 00138A98  4B F1 17 15 */	bl __as__8xSurfaceFRC8xSurface
/* 8013B9BC 00138A9C  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 8013B9C0 00138AA0  38 7F 00 98 */	addi r3, r31, 0x98
/* 8013B9C4 00138AA4  48 00 01 AD */	bl __as__13zSurfacePropsFRC13zSurfaceProps
/* 8013B9C8 00138AA8  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8013B9CC 00138AAC  38 7F 01 A4 */	addi r3, r31, 0x1a4
/* 8013B9D0 00138AB0  48 00 00 39 */	bl __as__14zSurfAssetBaseFRC14zSurfAssetBase
/* 8013B9D4 00138AB4  38 9F 01 A4 */	addi r4, r31, 0x1a4
/* 8013B9D8 00138AB8  38 00 00 04 */	li r0, 0x4
/* 8013B9DC 00138ABC  38 7F 00 70 */	addi r3, r31, 0x70
/* 8013B9E0 00138AC0  38 BF 00 98 */	addi r5, r31, 0x98
/* 8013B9E4 00138AC4  90 A3 00 24 */	stw r5, 0x24(r3)
/* 8013B9E8 00138AC8  90 9F 00 98 */	stw r4, 0x98(r31)
/* 8013B9EC 00138ACC  98 04 00 08 */	stb r0, 0x8(r4)
.L_8013B9F0:
/* 8013B9F0 00138AD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B9F4 00138AD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013B9F8 00138AD8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8013B9FC 00138ADC  7C 08 03 A6 */	mtlr r0
/* 8013BA00 00138AE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8013BA04 00138AE4  4E 80 00 20 */	blr
.endfn "get_damage_surface__25@unnamed@zDiscoFloor_cpp@Fv"

# zSurfAssetBase::operator=(const zSurfAssetBase&)
.fn __as__14zSurfAssetBaseFRC14zSurfAssetBase, weak
/* 8013BA08 00138AE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013BA0C 00138AEC  7C 08 02 A6 */	mflr r0
/* 8013BA10 00138AF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013BA14 00138AF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013BA18 00138AF8  7C 9F 23 78 */	mr r31, r4
/* 8013BA1C 00138AFC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8013BA20 00138B00  7C 7E 1B 78 */	mr r30, r3
/* 8013BA24 00138B04  4B FB 8E 41 */	bl __as__10xBaseAssetFRC10xBaseAsset
/* 8013BA28 00138B08  88 9F 00 08 */	lbz r4, 0x8(r31)
/* 8013BA2C 00138B0C  38 00 00 18 */	li r0, 0x18
/* 8013BA30 00138B10  88 7F 00 09 */	lbz r3, 0x9(r31)
/* 8013BA34 00138B14  38 BE 00 50 */	addi r5, r30, 0x50
/* 8013BA38 00138B18  98 9E 00 08 */	stb r4, 0x8(r30)
/* 8013BA3C 00138B1C  38 9F 00 50 */	addi r4, r31, 0x50
/* 8013BA40 00138B20  88 DF 00 0A */	lbz r6, 0xa(r31)
/* 8013BA44 00138B24  98 7E 00 09 */	stb r3, 0x9(r30)
/* 8013BA48 00138B28  88 7F 00 0B */	lbz r3, 0xb(r31)
/* 8013BA4C 00138B2C  98 DE 00 0A */	stb r6, 0xa(r30)
/* 8013BA50 00138B30  88 DF 00 0C */	lbz r6, 0xc(r31)
/* 8013BA54 00138B34  98 7E 00 0B */	stb r3, 0xb(r30)
/* 8013BA58 00138B38  88 7F 00 0D */	lbz r3, 0xd(r31)
/* 8013BA5C 00138B3C  98 DE 00 0C */	stb r6, 0xc(r30)
/* 8013BA60 00138B40  88 DF 00 0E */	lbz r6, 0xe(r31)
/* 8013BA64 00138B44  98 7E 00 0D */	stb r3, 0xd(r30)
/* 8013BA68 00138B48  88 7F 00 0F */	lbz r3, 0xf(r31)
/* 8013BA6C 00138B4C  98 DE 00 0E */	stb r6, 0xe(r30)
/* 8013BA70 00138B50  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8013BA74 00138B54  98 7E 00 0F */	stb r3, 0xf(r30)
/* 8013BA78 00138B58  80 DF 00 14 */	lwz r6, 0x14(r31)
/* 8013BA7C 00138B5C  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8013BA80 00138B60  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8013BA84 00138B64  90 DE 00 14 */	stw r6, 0x14(r30)
/* 8013BA88 00138B68  80 DF 00 1C */	lwz r6, 0x1c(r31)
/* 8013BA8C 00138B6C  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8013BA90 00138B70  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8013BA94 00138B74  90 DE 00 1C */	stw r6, 0x1c(r30)
/* 8013BA98 00138B78  80 DF 00 24 */	lwz r6, 0x24(r31)
/* 8013BA9C 00138B7C  90 7E 00 20 */	stw r3, 0x20(r30)
/* 8013BAA0 00138B80  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8013BAA4 00138B84  90 DE 00 24 */	stw r6, 0x24(r30)
/* 8013BAA8 00138B88  80 DF 00 2C */	lwz r6, 0x2c(r31)
/* 8013BAAC 00138B8C  90 7E 00 28 */	stw r3, 0x28(r30)
/* 8013BAB0 00138B90  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8013BAB4 00138B94  90 DE 00 2C */	stw r6, 0x2c(r30)
/* 8013BAB8 00138B98  80 DF 00 34 */	lwz r6, 0x34(r31)
/* 8013BABC 00138B9C  90 7E 00 30 */	stw r3, 0x30(r30)
/* 8013BAC0 00138BA0  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8013BAC4 00138BA4  90 DE 00 34 */	stw r6, 0x34(r30)
/* 8013BAC8 00138BA8  80 DF 00 3C */	lwz r6, 0x3c(r31)
/* 8013BACC 00138BAC  90 7E 00 38 */	stw r3, 0x38(r30)
/* 8013BAD0 00138BB0  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8013BAD4 00138BB4  90 DE 00 3C */	stw r6, 0x3c(r30)
/* 8013BAD8 00138BB8  80 DF 00 44 */	lwz r6, 0x44(r31)
/* 8013BADC 00138BBC  90 7E 00 40 */	stw r3, 0x40(r30)
/* 8013BAE0 00138BC0  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8013BAE4 00138BC4  90 DE 00 44 */	stw r6, 0x44(r30)
/* 8013BAE8 00138BC8  80 DF 00 4C */	lwz r6, 0x4c(r31)
/* 8013BAEC 00138BCC  90 7E 00 48 */	stw r3, 0x48(r30)
/* 8013BAF0 00138BD0  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8013BAF4 00138BD4  90 DE 00 4C */	stw r6, 0x4c(r30)
/* 8013BAF8 00138BD8  90 7E 00 50 */	stw r3, 0x50(r30)
/* 8013BAFC 00138BDC  7C 09 03 A6 */	mtctr r0
.L_8013BB00:
/* 8013BB00 00138BE0  80 64 00 04 */	lwz r3, 0x4(r4)
/* 8013BB04 00138BE4  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 8013BB08 00138BE8  90 65 00 04 */	stw r3, 0x4(r5)
/* 8013BB0C 00138BEC  94 05 00 08 */	stwu r0, 0x8(r5)
/* 8013BB10 00138BF0  42 00 FF F0 */	bdnz .L_8013BB00
/* 8013BB14 00138BF4  88 1F 01 14 */	lbz r0, 0x114(r31)
/* 8013BB18 00138BF8  38 7E 01 15 */	addi r3, r30, 0x115
/* 8013BB1C 00138BFC  38 9F 01 15 */	addi r4, r31, 0x115
/* 8013BB20 00138C00  38 A0 00 03 */	li r5, 0x3
/* 8013BB24 00138C04  98 1E 01 14 */	stb r0, 0x114(r30)
/* 8013BB28 00138C08  48 0B 13 45 */	bl __copy
/* 8013BB2C 00138C0C  C0 1F 01 18 */	lfs f0, 0x118(r31)
/* 8013BB30 00138C10  7F C3 F3 78 */	mr r3, r30
/* 8013BB34 00138C14  C0 3F 01 1C */	lfs f1, 0x11c(r31)
/* 8013BB38 00138C18  D0 1E 01 18 */	stfs f0, 0x118(r30)
/* 8013BB3C 00138C1C  C0 1F 01 20 */	lfs f0, 0x120(r31)
/* 8013BB40 00138C20  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 8013BB44 00138C24  C0 3F 01 24 */	lfs f1, 0x124(r31)
/* 8013BB48 00138C28  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 8013BB4C 00138C2C  C0 1F 01 28 */	lfs f0, 0x128(r31)
/* 8013BB50 00138C30  D0 3E 01 24 */	stfs f1, 0x124(r30)
/* 8013BB54 00138C34  D0 1E 01 28 */	stfs f0, 0x128(r30)
/* 8013BB58 00138C38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013BB5C 00138C3C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8013BB60 00138C40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013BB64 00138C44  7C 08 03 A6 */	mtlr r0
/* 8013BB68 00138C48  38 21 00 10 */	addi r1, r1, 0x10
/* 8013BB6C 00138C4C  4E 80 00 20 */	blr
.endfn __as__14zSurfAssetBaseFRC14zSurfAssetBase

# zSurfaceProps::operator=(const zSurfaceProps&)
.fn __as__13zSurfacePropsFRC13zSurfaceProps, weak
/* 8013BB70 00138C50  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 8013BB74 00138C54  38 00 00 1A */	li r0, 0x1a
/* 8013BB78 00138C58  80 E4 00 04 */	lwz r7, 0x4(r4)
/* 8013BB7C 00138C5C  38 C3 00 38 */	addi r6, r3, 0x38
/* 8013BB80 00138C60  90 A3 00 00 */	stw r5, 0x0(r3)
/* 8013BB84 00138C64  38 A4 00 38 */	addi r5, r4, 0x38
/* 8013BB88 00138C68  81 04 00 08 */	lwz r8, 0x8(r4)
/* 8013BB8C 00138C6C  90 E3 00 04 */	stw r7, 0x4(r3)
/* 8013BB90 00138C70  80 E4 00 0C */	lwz r7, 0xc(r4)
/* 8013BB94 00138C74  91 03 00 08 */	stw r8, 0x8(r3)
/* 8013BB98 00138C78  81 04 00 10 */	lwz r8, 0x10(r4)
/* 8013BB9C 00138C7C  90 E3 00 0C */	stw r7, 0xc(r3)
/* 8013BBA0 00138C80  80 E4 00 14 */	lwz r7, 0x14(r4)
/* 8013BBA4 00138C84  91 03 00 10 */	stw r8, 0x10(r3)
/* 8013BBA8 00138C88  81 04 00 18 */	lwz r8, 0x18(r4)
/* 8013BBAC 00138C8C  90 E3 00 14 */	stw r7, 0x14(r3)
/* 8013BBB0 00138C90  80 E4 00 1C */	lwz r7, 0x1c(r4)
/* 8013BBB4 00138C94  91 03 00 18 */	stw r8, 0x18(r3)
/* 8013BBB8 00138C98  81 04 00 20 */	lwz r8, 0x20(r4)
/* 8013BBBC 00138C9C  90 E3 00 1C */	stw r7, 0x1c(r3)
/* 8013BBC0 00138CA0  80 E4 00 24 */	lwz r7, 0x24(r4)
/* 8013BBC4 00138CA4  91 03 00 20 */	stw r8, 0x20(r3)
/* 8013BBC8 00138CA8  81 04 00 28 */	lwz r8, 0x28(r4)
/* 8013BBCC 00138CAC  90 E3 00 24 */	stw r7, 0x24(r3)
/* 8013BBD0 00138CB0  80 E4 00 2C */	lwz r7, 0x2c(r4)
/* 8013BBD4 00138CB4  91 03 00 28 */	stw r8, 0x28(r3)
/* 8013BBD8 00138CB8  81 04 00 30 */	lwz r8, 0x30(r4)
/* 8013BBDC 00138CBC  90 E3 00 2C */	stw r7, 0x2c(r3)
/* 8013BBE0 00138CC0  80 E4 00 34 */	lwz r7, 0x34(r4)
/* 8013BBE4 00138CC4  91 03 00 30 */	stw r8, 0x30(r3)
/* 8013BBE8 00138CC8  80 84 00 38 */	lwz r4, 0x38(r4)
/* 8013BBEC 00138CCC  90 E3 00 34 */	stw r7, 0x34(r3)
/* 8013BBF0 00138CD0  90 83 00 38 */	stw r4, 0x38(r3)
/* 8013BBF4 00138CD4  7C 09 03 A6 */	mtctr r0
.L_8013BBF8:
/* 8013BBF8 00138CD8  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8013BBFC 00138CDC  84 05 00 08 */	lwzu r0, 0x8(r5)
/* 8013BC00 00138CE0  90 86 00 04 */	stw r4, 0x4(r6)
/* 8013BC04 00138CE4  94 06 00 08 */	stwu r0, 0x8(r6)
/* 8013BC08 00138CE8  42 00 FF F0 */	bdnz .L_8013BBF8
/* 8013BC0C 00138CEC  4E 80 00 20 */	blr
.endfn __as__13zSurfacePropsFRC13zSurfaceProps

# @unnamed@zDiscoFloor_cpp@::render_model(xModelInstance*, const xSphere&)
.fn "render_model__25@unnamed@zDiscoFloor_cpp@FP14xModelInstanceRC7xSphere", local
/* 8013BC10 00138CF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013BC14 00138CF4  7C 08 02 A6 */	mflr r0
/* 8013BC18 00138CF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013BC1C 00138CFC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013BC20 00138D00  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013BC24 00138D04  7C 9E 23 78 */	mr r30, r4
/* 8013BC28 00138D08  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013BC2C 00138D0C  7C 7D 1B 78 */	mr r29, r3
/* 8013BC30 00138D10  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 8013BC34 00138D14  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8013BC38 00138D18  4B ED 45 F1 */	bl __as__5RwV3dFRC5RwV3d
/* 8013BC3C 00138D1C  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 8013BC40 00138D20  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8013BC44 00138D24  83 DD 00 4C */	lwz r30, 0x4c(r29)
/* 8013BC48 00138D28  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 8013BC4C 00138D2C  48 0F D3 E5 */	bl RwFrameGetLTM
/* 8013BC50 00138D30  7F C4 F3 78 */	mr r4, r30
/* 8013BC54 00138D34  7C 7E 1B 78 */	mr r30, r3
/* 8013BC58 00138D38  4B EC F9 15 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8013BC5C 00138D3C  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013BC60 00138D40  C0 3D 00 50 */	lfs f1, 0x50(r29)
/* 8013BC64 00138D44  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8013BC68 00138D48  41 82 00 24 */	beq .L_8013BC8C
/* 8013BC6C 00138D4C  7F C3 F3 78 */	mr r3, r30
/* 8013BC70 00138D50  4B EC F5 11 */	bl __amu__5xVec3Ff
/* 8013BC74 00138D54  C0 3D 00 54 */	lfs f1, 0x54(r29)
/* 8013BC78 00138D58  38 7E 00 10 */	addi r3, r30, 0x10
/* 8013BC7C 00138D5C  4B EC F5 05 */	bl __amu__5xVec3Ff
/* 8013BC80 00138D60  C0 3D 00 58 */	lfs f1, 0x58(r29)
/* 8013BC84 00138D64  38 7E 00 20 */	addi r3, r30, 0x20
/* 8013BC88 00138D68  4B EC F4 F9 */	bl __amu__5xVec3Ff
.L_8013BC8C:
/* 8013BC8C 00138D6C  7F C3 F3 78 */	mr r3, r30
/* 8013BC90 00138D70  48 0F 46 F9 */	bl RwMatrixUpdate
/* 8013BC94 00138D74  81 9F 00 48 */	lwz r12, 0x48(r31)
/* 8013BC98 00138D78  7F E3 FB 78 */	mr r3, r31
/* 8013BC9C 00138D7C  7D 89 03 A6 */	mtctr r12
/* 8013BCA0 00138D80  4E 80 04 21 */	bctrl
/* 8013BCA4 00138D84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013BCA8 00138D88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013BCAC 00138D8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013BCB0 00138D90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013BCB4 00138D94  7C 08 03 A6 */	mtlr r0
/* 8013BCB8 00138D98  38 21 00 20 */	addi r1, r1, 0x20
/* 8013BCBC 00138D9C  4E 80 00 20 */	blr
.endfn "render_model__25@unnamed@zDiscoFloor_cpp@FP14xModelInstanceRC7xSphere"

# @unnamed@zDiscoFloor_cpp@::render_model(xModelInstance*, xSphere&, float)
.fn "render_model__25@unnamed@zDiscoFloor_cpp@FP14xModelInstanceR7xSpheref", local
/* 8013BCC0 00138DA0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8013BCC4 00138DA4  7C 08 02 A6 */	mflr r0
/* 8013BCC8 00138DA8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8013BCCC 00138DAC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8013BCD0 00138DB0  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8013BCD4 00138DB4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013BCD8 00138DB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013BCDC 00138DBC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013BCE0 00138DC0  7C 7D 1B 78 */	mr r29, r3
/* 8013BCE4 00138DC4  FF E0 08 90 */	fmr f31, f1
/* 8013BCE8 00138DC8  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 8013BCEC 00138DCC  7C 9E 23 78 */	mr r30, r4
/* 8013BCF0 00138DD0  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8013BCF4 00138DD4  4B ED 45 35 */	bl __as__5RwV3dFRC5RwV3d
/* 8013BCF8 00138DD8  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 8013BCFC 00138DDC  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8013BD00 00138DE0  83 DD 00 4C */	lwz r30, 0x4c(r29)
/* 8013BD04 00138DE4  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 8013BD08 00138DE8  48 0F D3 29 */	bl RwFrameGetLTM
/* 8013BD0C 00138DEC  7F C4 F3 78 */	mr r4, r30
/* 8013BD10 00138DF0  7C 7E 1B 78 */	mr r30, r3
/* 8013BD14 00138DF4  4B EC F8 59 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8013BD18 00138DF8  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013BD1C 00138DFC  C0 3D 00 50 */	lfs f1, 0x50(r29)
/* 8013BD20 00138E00  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8013BD24 00138E04  41 82 00 24 */	beq .L_8013BD48
/* 8013BD28 00138E08  7F C3 F3 78 */	mr r3, r30
/* 8013BD2C 00138E0C  4B EC F4 55 */	bl __amu__5xVec3Ff
/* 8013BD30 00138E10  C0 3D 00 54 */	lfs f1, 0x54(r29)
/* 8013BD34 00138E14  38 7E 00 10 */	addi r3, r30, 0x10
/* 8013BD38 00138E18  4B EC F4 49 */	bl __amu__5xVec3Ff
/* 8013BD3C 00138E1C  C0 3D 00 58 */	lfs f1, 0x58(r29)
/* 8013BD40 00138E20  38 7E 00 20 */	addi r3, r30, 0x20
/* 8013BD44 00138E24  4B EC F4 3D */	bl __amu__5xVec3Ff
.L_8013BD48:
/* 8013BD48 00138E28  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 8013BD4C 00138E2C  7F C3 F3 78 */	mr r3, r30
/* 8013BD50 00138E30  EC 00 F8 2A */	fadds f0, f0, f31
/* 8013BD54 00138E34  D0 1E 00 34 */	stfs f0, 0x34(r30)
/* 8013BD58 00138E38  48 0F 46 31 */	bl RwMatrixUpdate
/* 8013BD5C 00138E3C  81 9F 00 48 */	lwz r12, 0x48(r31)
/* 8013BD60 00138E40  7F E3 FB 78 */	mr r3, r31
/* 8013BD64 00138E44  7D 89 03 A6 */	mtctr r12
/* 8013BD68 00138E48  4E 80 04 21 */	bctrl
/* 8013BD6C 00138E4C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8013BD70 00138E50  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013BD74 00138E54  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8013BD78 00138E58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013BD7C 00138E5C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013BD80 00138E60  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013BD84 00138E64  7C 08 03 A6 */	mtlr r0
/* 8013BD88 00138E68  38 21 00 30 */	addi r1, r1, 0x30
/* 8013BD8C 00138E6C  4E 80 00 20 */	blr
.endfn "render_model__25@unnamed@zDiscoFloor_cpp@FP14xModelInstanceR7xSpheref"

# z_disco_floor::init()
.fn init__13z_disco_floorFv, global
/* 8013BD90 00138E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013BD94 00138E74  7C 08 02 A6 */	mflr r0
/* 8013BD98 00138E78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013BD9C 00138E7C  4B FF F1 C9 */	bl "create_glow_light__25@unnamed@zDiscoFloor_cpp@Fv"
/* 8013BDA0 00138E80  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8013BDA4 00138E84  38 63 D0 C8 */	addi r3, r3, "@stringBase0"@l
/* 8013BDA8 00138E88  38 63 00 11 */	addi r3, r3, 0x11
/* 8013BDAC 00138E8C  4B ED A0 F5 */	bl xDebugRemoveTweak__FPCc
/* 8013BDB0 00138E90  48 00 00 21 */	bl "add_global_tweaks__25@unnamed@zDiscoFloor_cpp@Fv"
/* 8013BDB4 00138E94  38 6D 96 74 */	addi r3, r13, "clone_pipe__25@unnamed@zDiscoFloor_cpp@"@sda21
/* 8013BDB8 00138E98  48 00 00 15 */	bl "init__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv"
/* 8013BDBC 00138E9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013BDC0 00138EA0  7C 08 03 A6 */	mtlr r0
/* 8013BDC4 00138EA4  38 21 00 10 */	addi r1, r1, 0x10
/* 8013BDC8 00138EA8  4E 80 00 20 */	blr
.endfn init__13z_disco_floorFv

# @unnamed@zDiscoFloor_cpp@::clone_pipe_data::init()
.fn "init__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv", local
/* 8013BDCC 00138EAC  4E 80 00 20 */	blr
.endfn "init__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv"

# @unnamed@zDiscoFloor_cpp@::add_global_tweaks()
.fn "add_global_tweaks__25@unnamed@zDiscoFloor_cpp@Fv", local
/* 8013BDD0 00138EB0  4E 80 00 20 */	blr
.endfn "add_global_tweaks__25@unnamed@zDiscoFloor_cpp@Fv"

# z_disco_floor::post_setup()
.fn post_setup__13z_disco_floorFv, global
/* 8013BDD4 00138EB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013BDD8 00138EB8  7C 08 02 A6 */	mflr r0
/* 8013BDDC 00138EBC  38 6D 96 74 */	addi r3, r13, "clone_pipe__25@unnamed@zDiscoFloor_cpp@"@sda21
/* 8013BDE0 00138EC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013BDE4 00138EC4  48 00 00 15 */	bl "post_setup__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv"
/* 8013BDE8 00138EC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013BDEC 00138ECC  7C 08 03 A6 */	mtlr r0
/* 8013BDF0 00138ED0  38 21 00 10 */	addi r1, r1, 0x10
/* 8013BDF4 00138ED4  4E 80 00 20 */	blr
.endfn post_setup__13z_disco_floorFv

# @unnamed@zDiscoFloor_cpp@::clone_pipe_data::post_setup()
.fn "post_setup__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv", local
/* 8013BDF8 00138ED8  4E 80 00 20 */	blr
.endfn "post_setup__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv"

# z_disco_floor::destroy()
.fn destroy__13z_disco_floorFv, global
/* 8013BDFC 00138EDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013BE00 00138EE0  7C 08 02 A6 */	mflr r0
/* 8013BE04 00138EE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013BE08 00138EE8  4B FF F1 CD */	bl "destroy_glow_light__25@unnamed@zDiscoFloor_cpp@Fv"
/* 8013BE0C 00138EEC  38 6D 96 74 */	addi r3, r13, "clone_pipe__25@unnamed@zDiscoFloor_cpp@"@sda21
/* 8013BE10 00138EF0  48 00 00 15 */	bl "destroy__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv"
/* 8013BE14 00138EF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013BE18 00138EF8  7C 08 03 A6 */	mtlr r0
/* 8013BE1C 00138EFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8013BE20 00138F00  4E 80 00 20 */	blr
.endfn destroy__13z_disco_floorFv

# @unnamed@zDiscoFloor_cpp@::clone_pipe_data::destroy()
.fn "destroy__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv", local
/* 8013BE24 00138F04  4E 80 00 20 */	blr
.endfn "destroy__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFv"

# z_disco_floor::render_all()
.fn render_all__13z_disco_floorFv, global
/* 8013BE28 00138F08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013BE2C 00138F0C  7C 08 02 A6 */	mflr r0
/* 8013BE30 00138F10  3C 60 80 3C */	lis r3, globals@ha
/* 8013BE34 00138F14  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013BE38 00138F18  38 63 05 58 */	addi r3, r3, globals@l
/* 8013BE3C 00138F1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013BE40 00138F20  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013BE44 00138F24  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013BE48 00138F28  93 81 00 10 */	stw r28, 0x10(r1)
/* 8013BE4C 00138F2C  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8013BE50 00138F30  80 03 01 64 */	lwz r0, 0x164(r3)
/* 8013BE54 00138F34  83 C3 02 84 */	lwz r30, 0x284(r3)
/* 8013BE58 00138F38  1C 00 00 98 */	mulli r0, r0, 0x98
/* 8013BE5C 00138F3C  7F DC F3 78 */	mr r28, r30
/* 8013BE60 00138F40  7F BE 02 14 */	add r29, r30, r0
/* 8013BE64 00138F44  48 00 00 30 */	b .L_8013BE94
.L_8013BE68:
/* 8013BE68 00138F48  88 1C 00 12 */	lbz r0, 0x12(r28)
/* 8013BE6C 00138F4C  3B E0 00 00 */	li r31, 0x0
/* 8013BE70 00138F50  28 00 00 00 */	cmplwi r0, 0x0
/* 8013BE74 00138F54  40 82 00 14 */	bne .L_8013BE88
/* 8013BE78 00138F58  38 7C 00 64 */	addi r3, r28, 0x64
/* 8013BE7C 00138F5C  4B F8 C4 99 */	bl iModelSphereCull__FP7xSphere
/* 8013BE80 00138F60  2C 03 00 00 */	cmpwi r3, 0x0
/* 8013BE84 00138F64  41 82 00 08 */	beq .L_8013BE8C
.L_8013BE88:
/* 8013BE88 00138F68  3B E0 00 01 */	li r31, 0x1
.L_8013BE8C:
/* 8013BE8C 00138F6C  9B FC 00 12 */	stb r31, 0x12(r28)
/* 8013BE90 00138F70  3B 9C 00 98 */	addi r28, r28, 0x98
.L_8013BE94:
/* 8013BE94 00138F74  7C 1C E8 40 */	cmplw r28, r29
/* 8013BE98 00138F78  40 82 FF D0 */	bne .L_8013BE68
/* 8013BE9C 00138F7C  3C 60 80 3C */	lis r3, globals@ha
/* 8013BEA0 00138F80  3C A0 80 32 */	lis r5, "glow_light__25@unnamed@zDiscoFloor_cpp@"@ha
/* 8013BEA4 00138F84  38 83 05 58 */	addi r4, r3, globals@l
/* 8013BEA8 00138F88  80 84 06 58 */	lwz r4, 0x658(r4)
/* 8013BEAC 00138F8C  38 65 7D 30 */	addi r3, r5, "glow_light__25@unnamed@zDiscoFloor_cpp@"@l
/* 8013BEB0 00138F90  4B FE 76 11 */	bl xLightKit_Enable__FP9xLightKitP7RpWorld
/* 8013BEB4 00138F94  3B 80 00 00 */	li r28, 0x0
.L_8013BEB8:
/* 8013BEB8 00138F98  7F DF F3 78 */	mr r31, r30
/* 8013BEBC 00138F9C  48 00 00 20 */	b .L_8013BEDC
.L_8013BEC0:
/* 8013BEC0 00138FA0  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8013BEC4 00138FA4  28 00 00 00 */	cmplwi r0, 0x0
/* 8013BEC8 00138FA8  40 82 00 10 */	bne .L_8013BED8
/* 8013BECC 00138FAC  7F E3 FB 78 */	mr r3, r31
/* 8013BED0 00138FB0  7F 84 E3 78 */	mr r4, r28
/* 8013BED4 00138FB4  48 00 0E 21 */	bl render__13z_disco_floorFi
.L_8013BED8:
/* 8013BED8 00138FB8  3B FF 00 98 */	addi r31, r31, 0x98
.L_8013BEDC:
/* 8013BEDC 00138FBC  7C 1F E8 40 */	cmplw r31, r29
/* 8013BEE0 00138FC0  40 82 FF E0 */	bne .L_8013BEC0
/* 8013BEE4 00138FC4  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8013BEE8 00138FC8  2C 1C 00 03 */	cmpwi r28, 0x3
/* 8013BEEC 00138FCC  41 80 FF CC */	blt .L_8013BEB8
/* 8013BEF0 00138FD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013BEF4 00138FD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013BEF8 00138FD8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013BEFC 00138FDC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013BF00 00138FE0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8013BF04 00138FE4  7C 08 03 A6 */	mtlr r0
/* 8013BF08 00138FE8  38 21 00 20 */	addi r1, r1, 0x20
/* 8013BF0C 00138FEC  4E 80 00 20 */	blr
.endfn render_all__13z_disco_floorFv

# z_disco_floor::effects_render_all()
.fn effects_render_all__13z_disco_floorFv, global
/* 8013BF10 00138FF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013BF14 00138FF4  7C 08 02 A6 */	mflr r0
/* 8013BF18 00138FF8  3C 60 80 3C */	lis r3, globals@ha
/* 8013BF1C 00138FFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013BF20 00139000  38 63 05 58 */	addi r3, r3, globals@l
/* 8013BF24 00139004  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013BF28 00139008  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013BF2C 0013900C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013BF30 00139010  93 81 00 10 */	stw r28, 0x10(r1)
/* 8013BF34 00139014  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8013BF38 00139018  80 03 01 64 */	lwz r0, 0x164(r3)
/* 8013BF3C 0013901C  83 C3 02 84 */	lwz r30, 0x284(r3)
/* 8013BF40 00139020  1C 00 00 98 */	mulli r0, r0, 0x98
/* 8013BF44 00139024  7F DC F3 78 */	mr r28, r30
/* 8013BF48 00139028  7F BE 02 14 */	add r29, r30, r0
/* 8013BF4C 0013902C  48 00 00 30 */	b .L_8013BF7C
.L_8013BF50:
/* 8013BF50 00139030  88 1C 00 12 */	lbz r0, 0x12(r28)
/* 8013BF54 00139034  3B E0 00 00 */	li r31, 0x0
/* 8013BF58 00139038  28 00 00 00 */	cmplwi r0, 0x0
/* 8013BF5C 0013903C  40 82 00 14 */	bne .L_8013BF70
/* 8013BF60 00139040  38 7C 00 64 */	addi r3, r28, 0x64
/* 8013BF64 00139044  4B F8 C3 B1 */	bl iModelSphereCull__FP7xSphere
/* 8013BF68 00139048  2C 03 00 00 */	cmpwi r3, 0x0
/* 8013BF6C 0013904C  41 82 00 08 */	beq .L_8013BF74
.L_8013BF70:
/* 8013BF70 00139050  3B E0 00 01 */	li r31, 0x1
.L_8013BF74:
/* 8013BF74 00139054  9B FC 00 12 */	stb r31, 0x12(r28)
/* 8013BF78 00139058  3B 9C 00 98 */	addi r28, r28, 0x98
.L_8013BF7C:
/* 8013BF7C 0013905C  7C 1C E8 40 */	cmplw r28, r29
/* 8013BF80 00139060  40 82 FF D0 */	bne .L_8013BF50
/* 8013BF84 00139064  38 60 00 16 */	li r3, 0x16
/* 8013BF88 00139068  4B F7 0A 75 */	bl zRenderState__F14_SDRenderState
/* 8013BF8C 0013906C  3C 60 80 3C */	lis r3, globals@ha
/* 8013BF90 00139070  3C A0 80 32 */	lis r5, "glow_light__25@unnamed@zDiscoFloor_cpp@"@ha
/* 8013BF94 00139074  38 83 05 58 */	addi r4, r3, globals@l
/* 8013BF98 00139078  80 84 06 58 */	lwz r4, 0x658(r4)
/* 8013BF9C 0013907C  38 65 7D 30 */	addi r3, r5, "glow_light__25@unnamed@zDiscoFloor_cpp@"@l
/* 8013BFA0 00139080  4B FE 75 21 */	bl xLightKit_Enable__FP9xLightKitP7RpWorld
/* 8013BFA4 00139084  3B 80 00 00 */	li r28, 0x0
.L_8013BFA8:
/* 8013BFA8 00139088  7F DF F3 78 */	mr r31, r30
/* 8013BFAC 0013908C  48 00 00 2C */	b .L_8013BFD8
.L_8013BFB0:
/* 8013BFB0 00139090  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8013BFB4 00139094  28 00 00 00 */	cmplwi r0, 0x0
/* 8013BFB8 00139098  40 82 00 1C */	bne .L_8013BFD4
/* 8013BFBC 0013909C  88 1F 00 13 */	lbz r0, 0x13(r31)
/* 8013BFC0 001390A0  28 00 00 00 */	cmplwi r0, 0x0
/* 8013BFC4 001390A4  40 82 00 10 */	bne .L_8013BFD4
/* 8013BFC8 001390A8  7F E3 FB 78 */	mr r3, r31
/* 8013BFCC 001390AC  7F 84 E3 78 */	mr r4, r28
/* 8013BFD0 001390B0  48 00 0D D1 */	bl effects_render__13z_disco_floorFi
.L_8013BFD4:
/* 8013BFD4 001390B4  3B FF 00 98 */	addi r31, r31, 0x98
.L_8013BFD8:
/* 8013BFD8 001390B8  7C 1F E8 40 */	cmplw r31, r29
/* 8013BFDC 001390BC  40 82 FF D4 */	bne .L_8013BFB0
/* 8013BFE0 001390C0  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8013BFE4 001390C4  2C 1C 00 03 */	cmpwi r28, 0x3
/* 8013BFE8 001390C8  41 80 FF C0 */	blt .L_8013BFA8
/* 8013BFEC 001390CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013BFF0 001390D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013BFF4 001390D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013BFF8 001390D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013BFFC 001390DC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8013C000 001390E0  7C 08 03 A6 */	mtlr r0
/* 8013C004 001390E4  38 21 00 20 */	addi r1, r1, 0x20
/* 8013C008 001390E8  4E 80 00 20 */	blr
.endfn effects_render_all__13z_disco_floorFv

# z_disco_floor::init(void*, void*)
.fn init__13z_disco_floorFPvPv, global
/* 8013C00C 001390EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013C010 001390F0  7C 08 02 A6 */	mflr r0
/* 8013C014 001390F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013C018 001390F8  48 00 00 15 */	bl load__13z_disco_floorFR19z_disco_floor_asset
/* 8013C01C 001390FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013C020 00139100  7C 08 03 A6 */	mtlr r0
/* 8013C024 00139104  38 21 00 10 */	addi r1, r1, 0x10
/* 8013C028 00139108  4E 80 00 20 */	blr
.endfn init__13z_disco_floorFPvPv

# z_disco_floor::load(z_disco_floor_asset&)
.fn load__13z_disco_floorFR19z_disco_floor_asset, global
/* 8013C02C 0013910C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013C030 00139110  7C 08 02 A6 */	mflr r0
/* 8013C034 00139114  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013C038 00139118  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013C03C 0013911C  7C 9F 23 78 */	mr r31, r4
/* 8013C040 00139120  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013C044 00139124  7C 7E 1B 78 */	mr r30, r3
/* 8013C048 00139128  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013C04C 0013912C  4B EC D3 B5 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 8013C050 00139130  38 00 00 38 */	li r0, 0x38
/* 8013C054 00139134  3C 60 80 14 */	lis r3, event_handler__13z_disco_floorFP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8013C058 00139138  98 1E 00 04 */	stb r0, 0x4(r30)
/* 8013C05C 0013913C  38 03 CF 08 */	addi r0, r3, event_handler__13z_disco_floorFP5xBaseP5xBaseUiPCfP5xBase@l
/* 8013C060 00139140  93 FE 00 14 */	stw r31, 0x14(r30)
/* 8013C064 00139144  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8013C068 00139148  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 8013C06C 0013914C  28 00 00 00 */	cmplwi r0, 0x0
/* 8013C070 00139150  41 82 00 0C */	beq .L_8013C07C
/* 8013C074 00139154  38 1F 00 2C */	addi r0, r31, 0x2c
/* 8013C078 00139158  90 1E 00 08 */	stw r0, 0x8(r30)
.L_8013C07C:
/* 8013C07C 0013915C  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 8013C080 00139160  3B BF 00 08 */	addi r29, r31, 0x8
/* 8013C084 00139164  38 A0 00 00 */	li r5, 0x0
/* 8013C088 00139168  7C 1D 02 14 */	add r0, r29, r0
/* 8013C08C 0013916C  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8013C090 00139170  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8013C094 00139174  7C 1D 02 14 */	add r0, r29, r0
/* 8013C098 00139178  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8013C09C 0013917C  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8013C0A0 00139180  7C 1D 02 14 */	add r0, r29, r0
/* 8013C0A4 00139184  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 8013C0A8 00139188  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 8013C0AC 0013918C  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8013C0B0 00139190  54 04 10 3A */	slwi r4, r0, 2
/* 8013C0B4 00139194  4B EF 78 8D */	bl xMemAlloc__FUiUii
/* 8013C0B8 00139198  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8013C0BC 0013919C  38 C0 00 00 */	li r6, 0x0
/* 8013C0C0 001391A0  38 A0 00 00 */	li r5, 0x0
/* 8013C0C4 001391A4  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8013C0C8 001391A8  7C 9D 02 14 */	add r4, r29, r0
/* 8013C0CC 001391AC  48 00 00 20 */	b .L_8013C0EC
.L_8013C0D0:
/* 8013C0D0 001391B0  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8013C0D4 001391B4  38 84 00 04 */	addi r4, r4, 0x4
/* 8013C0D8 001391B8  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 8013C0DC 001391BC  38 C6 00 01 */	addi r6, r6, 0x1
/* 8013C0E0 001391C0  7C 1D 02 14 */	add r0, r29, r0
/* 8013C0E4 001391C4  7C 03 29 2E */	stwx r0, r3, r5
/* 8013C0E8 001391C8  38 A5 00 04 */	addi r5, r5, 0x4
.L_8013C0EC:
/* 8013C0EC 001391CC  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 8013C0F0 001391D0  7C 06 00 40 */	cmplw r6, r0
/* 8013C0F4 001391D4  41 80 FF DC */	blt .L_8013C0D0
/* 8013C0F8 001391D8  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8013C0FC 001391DC  4B FF F6 E5 */	bl "state_byte_size__25@unnamed@zDiscoFloor_cpp@FUl"
/* 8013C100 001391E0  7C 64 1B 78 */	mr r4, r3
/* 8013C104 001391E4  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8013C108 001391E8  38 A0 00 00 */	li r5, 0x0
/* 8013C10C 001391EC  4B EF 78 35 */	bl xMemAlloc__FUiUii
/* 8013C110 001391F0  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 8013C114 001391F4  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8013C118 001391F8  4B FF F6 C9 */	bl "state_byte_size__25@unnamed@zDiscoFloor_cpp@FUl"
/* 8013C11C 001391FC  7C 64 1B 78 */	mr r4, r3
/* 8013C120 00139200  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8013C124 00139204  38 A0 00 00 */	li r5, 0x0
/* 8013C128 00139208  4B EF 78 19 */	bl xMemAlloc__FUiUii
/* 8013C12C 0013920C  90 7E 00 20 */	stw r3, 0x20(r30)
/* 8013C130 00139210  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8013C134 00139214  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013C138 00139218  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013C13C 0013921C  40 80 00 0C */	bge .L_8013C148
/* 8013C140 00139220  C0 02 A4 80 */	lfs f0, "@1129"@sda21(r2)
/* 8013C144 00139224  D0 1F 00 0C */	stfs f0, 0xc(r31)
.L_8013C148:
/* 8013C148 00139228  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 8013C14C 0013922C  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013C150 00139230  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013C154 00139234  40 80 00 0C */	bge .L_8013C160
/* 8013C158 00139238  C0 02 A4 28 */	lfs f0, "@710"@sda21(r2)
/* 8013C15C 0013923C  D0 1F 00 10 */	stfs f0, 0x10(r31)
.L_8013C160:
/* 8013C160 00139240  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8013C164 00139244  38 60 00 00 */	li r3, 0x0
/* 8013C168 00139248  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 8013C16C 0013924C  41 82 00 14 */	beq .L_8013C180
/* 8013C170 00139250  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 8013C174 00139254  28 00 00 00 */	cmplwi r0, 0x0
/* 8013C178 00139258  41 82 00 08 */	beq .L_8013C180
/* 8013C17C 0013925C  38 60 00 01 */	li r3, 0x1
.L_8013C180:
/* 8013C180 00139260  98 7E 00 10 */	stb r3, 0x10(r30)
/* 8013C184 00139264  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013C188 00139268  D0 1E 00 90 */	stfs f0, 0x90(r30)
/* 8013C18C 0013926C  4B EF 4A FD */	bl xurand__Fv
/* 8013C190 00139270  FC 20 08 50 */	fneg f1, f1
/* 8013C194 00139274  C0 02 A4 54 */	lfs f0, "@909"@sda21(r2)
/* 8013C198 00139278  EC 00 00 78 */	fmsubs f0, f0, f1, f0
/* 8013C19C 0013927C  FC 00 00 1E */	fctiwz f0, f0
/* 8013C1A0 00139280  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8013C1A4 00139284  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8013C1A8 00139288  90 1E 00 94 */	stw r0, 0x94(r30)
/* 8013C1AC 0013928C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013C1B0 00139290  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013C1B4 00139294  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013C1B8 00139298  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013C1BC 0013929C  7C 08 03 A6 */	mtlr r0
/* 8013C1C0 001392A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8013C1C4 001392A4  4E 80 00 20 */	blr
.endfn load__13z_disco_floorFR19z_disco_floor_asset

# z_disco_floor::setup()
.fn setup__13z_disco_floorFv, global
/* 8013C1C8 001392A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013C1CC 001392AC  7C 08 02 A6 */	mflr r0
/* 8013C1D0 001392B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013C1D4 001392B4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8013C1D8 001392B8  7C 7F 1B 78 */	mr r31, r3
/* 8013C1DC 001392BC  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8013C1E0 001392C0  90 0D 96 60 */	stw r0, "current_disco_floor__25@unnamed@zDiscoFloor_cpp@"@sda21(r13)
/* 8013C1E4 001392C4  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8013C1E8 001392C8  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8013C1EC 001392CC  90 03 00 3C */	stw r0, 0x3c(r3)
/* 8013C1F0 001392D0  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8013C1F4 001392D4  28 00 00 00 */	cmplwi r0, 0x0
/* 8013C1F8 001392D8  40 82 00 24 */	bne .L_8013C21C
/* 8013C1FC 001392DC  38 00 00 00 */	li r0, 0x0
/* 8013C200 001392E0  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8013C204 001392E4  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8013C208 001392E8  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8013C20C 001392EC  48 00 01 89 */	bl reset__13z_disco_floorFv
/* 8013C210 001392F0  7F E3 FB 78 */	mr r3, r31
/* 8013C214 001392F4  48 00 01 7D */	bl "add_tweaks__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"
/* 8013C218 001392F8  48 00 01 64 */	b .L_8013C37C
.L_8013C21C:
/* 8013C21C 001392FC  1F 80 00 18 */	mulli r28, r0, 0x18
/* 8013C220 00139300  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8013C224 00139304  38 A0 00 00 */	li r5, 0x0
/* 8013C228 00139308  1C 9C 00 03 */	mulli r4, r28, 0x3
/* 8013C22C 0013930C  4B EF 77 15 */	bl xMemAlloc__FUiUii
/* 8013C230 00139310  7F FD FB 78 */	mr r29, r31
/* 8013C234 00139314  7C 7E 1B 78 */	mr r30, r3
/* 8013C238 00139318  3B 60 00 00 */	li r27, 0x0
.L_8013C23C:
/* 8013C23C 0013931C  93 DD 00 30 */	stw r30, 0x30(r29)
/* 8013C240 00139320  7F DE E2 14 */	add r30, r30, r28
/* 8013C244 00139324  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8013C248 00139328  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 8013C24C 0013932C  80 BF 00 3C */	lwz r5, 0x3c(r31)
/* 8013C250 00139330  4B FF EE 91 */	bl "find_tiles__25@unnamed@zDiscoFloor_cpp@FPCcPQ213z_disco_floor9tile_dataUl"
/* 8013C254 00139334  3B 7B 00 01 */	addi r27, r27, 0x1
/* 8013C258 00139338  3B BD 00 04 */	addi r29, r29, 0x4
/* 8013C25C 0013933C  2C 1B 00 03 */	cmpwi r27, 0x3
/* 8013C260 00139340  41 80 FF DC */	blt .L_8013C23C
/* 8013C264 00139344  3B 60 00 00 */	li r27, 0x0
/* 8013C268 00139348  3B 80 00 00 */	li r28, 0x0
/* 8013C26C 0013934C  3B C0 00 04 */	li r30, 0x4
/* 8013C270 00139350  48 00 00 40 */	b .L_8013C2B0
.L_8013C274:
/* 8013C274 00139354  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8013C278 00139358  38 1C 00 04 */	addi r0, r28, 0x4
/* 8013C27C 0013935C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8013C280 00139360  83 A3 00 24 */	lwz r29, 0x24(r3)
/* 8013C284 00139364  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 8013C288 00139368  28 03 00 00 */	cmplwi r3, 0x0
/* 8013C28C 0013936C  40 82 00 10 */	bne .L_8013C29C
/* 8013C290 00139370  4B FF F6 C9 */	bl "get_damage_surface__25@unnamed@zDiscoFloor_cpp@Fv"
/* 8013C294 00139374  90 7D 00 30 */	stw r3, 0x30(r29)
/* 8013C298 00139378  48 00 00 10 */	b .L_8013C2A8
.L_8013C29C:
/* 8013C29C 0013937C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013C2A0 00139380  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8013C2A4 00139384  9B C3 00 08 */	stb r30, 0x8(r3)
.L_8013C2A8:
/* 8013C2A8 00139388  3B 9C 00 18 */	addi r28, r28, 0x18
/* 8013C2AC 0013938C  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8013C2B0:
/* 8013C2B0 00139390  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 8013C2B4 00139394  7C 1B 00 40 */	cmplw r27, r0
/* 8013C2B8 00139398  41 80 FF BC */	blt .L_8013C274
/* 8013C2BC 0013939C  38 80 00 10 */	li r4, 0x10
/* 8013C2C0 001393A0  38 E0 00 00 */	li r7, 0x0
/* 8013C2C4 001393A4  38 A0 00 00 */	li r5, 0x0
/* 8013C2C8 001393A8  48 00 00 1C */	b .L_8013C2E4
.L_8013C2CC:
/* 8013C2CC 001393AC  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8013C2D0 001393B0  38 05 00 04 */	addi r0, r5, 0x4
/* 8013C2D4 001393B4  38 A5 00 18 */	addi r5, r5, 0x18
/* 8013C2D8 001393B8  38 E7 00 01 */	addi r7, r7, 0x1
/* 8013C2DC 001393BC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8013C2E0 001393C0  90 83 00 D8 */	stw r4, 0xd8(r3)
.L_8013C2E4:
/* 8013C2E4 001393C4  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 8013C2E8 001393C8  7C 07 00 40 */	cmplw r7, r0
/* 8013C2EC 001393CC  41 80 FF E0 */	blt .L_8013C2CC
/* 8013C2F0 001393D0  38 E0 00 00 */	li r7, 0x0
/* 8013C2F4 001393D4  38 A0 00 00 */	li r5, 0x0
/* 8013C2F8 001393D8  48 00 00 1C */	b .L_8013C314
.L_8013C2FC:
/* 8013C2FC 001393DC  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8013C300 001393E0  38 05 00 04 */	addi r0, r5, 0x4
/* 8013C304 001393E4  38 A5 00 18 */	addi r5, r5, 0x18
/* 8013C308 001393E8  38 E7 00 01 */	addi r7, r7, 0x1
/* 8013C30C 001393EC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8013C310 001393F0  90 83 00 D8 */	stw r4, 0xd8(r3)
.L_8013C314:
/* 8013C314 001393F4  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 8013C318 001393F8  7C 07 00 40 */	cmplw r7, r0
/* 8013C31C 001393FC  41 80 FF E0 */	blt .L_8013C2FC
/* 8013C320 00139400  38 DF 00 08 */	addi r6, r31, 0x8
/* 8013C324 00139404  38 E0 00 00 */	li r7, 0x0
/* 8013C328 00139408  38 A0 00 00 */	li r5, 0x0
/* 8013C32C 0013940C  48 00 00 1C */	b .L_8013C348
.L_8013C330:
/* 8013C330 00139410  80 66 00 30 */	lwz r3, 0x30(r6)
/* 8013C334 00139414  38 05 00 04 */	addi r0, r5, 0x4
/* 8013C338 00139418  38 A5 00 18 */	addi r5, r5, 0x18
/* 8013C33C 0013941C  38 E7 00 01 */	addi r7, r7, 0x1
/* 8013C340 00139420  7C 63 00 2E */	lwzx r3, r3, r0
/* 8013C344 00139424  90 83 00 D8 */	stw r4, 0xd8(r3)
.L_8013C348:
/* 8013C348 00139428  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 8013C34C 0013942C  7C 07 00 40 */	cmplw r7, r0
/* 8013C350 00139430  41 80 FF E0 */	blt .L_8013C330
/* 8013C354 00139434  7F E3 FB 78 */	mr r3, r31
/* 8013C358 00139438  48 00 03 99 */	bl refresh_spheres__13z_disco_floorFv
/* 8013C35C 0013943C  7F E3 FB 78 */	mr r3, r31
/* 8013C360 00139440  48 00 05 61 */	bl refresh_bound__13z_disco_floorFv
/* 8013C364 00139444  7F E3 FB 78 */	mr r3, r31
/* 8013C368 00139448  48 00 08 19 */	bl refresh_cull_dist__13z_disco_floorFv
/* 8013C36C 0013944C  7F E3 FB 78 */	mr r3, r31
/* 8013C370 00139450  48 00 00 25 */	bl reset__13z_disco_floorFv
/* 8013C374 00139454  7F E3 FB 78 */	mr r3, r31
/* 8013C378 00139458  48 00 00 19 */	bl "add_tweaks__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"
.L_8013C37C:
/* 8013C37C 0013945C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8013C380 00139460  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013C384 00139464  7C 08 03 A6 */	mtlr r0
/* 8013C388 00139468  38 21 00 20 */	addi r1, r1, 0x20
/* 8013C38C 0013946C  4E 80 00 20 */	blr
.endfn setup__13z_disco_floorFv

# @unnamed@zDiscoFloor_cpp@::add_tweaks(z_disco_floor&)
.fn "add_tweaks__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor", local
/* 8013C390 00139470  4E 80 00 20 */	blr
.endfn "add_tweaks__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"

# z_disco_floor::reset()
.fn reset__13z_disco_floorFv, global
/* 8013C394 00139474  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013C398 00139478  7C 08 02 A6 */	mflr r0
/* 8013C39C 0013947C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013C3A0 00139480  38 00 00 00 */	li r0, 0x0
/* 8013C3A4 00139484  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013C3A8 00139488  7C 7F 1B 78 */	mr r31, r3
/* 8013C3AC 0013948C  98 03 00 12 */	stb r0, 0x12(r3)
/* 8013C3B0 00139490  38 00 00 01 */	li r0, 0x1
/* 8013C3B4 00139494  98 03 00 11 */	stb r0, 0x11(r3)
/* 8013C3B8 00139498  4B EF 48 D1 */	bl xurand__Fv
/* 8013C3BC 0013949C  C0 02 A4 84 */	lfs f0, "@1174"@sda21(r2)
/* 8013C3C0 001394A0  38 E0 00 00 */	li r7, 0x0
/* 8013C3C4 001394A4  7F E3 FB 78 */	mr r3, r31
/* 8013C3C8 001394A8  38 80 00 00 */	li r4, 0x0
/* 8013C3CC 001394AC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C3D0 001394B0  38 A0 00 01 */	li r5, 0x1
/* 8013C3D4 001394B4  D0 1F 00 74 */	stfs f0, 0x74(r31)
/* 8013C3D8 001394B8  80 DF 00 14 */	lwz r6, 0x14(r31)
/* 8013C3DC 001394BC  C0 06 00 0C */	lfs f0, 0xc(r6)
/* 8013C3E0 001394C0  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 8013C3E4 001394C4  80 DF 00 14 */	lwz r6, 0x14(r31)
/* 8013C3E8 001394C8  C0 06 00 10 */	lfs f0, 0x10(r6)
/* 8013C3EC 001394CC  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 8013C3F0 001394D0  90 FF 00 40 */	stw r7, 0x40(r31)
/* 8013C3F4 001394D4  80 DF 00 14 */	lwz r6, 0x14(r31)
/* 8013C3F8 001394D8  80 C6 00 28 */	lwz r6, 0x28(r6)
/* 8013C3FC 001394DC  38 06 FF FF */	addi r0, r6, -0x1
/* 8013C400 001394E0  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8013C404 001394E4  90 FF 00 50 */	stw r7, 0x50(r31)
/* 8013C408 001394E8  48 00 00 F5 */	bl set_state__13z_disco_floorFUlb
/* 8013C40C 001394EC  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8013C410 001394F0  38 80 00 00 */	li r4, 0x0
/* 8013C414 001394F4  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8013C418 001394F8  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 8013C41C 001394FC  41 82 00 14 */	beq .L_8013C430
/* 8013C420 00139500  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 8013C424 00139504  28 00 00 00 */	cmplwi r0, 0x0
/* 8013C428 00139508  41 82 00 08 */	beq .L_8013C430
/* 8013C42C 0013950C  38 80 00 01 */	li r4, 0x1
.L_8013C430:
/* 8013C430 00139510  98 9F 00 10 */	stb r4, 0x10(r31)
/* 8013C434 00139514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013C438 00139518  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013C43C 0013951C  7C 08 03 A6 */	mtlr r0
/* 8013C440 00139520  38 21 00 10 */	addi r1, r1, 0x10
/* 8013C444 00139524  4E 80 00 20 */	blr
.endfn reset__13z_disco_floorFv

# z_disco_floor::update(xScene&, float)
.fn update__13z_disco_floorFR6xScenef, global
/* 8013C448 00139528  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013C44C 0013952C  7C 08 02 A6 */	mflr r0
/* 8013C450 00139530  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013C454 00139534  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8013C458 00139538  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8013C45C 0013953C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013C460 00139540  7C 7F 1B 78 */	mr r31, r3
/* 8013C464 00139544  FF E0 08 90 */	fmr f31, f1
/* 8013C468 00139548  88 03 00 10 */	lbz r0, 0x10(r3)
/* 8013C46C 0013954C  28 00 00 00 */	cmplwi r0, 0x0
/* 8013C470 00139550  40 82 00 10 */	bne .L_8013C480
/* 8013C474 00139554  38 00 00 01 */	li r0, 0x1
/* 8013C478 00139558  98 1F 00 12 */	stb r0, 0x12(r31)
/* 8013C47C 0013955C  48 00 00 64 */	b .L_8013C4E0
.L_8013C480:
/* 8013C480 00139560  48 00 07 8D */	bl distance_cull__13z_disco_floorFv
/* 8013C484 00139564  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 8013C488 00139568  28 00 00 00 */	cmplwi r0, 0x0
/* 8013C48C 0013956C  40 82 00 54 */	bne .L_8013C4E0
/* 8013C490 00139570  FC 20 F8 90 */	fmr f1, f31
/* 8013C494 00139574  7F E3 FB 78 */	mr r3, r31
/* 8013C498 00139578  48 00 03 7D */	bl update_pulse__13z_disco_floorFf
/* 8013C49C 0013957C  C0 1F 00 90 */	lfs f0, 0x90(r31)
/* 8013C4A0 00139580  EC 00 F8 2A */	fadds f0, f0, f31
/* 8013C4A4 00139584  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 8013C4A8 00139588  C0 3F 00 5C */	lfs f1, 0x5c(r31)
/* 8013C4AC 0013958C  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 8013C4B0 00139590  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013C4B4 00139594  40 80 00 14 */	bge .L_8013C4C8
/* 8013C4B8 00139598  FC 20 F8 90 */	fmr f1, f31
/* 8013C4BC 0013959C  7F E3 FB 78 */	mr r3, r31
/* 8013C4C0 001395A0  4B FF F2 59 */	bl "update_transition__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf"
/* 8013C4C4 001395A4  FF E0 08 90 */	fmr f31, f1
.L_8013C4C8:
/* 8013C4C8 001395A8  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013C4CC 001395AC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8013C4D0 001395B0  40 81 00 10 */	ble .L_8013C4E0
/* 8013C4D4 001395B4  FC 20 F8 90 */	fmr f1, f31
/* 8013C4D8 001395B8  7F E3 FB 78 */	mr r3, r31
/* 8013C4DC 001395BC  4B FF F3 15 */	bl "update_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf"
.L_8013C4E0:
/* 8013C4E0 001395C0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8013C4E4 001395C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013C4E8 001395C8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8013C4EC 001395CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013C4F0 001395D0  7C 08 03 A6 */	mtlr r0
/* 8013C4F4 001395D4  38 21 00 20 */	addi r1, r1, 0x20
/* 8013C4F8 001395D8  4E 80 00 20 */	blr
.endfn update__13z_disco_floorFR6xScenef

# z_disco_floor::set_state(unsigned long, bool)
.fn set_state__13z_disco_floorFUlb, global
/* 8013C4FC 001395DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013C500 001395E0  7C 08 02 A6 */	mflr r0
/* 8013C504 001395E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013C508 001395E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013C50C 001395EC  7C 7F 1B 78 */	mr r31, r3
/* 8013C510 001395F0  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8013C514 001395F4  7C 04 00 40 */	cmplw r4, r0
/* 8013C518 001395F8  40 80 00 0C */	bge .L_8013C524
/* 8013C51C 001395FC  7C 04 03 78 */	mr r4, r0
/* 8013C520 00139600  48 00 00 14 */	b .L_8013C534
.L_8013C524:
/* 8013C524 00139604  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 8013C528 00139608  7C 04 00 40 */	cmplw r4, r0
/* 8013C52C 0013960C  40 81 00 08 */	ble .L_8013C534
/* 8013C530 00139610  7C 04 03 78 */	mr r4, r0
.L_8013C534:
/* 8013C534 00139614  54 A0 06 3F */	clrlwi. r0, r5, 24
/* 8013C538 00139618  41 82 00 50 */	beq .L_8013C588
/* 8013C53C 0013961C  90 9F 00 4C */	stw r4, 0x4c(r31)
/* 8013C540 00139620  90 9F 00 48 */	stw r4, 0x48(r31)
/* 8013C544 00139624  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 8013C548 00139628  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 8013C54C 0013962C  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8013C550 00139630  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 8013C554 00139634  54 00 10 3A */	slwi r0, r0, 2
/* 8013C558 00139638  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8013C55C 0013963C  7C 84 00 2E */	lwzx r4, r4, r0
/* 8013C560 00139640  80 BF 00 3C */	lwz r5, 0x3c(r31)
/* 8013C564 00139644  4B FF ED 25 */	bl "translate_mask__25@unnamed@zDiscoFloor_cpp@FPUcPCUcUl"
/* 8013C568 00139648  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8013C56C 0013964C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8013C570 00139650  4B FF F2 71 */	bl "state_byte_size__25@unnamed@zDiscoFloor_cpp@FUl"
/* 8013C574 00139654  7C 65 1B 78 */	mr r5, r3
/* 8013C578 00139658  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8013C57C 0013965C  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 8013C580 00139660  4B EC 6F C1 */	bl memcpy
/* 8013C584 00139664  48 00 00 2C */	b .L_8013C5B0
.L_8013C588:
/* 8013C588 00139668  90 9F 00 4C */	stw r4, 0x4c(r31)
/* 8013C58C 0013966C  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013C590 00139670  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 8013C594 00139674  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8013C598 00139678  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 8013C59C 0013967C  54 00 10 3A */	slwi r0, r0, 2
/* 8013C5A0 00139680  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8013C5A4 00139684  7C 84 00 2E */	lwzx r4, r4, r0
/* 8013C5A8 00139688  80 BF 00 3C */	lwz r5, 0x3c(r31)
/* 8013C5AC 0013968C  4B FF EC DD */	bl "translate_mask__25@unnamed@zDiscoFloor_cpp@FPUcPCUcUl"
.L_8013C5B0:
/* 8013C5B0 00139690  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013C5B4 00139694  7F E3 FB 78 */	mr r3, r31
/* 8013C5B8 00139698  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 8013C5BC 0013969C  4B FF ED 49 */	bl "refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor"
/* 8013C5C0 001396A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013C5C4 001396A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013C5C8 001396A8  7C 08 03 A6 */	mtlr r0
/* 8013C5CC 001396AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8013C5D0 001396B0  4E 80 00 20 */	blr
.endfn set_state__13z_disco_floorFUlb

# z_disco_floor::enable()
.fn enable__13z_disco_floorFv, global
/* 8013C5D4 001396B4  80 83 00 3C */	lwz r4, 0x3c(r3)
/* 8013C5D8 001396B8  7C 04 00 D0 */	neg r0, r4
/* 8013C5DC 001396BC  7C 00 23 78 */	or r0, r0, r4
/* 8013C5E0 001396C0  54 00 0F FE */	srwi r0, r0, 31
/* 8013C5E4 001396C4  98 03 00 10 */	stb r0, 0x10(r3)
/* 8013C5E8 001396C8  4E 80 00 20 */	blr
.endfn enable__13z_disco_floorFv

# z_disco_floor::disable()
.fn disable__13z_disco_floorFv, global
/* 8013C5EC 001396CC  38 00 00 00 */	li r0, 0x0
/* 8013C5F0 001396D0  98 03 00 10 */	stb r0, 0x10(r3)
/* 8013C5F4 001396D4  4E 80 00 20 */	blr
.endfn disable__13z_disco_floorFv

# z_disco_floor::set_state_range(int, int, bool)
.fn set_state_range__13z_disco_floorFiib, global
/* 8013C5F8 001396D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013C5FC 001396DC  7C 08 02 A6 */	mflr r0
/* 8013C600 001396E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013C604 001396E4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8013C608 001396E8  7C 9B 23 78 */	mr r27, r4
/* 8013C60C 001396EC  7C BC 2B 78 */	mr r28, r5
/* 8013C610 001396F0  7C 7F 1B 78 */	mr r31, r3
/* 8013C614 001396F4  7C DD 33 78 */	mr r29, r6
/* 8013C618 001396F8  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8013C61C 001396FC  7F 63 DB 78 */	mr r3, r27
/* 8013C620 00139700  80 A4 00 28 */	lwz r5, 0x28(r4)
/* 8013C624 00139704  38 80 00 00 */	li r4, 0x0
/* 8013C628 00139708  38 A5 FF FF */	addi r5, r5, -0x1
/* 8013C62C 0013970C  48 00 0A 09 */	bl "range_limit<i>__Fiii"
/* 8013C630 00139710  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8013C634 00139714  7C 7E 1B 78 */	mr r30, r3
/* 8013C638 00139718  7F 83 E3 78 */	mr r3, r28
/* 8013C63C 0013971C  80 A4 00 28 */	lwz r5, 0x28(r4)
/* 8013C640 00139720  7F 64 DB 78 */	mr r4, r27
/* 8013C644 00139724  38 A5 FF FF */	addi r5, r5, -0x1
/* 8013C648 00139728  48 00 09 ED */	bl "range_limit<i>__Fiii"
/* 8013C64C 0013972C  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 8013C650 00139730  7C 65 1B 78 */	mr r5, r3
/* 8013C654 00139734  7C 1E 00 40 */	cmplw r30, r0
/* 8013C658 00139738  40 82 00 10 */	bne .L_8013C668
/* 8013C65C 0013973C  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 8013C660 00139740  7C 05 00 40 */	cmplw r5, r0
/* 8013C664 00139744  41 82 00 68 */	beq .L_8013C6CC
.L_8013C668:
/* 8013C668 00139748  93 DF 00 40 */	stw r30, 0x40(r31)
/* 8013C66C 0013974C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8013C670 00139750  90 BF 00 44 */	stw r5, 0x44(r31)
/* 8013C674 00139754  41 82 00 30 */	beq .L_8013C6A4
/* 8013C678 00139758  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8013C67C 0013975C  7F C4 F3 78 */	mr r4, r30
/* 8013C680 00139760  48 00 09 95 */	bl "range_limit<Ul>__FUlUlUl"
/* 8013C684 00139764  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8013C688 00139768  7C 64 1B 78 */	mr r4, r3
/* 8013C68C 0013976C  7C 04 00 40 */	cmplw r4, r0
/* 8013C690 00139770  41 82 00 3C */	beq .L_8013C6CC
/* 8013C694 00139774  7F E3 FB 78 */	mr r3, r31
/* 8013C698 00139778  38 A0 00 01 */	li r5, 0x1
/* 8013C69C 0013977C  4B FF FE 61 */	bl set_state__13z_disco_floorFUlb
/* 8013C6A0 00139780  48 00 00 2C */	b .L_8013C6CC
.L_8013C6A4:
/* 8013C6A4 00139784  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8013C6A8 00139788  7F C4 F3 78 */	mr r4, r30
/* 8013C6AC 0013978C  48 00 09 69 */	bl "range_limit<Ul>__FUlUlUl"
/* 8013C6B0 00139790  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8013C6B4 00139794  7C 64 1B 78 */	mr r4, r3
/* 8013C6B8 00139798  7C 04 00 40 */	cmplw r4, r0
/* 8013C6BC 0013979C  41 82 00 10 */	beq .L_8013C6CC
/* 8013C6C0 001397A0  7F E3 FB 78 */	mr r3, r31
/* 8013C6C4 001397A4  38 A0 00 00 */	li r5, 0x0
/* 8013C6C8 001397A8  4B FF FE 35 */	bl set_state__13z_disco_floorFUlb
.L_8013C6CC:
/* 8013C6CC 001397AC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8013C6D0 001397B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013C6D4 001397B4  7C 08 03 A6 */	mtlr r0
/* 8013C6D8 001397B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8013C6DC 001397BC  4E 80 00 20 */	blr
.endfn set_state_range__13z_disco_floorFiib

# z_disco_floor::set_transition_delay(float)
.fn set_transition_delay__13z_disco_floorFf, global
/* 8013C6E0 001397C0  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 8013C6E4 001397C4  4E 80 00 20 */	blr
.endfn set_transition_delay__13z_disco_floorFf

# z_disco_floor::set_state_delay(float)
.fn set_state_delay__13z_disco_floorFf, global
/* 8013C6E8 001397C8  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 8013C6EC 001397CC  4E 80 00 20 */	blr
.endfn set_state_delay__13z_disco_floorFf

# z_disco_floor::refresh_spheres()
.fn refresh_spheres__13z_disco_floorFv, global
/* 8013C6F0 001397D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013C6F4 001397D4  7C 08 02 A6 */	mflr r0
/* 8013C6F8 001397D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013C6FC 001397DC  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 8013C700 001397E0  7C 7A 1B 78 */	mr r26, r3
/* 8013C704 001397E4  3B C0 00 00 */	li r30, 0x0
/* 8013C708 001397E8  7F 5F D3 78 */	mr r31, r26
.L_8013C70C:
/* 8013C70C 001397EC  80 1A 00 3C */	lwz r0, 0x3c(r26)
/* 8013C710 001397F0  83 BF 00 30 */	lwz r29, 0x30(r31)
/* 8013C714 001397F4  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8013C718 001397F8  7F 9D 02 14 */	add r28, r29, r0
/* 8013C71C 001397FC  48 00 00 CC */	b .L_8013C7E8
.L_8013C720:
/* 8013C720 00139800  80 7D 00 04 */	lwz r3, 0x4(r29)
/* 8013C724 00139804  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8013C728 00139808  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8013C72C 0013980C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013C730 00139810  4B F8 BA AD */	bl iModelCull__FP8RpAtomicP11RwMatrixTag
/* 8013C734 00139814  80 7D 00 04 */	lwz r3, 0x4(r29)
/* 8013C738 00139818  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013C73C 0013981C  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8013C740 00139820  C0 24 00 50 */	lfs f1, 0x50(r4)
/* 8013C744 00139824  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8013C748 00139828  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8013C74C 0013982C  3B 63 00 2C */	addi r27, r3, 0x2c
/* 8013C750 00139830  41 82 00 60 */	beq .L_8013C7B0
/* 8013C754 00139834  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 8013C758 00139838  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8013C75C 0013983C  4C 41 13 82 */	cror eq, gt, eq
/* 8013C760 00139840  40 82 00 24 */	bne .L_8013C784
/* 8013C764 00139844  C0 04 00 58 */	lfs f0, 0x58(r4)
/* 8013C768 00139848  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013C76C 0013984C  4C 41 13 82 */	cror eq, gt, eq
/* 8013C770 00139850  40 82 00 14 */	bne .L_8013C784
/* 8013C774 00139854  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8013C778 00139858  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C77C 0013985C  D0 1B 00 0C */	stfs f0, 0xc(r27)
/* 8013C780 00139860  48 00 00 30 */	b .L_8013C7B0
.L_8013C784:
/* 8013C784 00139864  C0 24 00 58 */	lfs f1, 0x58(r4)
/* 8013C788 00139868  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8013C78C 0013986C  4C 41 13 82 */	cror eq, gt, eq
/* 8013C790 00139870  40 82 00 14 */	bne .L_8013C7A4
/* 8013C794 00139874  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8013C798 00139878  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8013C79C 0013987C  D0 1B 00 0C */	stfs f0, 0xc(r27)
/* 8013C7A0 00139880  48 00 00 10 */	b .L_8013C7B0
.L_8013C7A4:
/* 8013C7A4 00139884  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8013C7A8 00139888  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C7AC 0013988C  D0 1B 00 0C */	stfs f0, 0xc(r27)
.L_8013C7B0:
/* 8013C7B0 00139890  7F 64 DB 78 */	mr r4, r27
/* 8013C7B4 00139894  38 7D 00 08 */	addi r3, r29, 0x8
/* 8013C7B8 00139898  4B EC EA AD */	bl __as__5xVec3FRC5xVec3
/* 8013C7BC 0013989C  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8013C7C0 001398A0  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 8013C7C4 001398A4  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 8013C7C8 001398A8  C0 02 A4 88 */	lfs f0, "@1260"@sda21(r2)
/* 8013C7CC 001398AC  EC 01 00 2A */	fadds f0, f1, f0
/* 8013C7D0 001398B0  D0 1D 00 0C */	stfs f0, 0xc(r29)
/* 8013C7D4 001398B4  C0 3D 00 14 */	lfs f1, 0x14(r29)
/* 8013C7D8 001398B8  C0 02 A4 88 */	lfs f0, "@1260"@sda21(r2)
/* 8013C7DC 001398BC  EC 01 00 2A */	fadds f0, f1, f0
/* 8013C7E0 001398C0  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 8013C7E4 001398C4  3B BD 00 18 */	addi r29, r29, 0x18
.L_8013C7E8:
/* 8013C7E8 001398C8  7C 1D E0 40 */	cmplw r29, r28
/* 8013C7EC 001398CC  40 82 FF 34 */	bne .L_8013C720
/* 8013C7F0 001398D0  3B DE 00 01 */	addi r30, r30, 0x1
/* 8013C7F4 001398D4  3B FF 00 04 */	addi r31, r31, 0x4
/* 8013C7F8 001398D8  2C 1E 00 03 */	cmpwi r30, 0x3
/* 8013C7FC 001398DC  41 80 FF 10 */	blt .L_8013C70C
/* 8013C800 001398E0  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 8013C804 001398E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013C808 001398E8  7C 08 03 A6 */	mtlr r0
/* 8013C80C 001398EC  38 21 00 20 */	addi r1, r1, 0x20
/* 8013C810 001398F0  4E 80 00 20 */	blr
.endfn refresh_spheres__13z_disco_floorFv

# z_disco_floor::update_pulse(float)
.fn update_pulse__13z_disco_floorFf, global
/* 8013C814 001398F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013C818 001398F8  7C 08 02 A6 */	mflr r0
/* 8013C81C 001398FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013C820 00139900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013C824 00139904  7C 7F 1B 78 */	mr r31, r3
/* 8013C828 00139908  C0 42 A4 84 */	lfs f2, "@1174"@sda21(r2)
/* 8013C82C 0013990C  C0 03 00 74 */	lfs f0, 0x74(r3)
/* 8013C830 00139910  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013C834 00139914  D0 03 00 74 */	stfs f0, 0x74(r3)
/* 8013C838 00139918  C0 23 00 74 */	lfs f1, 0x74(r3)
/* 8013C83C 0013991C  4B ED 1F B9 */	bl xrmod__Ff
/* 8013C840 00139920  D0 3F 00 74 */	stfs f1, 0x74(r31)
/* 8013C844 00139924  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 8013C848 00139928  4B F8 86 05 */	bl isin__Ff
/* 8013C84C 0013992C  C0 42 A4 8C */	lfs f2, "@1270"@sda21(r2)
/* 8013C850 00139930  C0 02 A4 88 */	lfs f0, "@1260"@sda21(r2)
/* 8013C854 00139934  EC 42 10 7A */	fmadds f2, f2, f1, f2
/* 8013C858 00139938  EC 00 00 BA */	fmadds f0, f0, f2, f0
/* 8013C85C 0013993C  D0 1F 00 78 */	stfs f0, 0x78(r31)
/* 8013C860 00139940  C0 3F 00 78 */	lfs f1, 0x78(r31)
/* 8013C864 00139944  C0 1F 00 8C */	lfs f0, 0x8c(r31)
/* 8013C868 00139948  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013C86C 0013994C  D0 1F 00 78 */	stfs f0, 0x78(r31)
/* 8013C870 00139950  C0 02 A4 90 */	lfs f0, "@1271"@sda21(r2)
/* 8013C874 00139954  EC 00 00 BA */	fmadds f0, f0, f2, f0
/* 8013C878 00139958  D0 1F 00 7C */	stfs f0, 0x7c(r31)
/* 8013C87C 0013995C  C0 3F 00 7C */	lfs f1, 0x7c(r31)
/* 8013C880 00139960  C0 1F 00 8C */	lfs f0, 0x8c(r31)
/* 8013C884 00139964  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013C888 00139968  D0 1F 00 7C */	stfs f0, 0x7c(r31)
/* 8013C88C 0013996C  C0 22 A4 98 */	lfs f1, "@1273"@sda21(r2)
/* 8013C890 00139970  C0 02 A4 94 */	lfs f0, "@1272"@sda21(r2)
/* 8013C894 00139974  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8013C898 00139978  D0 1F 00 80 */	stfs f0, 0x80(r31)
/* 8013C89C 0013997C  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 8013C8A0 00139980  C0 1F 00 8C */	lfs f0, 0x8c(r31)
/* 8013C8A4 00139984  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013C8A8 00139988  D0 1F 00 80 */	stfs f0, 0x80(r31)
/* 8013C8AC 0013998C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013C8B0 00139990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013C8B4 00139994  7C 08 03 A6 */	mtlr r0
/* 8013C8B8 00139998  38 21 00 10 */	addi r1, r1, 0x10
/* 8013C8BC 0013999C  4E 80 00 20 */	blr
.endfn update_pulse__13z_disco_floorFf

# z_disco_floor::refresh_bound()
.fn refresh_bound__13z_disco_floorFv, global
/* 8013C8C0 001399A0  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 8013C8C4 001399A4  7C 08 02 A6 */	mflr r0
/* 8013C8C8 001399A8  90 01 01 14 */	stw r0, 0x114(r1)
/* 8013C8CC 001399AC  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 8013C8D0 001399B0  F3 E1 01 08 */	psq_st f31, 0x108(r1), 0, qr0
/* 8013C8D4 001399B4  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 8013C8D8 001399B8  F3 C1 00 F8 */	psq_st f30, 0xf8(r1), 0, qr0
/* 8013C8DC 001399BC  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 8013C8E0 001399C0  F3 A1 00 E8 */	psq_st f29, 0xe8(r1), 0, qr0
/* 8013C8E4 001399C4  BF 41 00 C8 */	stmw r26, 0xc8(r1)
/* 8013C8E8 001399C8  3C 80 80 27 */	lis r4, "@1283"@ha
/* 8013C8EC 001399CC  7C 7F 1B 78 */	mr r31, r3
/* 8013C8F0 001399D0  38 C4 D0 BC */	addi r6, r4, "@1283"@l
/* 8013C8F4 001399D4  38 61 00 A4 */	addi r3, r1, 0xa4
/* 8013C8F8 001399D8  80 A6 00 00 */	lwz r5, 0x0(r6)
/* 8013C8FC 001399DC  80 86 00 04 */	lwz r4, 0x4(r6)
/* 8013C900 001399E0  80 06 00 08 */	lwz r0, 0x8(r6)
/* 8013C904 001399E4  90 A1 00 80 */	stw r5, 0x80(r1)
/* 8013C908 001399E8  90 81 00 84 */	stw r4, 0x84(r1)
/* 8013C90C 001399EC  90 01 00 88 */	stw r0, 0x88(r1)
/* 8013C910 001399F0  C0 22 A4 9C */	lfs f1, "@1329"@sda21(r2)
/* 8013C914 001399F4  4B ED FF 65 */	bl __as__5xVec3Ff
/* 8013C918 001399F8  3B A1 00 B0 */	addi r29, r1, 0xb0
/* 8013C91C 001399FC  C0 22 A4 A0 */	lfs f1, "@1330"@sda21(r2)
/* 8013C920 00139A00  7F A3 EB 78 */	mr r3, r29
/* 8013C924 00139A04  4B ED FF 55 */	bl __as__5xVec3Ff
/* 8013C928 00139A08  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8013C92C 00139A0C  3C 00 43 30 */	lis r0, 0x4330
/* 8013C930 00139A10  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 8013C934 00139A14  7F FE FB 78 */	mr r30, r31
/* 8013C938 00139A18  1C 03 00 03 */	mulli r0, r3, 0x3
/* 8013C93C 00139A1C  C8 22 A4 A8 */	lfd f1, "@1332"@sda21(r2)
/* 8013C940 00139A20  C0 42 A4 28 */	lfs f2, "@710"@sda21(r2)
/* 8013C944 00139A24  3B 80 00 00 */	li r28, 0x0
/* 8013C948 00139A28  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8013C94C 00139A2C  C8 01 00 C0 */	lfd f0, 0xc0(r1)
/* 8013C950 00139A30  EC 00 08 28 */	fsubs f0, f0, f1
/* 8013C954 00139A34  EF E2 00 24 */	fdivs f31, f2, f0
.L_8013C958:
/* 8013C958 00139A38  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 8013C95C 00139A3C  83 7E 00 30 */	lwz r27, 0x30(r30)
/* 8013C960 00139A40  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8013C964 00139A44  7F 5B 02 14 */	add r26, r27, r0
/* 8013C968 00139A48  48 00 00 40 */	b .L_8013C9A8
.L_8013C96C:
/* 8013C96C 00139A4C  FC 20 F8 90 */	fmr f1, f31
/* 8013C970 00139A50  38 61 00 5C */	addi r3, r1, 0x5c
/* 8013C974 00139A54  38 9B 00 08 */	addi r4, r27, 0x8
/* 8013C978 00139A58  4B EC E7 A9 */	bl __ml__5xVec3CFf
/* 8013C97C 00139A5C  38 61 00 80 */	addi r3, r1, 0x80
/* 8013C980 00139A60  38 81 00 5C */	addi r4, r1, 0x5c
/* 8013C984 00139A64  4B ED 8A C1 */	bl __apl__5xVec3FRC5xVec3
/* 8013C988 00139A68  38 61 00 8C */	addi r3, r1, 0x8c
/* 8013C98C 00139A6C  38 9B 00 08 */	addi r4, r27, 0x8
/* 8013C990 00139A70  4B FD 99 E1 */	bl xBoxFromSphere__FR4xBoxRC7xSphere
/* 8013C994 00139A74  38 61 00 A4 */	addi r3, r1, 0xa4
/* 8013C998 00139A78  38 81 00 8C */	addi r4, r1, 0x8c
/* 8013C99C 00139A7C  7C 65 1B 78 */	mr r5, r3
/* 8013C9A0 00139A80  4B EF 69 89 */	bl xBoxUnion__FR4xBoxRC4xBoxRC4xBox
/* 8013C9A4 00139A84  3B 7B 00 18 */	addi r27, r27, 0x18
.L_8013C9A8:
/* 8013C9A8 00139A88  7C 1B D0 40 */	cmplw r27, r26
/* 8013C9AC 00139A8C  40 82 FF C0 */	bne .L_8013C96C
/* 8013C9B0 00139A90  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8013C9B4 00139A94  3B DE 00 04 */	addi r30, r30, 0x4
/* 8013C9B8 00139A98  2C 1C 00 03 */	cmpwi r28, 0x3
/* 8013C9BC 00139A9C  41 80 FF 9C */	blt .L_8013C958
/* 8013C9C0 00139AA0  7F A5 EB 78 */	mr r5, r29
/* 8013C9C4 00139AA4  38 61 00 44 */	addi r3, r1, 0x44
/* 8013C9C8 00139AA8  38 81 00 A4 */	addi r4, r1, 0xa4
/* 8013C9CC 00139AAC  4B ED 8A 15 */	bl __pl__5xVec3CFRC5xVec3
/* 8013C9D0 00139AB0  C0 22 A4 8C */	lfs f1, "@1270"@sda21(r2)
/* 8013C9D4 00139AB4  38 61 00 50 */	addi r3, r1, 0x50
/* 8013C9D8 00139AB8  38 81 00 44 */	addi r4, r1, 0x44
/* 8013C9DC 00139ABC  4B EC E7 45 */	bl __ml__5xVec3CFf
/* 8013C9E0 00139AC0  80 E1 00 50 */	lwz r7, 0x50(r1)
/* 8013C9E4 00139AC4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8013C9E8 00139AC8  80 C1 00 54 */	lwz r6, 0x54(r1)
/* 8013C9EC 00139ACC  38 81 00 80 */	addi r4, r1, 0x80
/* 8013C9F0 00139AD0  80 01 00 58 */	lwz r0, 0x58(r1)
/* 8013C9F4 00139AD4  38 A1 00 74 */	addi r5, r1, 0x74
/* 8013C9F8 00139AD8  90 E1 00 74 */	stw r7, 0x74(r1)
/* 8013C9FC 00139ADC  90 C1 00 78 */	stw r6, 0x78(r1)
/* 8013CA00 00139AE0  90 01 00 7C */	stw r0, 0x7c(r1)
/* 8013CA04 00139AE4  4B ED 89 DD */	bl __pl__5xVec3CFRC5xVec3
/* 8013CA08 00139AE8  C0 22 A4 8C */	lfs f1, "@1270"@sda21(r2)
/* 8013CA0C 00139AEC  38 61 00 38 */	addi r3, r1, 0x38
/* 8013CA10 00139AF0  38 81 00 2C */	addi r4, r1, 0x2c
/* 8013CA14 00139AF4  4B EC E7 0D */	bl __ml__5xVec3CFf
/* 8013CA18 00139AF8  C3 E2 A4 7C */	lfs f31, "@919"@sda21(r2)
/* 8013CA1C 00139AFC  7F FE FB 78 */	mr r30, r31
/* 8013CA20 00139B00  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8013CA24 00139B04  3B 40 00 00 */	li r26, 0x0
/* 8013CA28 00139B08  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8013CA2C 00139B0C  FF C0 F8 90 */	fmr f30, f31
/* 8013CA30 00139B10  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8013CA34 00139B14  FF A0 F8 90 */	fmr f29, f31
/* 8013CA38 00139B18  90 81 00 68 */	stw r4, 0x68(r1)
/* 8013CA3C 00139B1C  90 61 00 6C */	stw r3, 0x6c(r1)
/* 8013CA40 00139B20  90 01 00 70 */	stw r0, 0x70(r1)
.L_8013CA44:
/* 8013CA44 00139B24  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 8013CA48 00139B28  83 7E 00 30 */	lwz r27, 0x30(r30)
/* 8013CA4C 00139B2C  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8013CA50 00139B30  7F 9B 02 14 */	add r28, r27, r0
/* 8013CA54 00139B34  48 00 00 8C */	b .L_8013CAE0
.L_8013CA58:
/* 8013CA58 00139B38  38 61 00 20 */	addi r3, r1, 0x20
/* 8013CA5C 00139B3C  38 9B 00 08 */	addi r4, r27, 0x8
/* 8013CA60 00139B40  38 A1 00 80 */	addi r5, r1, 0x80
/* 8013CA64 00139B44  4B EC E7 69 */	bl __mi__5xVec3CFRC5xVec3
/* 8013CA68 00139B48  38 61 00 20 */	addi r3, r1, 0x20
/* 8013CA6C 00139B4C  4B EC E7 3D */	bl length__5xVec3CFv
/* 8013CA70 00139B50  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 8013CA74 00139B54  EC 00 08 2A */	fadds f0, f0, f1
/* 8013CA78 00139B58  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8013CA7C 00139B5C  40 80 00 08 */	bge .L_8013CA84
/* 8013CA80 00139B60  FF E0 00 90 */	fmr f31, f0
.L_8013CA84:
/* 8013CA84 00139B64  38 61 00 14 */	addi r3, r1, 0x14
/* 8013CA88 00139B68  38 9B 00 08 */	addi r4, r27, 0x8
/* 8013CA8C 00139B6C  38 A1 00 74 */	addi r5, r1, 0x74
/* 8013CA90 00139B70  4B EC E7 3D */	bl __mi__5xVec3CFRC5xVec3
/* 8013CA94 00139B74  38 61 00 14 */	addi r3, r1, 0x14
/* 8013CA98 00139B78  4B EC E7 11 */	bl length__5xVec3CFv
/* 8013CA9C 00139B7C  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 8013CAA0 00139B80  EC 00 08 2A */	fadds f0, f0, f1
/* 8013CAA4 00139B84  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8013CAA8 00139B88  40 80 00 08 */	bge .L_8013CAB0
/* 8013CAAC 00139B8C  FF C0 00 90 */	fmr f30, f0
.L_8013CAB0:
/* 8013CAB0 00139B90  38 61 00 08 */	addi r3, r1, 0x8
/* 8013CAB4 00139B94  38 9B 00 08 */	addi r4, r27, 0x8
/* 8013CAB8 00139B98  38 A1 00 68 */	addi r5, r1, 0x68
/* 8013CABC 00139B9C  4B EC E7 11 */	bl __mi__5xVec3CFRC5xVec3
/* 8013CAC0 00139BA0  38 61 00 08 */	addi r3, r1, 0x8
/* 8013CAC4 00139BA4  4B EC E6 E5 */	bl length__5xVec3CFv
/* 8013CAC8 00139BA8  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 8013CACC 00139BAC  EC 00 08 2A */	fadds f0, f0, f1
/* 8013CAD0 00139BB0  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8013CAD4 00139BB4  40 80 00 08 */	bge .L_8013CADC
/* 8013CAD8 00139BB8  FF A0 00 90 */	fmr f29, f0
.L_8013CADC:
/* 8013CADC 00139BBC  3B 7B 00 18 */	addi r27, r27, 0x18
.L_8013CAE0:
/* 8013CAE0 00139BC0  7C 1B E0 40 */	cmplw r27, r28
/* 8013CAE4 00139BC4  40 82 FF 74 */	bne .L_8013CA58
/* 8013CAE8 00139BC8  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8013CAEC 00139BCC  3B DE 00 04 */	addi r30, r30, 0x4
/* 8013CAF0 00139BD0  2C 1A 00 03 */	cmpwi r26, 0x3
/* 8013CAF4 00139BD4  41 80 FF 50 */	blt .L_8013CA44
/* 8013CAF8 00139BD8  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8013CAFC 00139BDC  4C 40 13 82 */	cror eq, lt, eq
/* 8013CB00 00139BE0  40 82 00 24 */	bne .L_8013CB24
/* 8013CB04 00139BE4  FC 1F E8 40 */	fcmpo cr0, f31, f29
/* 8013CB08 00139BE8  4C 40 13 82 */	cror eq, lt, eq
/* 8013CB0C 00139BEC  40 82 00 18 */	bne .L_8013CB24
/* 8013CB10 00139BF0  38 7F 00 64 */	addi r3, r31, 0x64
/* 8013CB14 00139BF4  38 81 00 80 */	addi r4, r1, 0x80
/* 8013CB18 00139BF8  4B EC E7 4D */	bl __as__5xVec3FRC5xVec3
/* 8013CB1C 00139BFC  D3 FF 00 70 */	stfs f31, 0x70(r31)
/* 8013CB20 00139C00  48 00 00 34 */	b .L_8013CB54
.L_8013CB24:
/* 8013CB24 00139C04  FC 1E E8 40 */	fcmpo cr0, f30, f29
/* 8013CB28 00139C08  4C 40 13 82 */	cror eq, lt, eq
/* 8013CB2C 00139C0C  40 82 00 18 */	bne .L_8013CB44
/* 8013CB30 00139C10  38 7F 00 64 */	addi r3, r31, 0x64
/* 8013CB34 00139C14  38 81 00 74 */	addi r4, r1, 0x74
/* 8013CB38 00139C18  4B EC E7 2D */	bl __as__5xVec3FRC5xVec3
/* 8013CB3C 00139C1C  D3 DF 00 70 */	stfs f30, 0x70(r31)
/* 8013CB40 00139C20  48 00 00 14 */	b .L_8013CB54
.L_8013CB44:
/* 8013CB44 00139C24  38 7F 00 64 */	addi r3, r31, 0x64
/* 8013CB48 00139C28  38 81 00 68 */	addi r4, r1, 0x68
/* 8013CB4C 00139C2C  4B EC E7 19 */	bl __as__5xVec3FRC5xVec3
/* 8013CB50 00139C30  D3 BF 00 70 */	stfs f29, 0x70(r31)
.L_8013CB54:
/* 8013CB54 00139C34  E3 E1 01 08 */	psq_l f31, 0x108(r1), 0, qr0
/* 8013CB58 00139C38  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 8013CB5C 00139C3C  E3 C1 00 F8 */	psq_l f30, 0xf8(r1), 0, qr0
/* 8013CB60 00139C40  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 8013CB64 00139C44  E3 A1 00 E8 */	psq_l f29, 0xe8(r1), 0, qr0
/* 8013CB68 00139C48  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 8013CB6C 00139C4C  BB 41 00 C8 */	lmw r26, 0xc8(r1)
/* 8013CB70 00139C50  80 01 01 14 */	lwz r0, 0x114(r1)
/* 8013CB74 00139C54  7C 08 03 A6 */	mtlr r0
/* 8013CB78 00139C58  38 21 01 10 */	addi r1, r1, 0x110
/* 8013CB7C 00139C5C  4E 80 00 20 */	blr
.endfn refresh_bound__13z_disco_floorFv

# z_disco_floor::refresh_cull_dist()
.fn refresh_cull_dist__13z_disco_floorFv, global
/* 8013CB80 00139C60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013CB84 00139C64  7C 08 02 A6 */	mflr r0
/* 8013CB88 00139C68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013CB8C 00139C6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013CB90 00139C70  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8013CB94 00139C74  7C 7E 1B 78 */	mr r30, r3
/* 8013CB98 00139C78  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8013CB9C 00139C7C  28 00 00 00 */	cmplwi r0, 0x0
/* 8013CBA0 00139C80  40 82 00 14 */	bne .L_8013CBB4
/* 8013CBA4 00139C84  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013CBA8 00139C88  D0 1E 00 88 */	stfs f0, 0x88(r30)
/* 8013CBAC 00139C8C  D0 1E 00 84 */	stfs f0, 0x84(r30)
/* 8013CBB0 00139C90  48 00 00 44 */	b .L_8013CBF4
.L_8013CBB4:
/* 8013CBB4 00139C94  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8013CBB8 00139C98  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8013CBBC 00139C9C  4B F6 57 ED */	bl zLOD_Get__FP4xEnt
/* 8013CBC0 00139CA0  7C 7F 1B 79 */	mr. r31, r3
/* 8013CBC4 00139CA4  40 82 00 18 */	bne .L_8013CBDC
/* 8013CBC8 00139CA8  C0 02 A4 B0 */	lfs f0, "@1406"@sda21(r2)
/* 8013CBCC 00139CAC  D0 1E 00 84 */	stfs f0, 0x84(r30)
/* 8013CBD0 00139CB0  C0 02 A4 B4 */	lfs f0, "@1407"@sda21(r2)
/* 8013CBD4 00139CB4  D0 1E 00 88 */	stfs f0, 0x88(r30)
/* 8013CBD8 00139CB8  48 00 00 1C */	b .L_8013CBF4
.L_8013CBDC:
/* 8013CBDC 00139CBC  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 8013CBE0 00139CC0  4B EC DC 1D */	bl xsqrt__Ff
/* 8013CBE4 00139CC4  D0 3E 00 84 */	stfs f1, 0x84(r30)
/* 8013CBE8 00139CC8  C0 3F 00 04 */	lfs f1, 0x4(r31)
/* 8013CBEC 00139CCC  4B EC DC 11 */	bl xsqrt__Ff
/* 8013CBF0 00139CD0  D0 3E 00 88 */	stfs f1, 0x88(r30)
.L_8013CBF4:
/* 8013CBF4 00139CD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013CBF8 00139CD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013CBFC 00139CDC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8013CC00 00139CE0  7C 08 03 A6 */	mtlr r0
/* 8013CC04 00139CE4  38 21 00 10 */	addi r1, r1, 0x10
/* 8013CC08 00139CE8  4E 80 00 20 */	blr
.endfn refresh_cull_dist__13z_disco_floorFv

# z_disco_floor::distance_cull()
.fn distance_cull__13z_disco_floorFv, global
/* 8013CC0C 00139CEC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8013CC10 00139CF0  7C 08 02 A6 */	mflr r0
/* 8013CC14 00139CF4  3C 80 80 3C */	lis r4, globals@ha
/* 8013CC18 00139CF8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8013CC1C 00139CFC  38 A4 05 58 */	addi r5, r4, globals@l
/* 8013CC20 00139D00  38 A5 00 44 */	addi r5, r5, 0x44
/* 8013CC24 00139D04  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8013CC28 00139D08  7C 7F 1B 78 */	mr r31, r3
/* 8013CC2C 00139D0C  38 61 00 08 */	addi r3, r1, 0x8
/* 8013CC30 00139D10  38 9F 00 64 */	addi r4, r31, 0x64
/* 8013CC34 00139D14  4B EC E5 99 */	bl __mi__5xVec3CFRC5xVec3
/* 8013CC38 00139D18  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8013CC3C 00139D1C  38 61 00 14 */	addi r3, r1, 0x14
/* 8013CC40 00139D20  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8013CC44 00139D24  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8013CC48 00139D28  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8013CC4C 00139D2C  90 81 00 18 */	stw r4, 0x18(r1)
/* 8013CC50 00139D30  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8013CC54 00139D34  4B EC E5 55 */	bl length__5xVec3CFv
/* 8013CC58 00139D38  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8013CC5C 00139D3C  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 8013CC60 00139D40  EC 02 00 2A */	fadds f0, f2, f0
/* 8013CC64 00139D44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013CC68 00139D48  4C 41 13 82 */	cror eq, gt, eq
/* 8013CC6C 00139D4C  7C 00 00 26 */	mfcr r0
/* 8013CC70 00139D50  54 00 1F FE */	extrwi r0, r0, 1, 2
/* 8013CC74 00139D54  98 1F 00 12 */	stb r0, 0x12(r31)
/* 8013CC78 00139D58  C0 7F 00 84 */	lfs f3, 0x84(r31)
/* 8013CC7C 00139D5C  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 8013CC80 00139D60  C0 02 A4 B8 */	lfs f0, "@1419"@sda21(r2)
/* 8013CC84 00139D64  EC 43 10 2A */	fadds f2, f3, f2
/* 8013CC88 00139D68  EC 00 10 2A */	fadds f0, f0, f2
/* 8013CC8C 00139D6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013CC90 00139D70  4C 41 13 82 */	cror eq, gt, eq
/* 8013CC94 00139D74  7C 00 00 26 */	mfcr r0
/* 8013CC98 00139D78  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8013CC9C 00139D7C  54 00 1F FE */	extrwi r0, r0, 1, 2
/* 8013CCA0 00139D80  98 1F 00 13 */	stb r0, 0x13(r31)
/* 8013CCA4 00139D84  4C 40 13 82 */	cror eq, lt, eq
/* 8013CCA8 00139D88  40 82 00 10 */	bne .L_8013CCB8
/* 8013CCAC 00139D8C  C0 02 A4 28 */	lfs f0, "@710"@sda21(r2)
/* 8013CCB0 00139D90  D0 1F 00 8C */	stfs f0, 0x8c(r31)
/* 8013CCB4 00139D94  48 00 00 2C */	b .L_8013CCE0
.L_8013CCB8:
/* 8013CCB8 00139D98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013CCBC 00139D9C  4C 41 13 82 */	cror eq, gt, eq
/* 8013CCC0 00139DA0  40 82 00 10 */	bne .L_8013CCD0
/* 8013CCC4 00139DA4  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013CCC8 00139DA8  D0 1F 00 8C */	stfs f0, 0x8c(r31)
/* 8013CCCC 00139DAC  48 00 00 14 */	b .L_8013CCE0
.L_8013CCD0:
/* 8013CCD0 00139DB0  EC 00 08 28 */	fsubs f0, f0, f1
/* 8013CCD4 00139DB4  C0 22 A4 88 */	lfs f1, "@1260"@sda21(r2)
/* 8013CCD8 00139DB8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013CCDC 00139DBC  D0 1F 00 8C */	stfs f0, 0x8c(r31)
.L_8013CCE0:
/* 8013CCE0 00139DC0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013CCE4 00139DC4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8013CCE8 00139DC8  7C 08 03 A6 */	mtlr r0
/* 8013CCEC 00139DCC  38 21 00 30 */	addi r1, r1, 0x30
/* 8013CCF0 00139DD0  4E 80 00 20 */	blr
.endfn distance_cull__13z_disco_floorFv

# z_disco_floor::render(int)
.fn render__13z_disco_floorFi, global
/* 8013CCF4 00139DD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013CCF8 00139DD8  7C 08 02 A6 */	mflr r0
/* 8013CCFC 00139DDC  54 84 10 3A */	slwi r4, r4, 2
/* 8013CD00 00139DE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013CD04 00139DE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013CD08 00139DE8  3B E0 00 01 */	li r31, 0x1
/* 8013CD0C 00139DEC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013CD10 00139DF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013CD14 00139DF4  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8013CD18 00139DF8  7C 63 22 14 */	add r3, r3, r4
/* 8013CD1C 00139DFC  83 C3 00 30 */	lwz r30, 0x30(r3)
/* 8013CD20 00139E00  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8013CD24 00139E04  7F BE 02 14 */	add r29, r30, r0
/* 8013CD28 00139E08  48 00 00 54 */	b .L_8013CD7C
.L_8013CD2C:
/* 8013CD2C 00139E0C  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 8013CD30 00139E10  88 03 00 18 */	lbz r0, 0x18(r3)
/* 8013CD34 00139E14  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8013CD38 00139E18  40 82 00 0C */	bne .L_8013CD44
/* 8013CD3C 00139E1C  9B FE 00 00 */	stb r31, 0x0(r30)
/* 8013CD40 00139E20  48 00 00 38 */	b .L_8013CD78
.L_8013CD44:
/* 8013CD44 00139E24  38 7E 00 08 */	addi r3, r30, 0x8
/* 8013CD48 00139E28  4B F8 B5 CD */	bl iModelSphereCull__FP7xSphere
/* 8013CD4C 00139E2C  7C 03 00 D0 */	neg r0, r3
/* 8013CD50 00139E30  7C 00 1B 78 */	or r0, r0, r3
/* 8013CD54 00139E34  54 00 0F FE */	srwi r0, r0, 31
/* 8013CD58 00139E38  98 1E 00 00 */	stb r0, 0x0(r30)
/* 8013CD5C 00139E3C  88 1E 00 00 */	lbz r0, 0x0(r30)
/* 8013CD60 00139E40  28 00 00 00 */	cmplwi r0, 0x0
/* 8013CD64 00139E44  40 82 00 14 */	bne .L_8013CD78
/* 8013CD68 00139E48  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 8013CD6C 00139E4C  38 9E 00 08 */	addi r4, r30, 0x8
/* 8013CD70 00139E50  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013CD74 00139E54  4B FF EE 9D */	bl "render_model__25@unnamed@zDiscoFloor_cpp@FP14xModelInstanceRC7xSphere"
.L_8013CD78:
/* 8013CD78 00139E58  3B DE 00 18 */	addi r30, r30, 0x18
.L_8013CD7C:
/* 8013CD7C 00139E5C  7C 1E E8 40 */	cmplw r30, r29
/* 8013CD80 00139E60  40 82 FF AC */	bne .L_8013CD2C
/* 8013CD84 00139E64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013CD88 00139E68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013CD8C 00139E6C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013CD90 00139E70  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013CD94 00139E74  7C 08 03 A6 */	mtlr r0
/* 8013CD98 00139E78  38 21 00 20 */	addi r1, r1, 0x20
/* 8013CD9C 00139E7C  4E 80 00 20 */	blr
.endfn render__13z_disco_floorFi

# z_disco_floor::effects_render(int)
.fn effects_render__13z_disco_floorFi, global
/* 8013CDA0 00139E80  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8013CDA4 00139E84  7C 08 02 A6 */	mflr r0
/* 8013CDA8 00139E88  90 01 00 84 */	stw r0, 0x84(r1)
/* 8013CDAC 00139E8C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8013CDB0 00139E90  F3 E1 00 78 */	psq_st f31, 0x78(r1), 0, qr0
/* 8013CDB4 00139E94  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8013CDB8 00139E98  F3 C1 00 68 */	psq_st f30, 0x68(r1), 0, qr0
/* 8013CDBC 00139E9C  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 8013CDC0 00139EA0  F3 A1 00 58 */	psq_st f29, 0x58(r1), 0, qr0
/* 8013CDC4 00139EA4  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 8013CDC8 00139EA8  F3 81 00 48 */	psq_st f28, 0x48(r1), 0, qr0
/* 8013CDCC 00139EAC  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 8013CDD0 00139EB0  F3 61 00 38 */	psq_st f27, 0x38(r1), 0, qr0
/* 8013CDD4 00139EB4  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8013CDD8 00139EB8  7C 79 1B 78 */	mr r25, r3
/* 8013CDDC 00139EBC  54 84 10 3A */	slwi r4, r4, 2
/* 8013CDE0 00139EC0  7C 79 22 14 */	add r3, r25, r4
/* 8013CDE4 00139EC4  C0 02 A4 7C */	lfs f0, "@919"@sda21(r2)
/* 8013CDE8 00139EC8  C0 63 00 78 */	lfs f3, 0x78(r3)
/* 8013CDEC 00139ECC  FC 00 18 00 */	fcmpu cr0, f0, f3
/* 8013CDF0 00139ED0  41 82 00 DC */	beq .L_8013CECC
/* 8013CDF4 00139ED4  C0 02 A4 88 */	lfs f0, "@1260"@sda21(r2)
/* 8013CDF8 00139ED8  FC 20 18 50 */	fneg f1, f3
/* 8013CDFC 00139EDC  C0 42 A4 BC */	lfs f2, "@1461"@sda21(r2)
/* 8013CE00 00139EE0  3B E4 00 30 */	addi r31, r4, 0x30
/* 8013CE04 00139EE4  EF A0 00 F2 */	fmuls f29, f0, f3
/* 8013CE08 00139EE8  C0 02 A4 94 */	lfs f0, "@1272"@sda21(r2)
/* 8013CE0C 00139EEC  EF C2 00 72 */	fmuls f30, f2, f1
/* 8013CE10 00139EF0  EF 80 00 F2 */	fmuls f28, f0, f3
/* 8013CE14 00139EF4  3B C0 00 00 */	li r30, 0x0
/* 8013CE18 00139EF8  FF 60 E8 90 */	fmr f27, f29
.L_8013CE1C:
/* 8013CE1C 00139EFC  80 19 00 3C */	lwz r0, 0x3c(r25)
/* 8013CE20 00139F00  3B A0 00 00 */	li r29, 0x0
/* 8013CE24 00139F04  C0 22 A4 C0 */	lfs f1, "@1462"@sda21(r2)
/* 8013CE28 00139F08  C0 02 A4 8C */	lfs f0, "@1270"@sda21(r2)
/* 8013CE2C 00139F0C  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8013CE30 00139F10  7F 99 F8 2E */	lwzx r28, r25, r31
/* 8013CE34 00139F14  EF E1 07 3A */	fmadds f31, f1, f28, f0
/* 8013CE38 00139F18  7F 7C 02 14 */	add r27, r28, r0
/* 8013CE3C 00139F1C  48 00 00 64 */	b .L_8013CEA0
.L_8013CE40:
/* 8013CE40 00139F20  88 1C 00 00 */	lbz r0, 0x0(r28)
/* 8013CE44 00139F24  28 00 00 00 */	cmplwi r0, 0x0
/* 8013CE48 00139F28  40 82 00 54 */	bne .L_8013CE9C
/* 8013CE4C 00139F2C  80 7C 00 04 */	lwz r3, 0x4(r28)
/* 8013CE50 00139F30  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013CE54 00139F34  83 43 00 10 */	lwz r26, 0x10(r3)
/* 8013CE58 00139F38  7C 1D D0 40 */	cmplw r29, r26
/* 8013CE5C 00139F3C  41 82 00 2C */	beq .L_8013CE88
/* 8013CE60 00139F40  28 1D 00 00 */	cmplwi r29, 0x0
/* 8013CE64 00139F44  41 82 00 0C */	beq .L_8013CE70
/* 8013CE68 00139F48  7F A3 EB 78 */	mr r3, r29
/* 8013CE6C 00139F4C  4B F8 C5 05 */	bl iModelResetMaterial__FP8RpAtomic
.L_8013CE70:
/* 8013CE70 00139F50  FC 00 F8 1E */	fctiwz f0, f31
/* 8013CE74 00139F54  7F 43 D3 78 */	mr r3, r26
/* 8013CE78 00139F58  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8013CE7C 00139F5C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8013CE80 00139F60  4B F8 C3 6D */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 8013CE84 00139F64  7F 5D D3 78 */	mr r29, r26
.L_8013CE88:
/* 8013CE88 00139F68  80 7C 00 04 */	lwz r3, 0x4(r28)
/* 8013CE8C 00139F6C  FC 20 D8 90 */	fmr f1, f27
/* 8013CE90 00139F70  38 9C 00 08 */	addi r4, r28, 0x8
/* 8013CE94 00139F74  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013CE98 00139F78  4B FF EE 29 */	bl "render_model__25@unnamed@zDiscoFloor_cpp@FP14xModelInstanceR7xSpheref"
.L_8013CE9C:
/* 8013CE9C 00139F7C  3B 9C 00 18 */	addi r28, r28, 0x18
.L_8013CEA0:
/* 8013CEA0 00139F80  7C 1C D8 40 */	cmplw r28, r27
/* 8013CEA4 00139F84  40 82 FF 9C */	bne .L_8013CE40
/* 8013CEA8 00139F88  28 1D 00 00 */	cmplwi r29, 0x0
/* 8013CEAC 00139F8C  41 82 00 0C */	beq .L_8013CEB8
/* 8013CEB0 00139F90  7F A3 EB 78 */	mr r3, r29
/* 8013CEB4 00139F94  4B F8 C4 BD */	bl iModelResetMaterial__FP8RpAtomic
.L_8013CEB8:
/* 8013CEB8 00139F98  3B DE 00 01 */	addi r30, r30, 0x1
/* 8013CEBC 00139F9C  EF 9C F0 2A */	fadds f28, f28, f30
/* 8013CEC0 00139FA0  2C 1E 00 02 */	cmpwi r30, 0x2
/* 8013CEC4 00139FA4  EF 7B E8 2A */	fadds f27, f27, f29
/* 8013CEC8 00139FA8  41 80 FF 54 */	blt .L_8013CE1C
.L_8013CECC:
/* 8013CECC 00139FAC  E3 E1 00 78 */	psq_l f31, 0x78(r1), 0, qr0
/* 8013CED0 00139FB0  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8013CED4 00139FB4  E3 C1 00 68 */	psq_l f30, 0x68(r1), 0, qr0
/* 8013CED8 00139FB8  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8013CEDC 00139FBC  E3 A1 00 58 */	psq_l f29, 0x58(r1), 0, qr0
/* 8013CEE0 00139FC0  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8013CEE4 00139FC4  E3 81 00 48 */	psq_l f28, 0x48(r1), 0, qr0
/* 8013CEE8 00139FC8  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 8013CEEC 00139FCC  E3 61 00 38 */	psq_l f27, 0x38(r1), 0, qr0
/* 8013CEF0 00139FD0  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 8013CEF4 00139FD4  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8013CEF8 00139FD8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8013CEFC 00139FDC  7C 08 03 A6 */	mtlr r0
/* 8013CF00 00139FE0  38 21 00 80 */	addi r1, r1, 0x80
/* 8013CF04 00139FE4  4E 80 00 20 */	blr
.endfn effects_render__13z_disco_floorFi

# z_disco_floor::event_handler(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn event_handler__13z_disco_floorFP5xBaseP5xBaseUiPCfP5xBase, global
/* 8013CF08 00139FE8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013CF0C 00139FEC  7C 08 02 A6 */	mflr r0
/* 8013CF10 00139FF0  2C 05 01 A6 */	cmpwi r5, 0x1a6
/* 8013CF14 00139FF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013CF18 00139FF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013CF1C 00139FFC  7C 9F 23 78 */	mr r31, r4
/* 8013CF20 0013A000  41 82 00 74 */	beq .L_8013CF94
/* 8013CF24 0013A004  40 80 00 28 */	bge .L_8013CF4C
/* 8013CF28 0013A008  2C 05 00 02 */	cmpwi r5, 0x2
/* 8013CF2C 0013A00C  41 82 00 5C */	beq .L_8013CF88
/* 8013CF30 0013A010  40 80 00 10 */	bge .L_8013CF40
/* 8013CF34 0013A014  2C 05 00 01 */	cmpwi r5, 0x1
/* 8013CF38 0013A018  40 80 00 44 */	bge .L_8013CF7C
/* 8013CF3C 0013A01C  48 00 00 C0 */	b .L_8013CFFC
.L_8013CF40:
/* 8013CF40 0013A020  2C 05 00 0A */	cmpwi r5, 0xa
/* 8013CF44 0013A024  41 82 00 2C */	beq .L_8013CF70
/* 8013CF48 0013A028  48 00 00 B4 */	b .L_8013CFFC
.L_8013CF4C:
/* 8013CF4C 0013A02C  2C 05 01 B3 */	cmpwi r5, 0x1b3
/* 8013CF50 0013A030  41 82 00 90 */	beq .L_8013CFE0
/* 8013CF54 0013A034  40 80 00 10 */	bge .L_8013CF64
/* 8013CF58 0013A038  2C 05 01 B2 */	cmpwi r5, 0x1b2
/* 8013CF5C 0013A03C  40 80 00 54 */	bge .L_8013CFB0
/* 8013CF60 0013A040  48 00 00 9C */	b .L_8013CFFC
.L_8013CF64:
/* 8013CF64 0013A044  2C 05 01 B5 */	cmpwi r5, 0x1b5
/* 8013CF68 0013A048  40 80 00 94 */	bge .L_8013CFFC
/* 8013CF6C 0013A04C  48 00 00 84 */	b .L_8013CFF0
.L_8013CF70:
/* 8013CF70 0013A050  7F E3 FB 78 */	mr r3, r31
/* 8013CF74 0013A054  4B FF F4 21 */	bl reset__13z_disco_floorFv
/* 8013CF78 0013A058  48 00 00 84 */	b .L_8013CFFC
.L_8013CF7C:
/* 8013CF7C 0013A05C  7F E3 FB 78 */	mr r3, r31
/* 8013CF80 0013A060  4B FF F6 55 */	bl enable__13z_disco_floorFv
/* 8013CF84 0013A064  48 00 00 78 */	b .L_8013CFFC
.L_8013CF88:
/* 8013CF88 0013A068  7F E3 FB 78 */	mr r3, r31
/* 8013CF8C 0013A06C  4B FF F6 61 */	bl disable__13z_disco_floorFv
/* 8013CF90 0013A070  48 00 00 6C */	b .L_8013CFFC
.L_8013CF94:
/* 8013CF94 0013A074  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 8013CF98 0013A078  48 0B 04 45 */	bl __cvt_fp2unsigned
/* 8013CF9C 0013A07C  7C 64 1B 78 */	mr r4, r3
/* 8013CFA0 0013A080  7F E3 FB 78 */	mr r3, r31
/* 8013CFA4 0013A084  38 A0 00 00 */	li r5, 0x0
/* 8013CFA8 0013A088  4B FF F5 55 */	bl set_state__13z_disco_floorFUlb
/* 8013CFAC 0013A08C  48 00 00 50 */	b .L_8013CFFC
.L_8013CFB0:
/* 8013CFB0 0013A090  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 8013CFB4 0013A094  7F E3 FB 78 */	mr r3, r31
/* 8013CFB8 0013A098  C0 06 00 04 */	lfs f0, 0x4(r6)
/* 8013CFBC 0013A09C  38 C0 00 00 */	li r6, 0x0
/* 8013CFC0 0013A0A0  FC 20 08 1E */	fctiwz f1, f1
/* 8013CFC4 0013A0A4  FC 00 00 1E */	fctiwz f0, f0
/* 8013CFC8 0013A0A8  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 8013CFCC 0013A0AC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8013CFD0 0013A0B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8013CFD4 0013A0B4  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 8013CFD8 0013A0B8  4B FF F6 21 */	bl set_state_range__13z_disco_floorFiib
/* 8013CFDC 0013A0BC  48 00 00 20 */	b .L_8013CFFC
.L_8013CFE0:
/* 8013CFE0 0013A0C0  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 8013CFE4 0013A0C4  7F E3 FB 78 */	mr r3, r31
/* 8013CFE8 0013A0C8  4B FF F7 01 */	bl set_state_delay__13z_disco_floorFf
/* 8013CFEC 0013A0CC  48 00 00 10 */	b .L_8013CFFC
.L_8013CFF0:
/* 8013CFF0 0013A0D0  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 8013CFF4 0013A0D4  7F E3 FB 78 */	mr r3, r31
/* 8013CFF8 0013A0D8  4B FF F6 E9 */	bl set_transition_delay__13z_disco_floorFf
.L_8013CFFC:
/* 8013CFFC 0013A0DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013D000 0013A0E0  38 60 00 01 */	li r3, 0x1
/* 8013D004 0013A0E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013D008 0013A0E8  7C 08 03 A6 */	mtlr r0
/* 8013D00C 0013A0EC  38 21 00 20 */	addi r1, r1, 0x20
/* 8013D010 0013A0F0  4E 80 00 20 */	blr
.endfn event_handler__13z_disco_floorFP5xBaseP5xBaseUiPCfP5xBase

# range_limit<unsigned long>(unsigned long, unsigned long, unsigned long)
.fn "range_limit<Ul>__FUlUlUl", weak
/* 8013D014 0013A0F4  7C 03 20 40 */	cmplw r3, r4
/* 8013D018 0013A0F8  41 81 00 0C */	bgt .L_8013D024
/* 8013D01C 0013A0FC  7C 83 23 78 */	mr r3, r4
/* 8013D020 0013A100  4E 80 00 20 */	blr
.L_8013D024:
/* 8013D024 0013A104  7C 03 28 40 */	cmplw r3, r5
/* 8013D028 0013A108  4D 80 00 20 */	bltlr
/* 8013D02C 0013A10C  7C A3 2B 78 */	mr r3, r5
/* 8013D030 0013A110  4E 80 00 20 */	blr
.endfn "range_limit<Ul>__FUlUlUl"

# range_limit<int>(int, int, int)
.fn "range_limit<i>__Fiii", weak
/* 8013D034 0013A114  7C 03 20 00 */	cmpw r3, r4
/* 8013D038 0013A118  41 81 00 0C */	bgt .L_8013D044
/* 8013D03C 0013A11C  7C 83 23 78 */	mr r3, r4
/* 8013D040 0013A120  4E 80 00 20 */	blr
.L_8013D044:
/* 8013D044 0013A124  7C 03 28 00 */	cmpw r3, r5
/* 8013D048 0013A128  4D 80 00 20 */	bltlr
/* 8013D04C 0013A12C  7C A3 2B 78 */	mr r3, r5
/* 8013D050 0013A130  4E 80 00 20 */	blr
.endfn "range_limit<i>__Fiii"

# 0x8026D090 - 0x8026D0E8
.rodata
.balign 8

# @unnamed@zDiscoFloor_cpp@::close_encounters
.obj "close_encounters__25@unnamed@zDiscoFloor_cpp@", local
	.4byte 0x40000000
	.4byte 0x40800000
	.4byte 0x00000000
	.4byte 0xC1400000
	.4byte 0xC0A00000
.endobj "close_encounters__25@unnamed@zDiscoFloor_cpp@"

# @unnamed@zDiscoFloor_cpp@::blues_scale
.obj "blues_scale__25@unnamed@zDiscoFloor_cpp@", local
	.4byte 0xC1400000
	.4byte 0xC1000000
	.4byte 0xC0A00000
	.4byte 0x00000000
	.4byte 0x40000000
	.4byte 0x40800000
.endobj "blues_scale__25@unnamed@zDiscoFloor_cpp@"

.obj "@1283", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@1283"

.obj "@stringBase0", local
	.4byte 0x25302A64
	.4byte 0x00446973
	.4byte 0x636F5F36
	.4byte 0x5F416C74
	.4byte 0x00446973
	.4byte 0x636F2046
	.4byte 0x6C6F6F72
	.byte 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x80327D30 - 0x80328000
.section .bss, "wa", @nobits
.balign 8

# @unnamed@zDiscoFloor_cpp@::glow_light
.obj "glow_light__25@unnamed@zDiscoFloor_cpp@", local
.sym ...bss.0, local
	.skip 0x70
.endobj "glow_light__25@unnamed@zDiscoFloor_cpp@"

.obj surf$972, local
	.skip 0x28
.endobj surf$972

.obj props$973, local
	.skip 0x10C
.endobj props$973

.obj asset$974, local
	.skip 0x12C
.endobj asset$974

# 0x803CBF60 - 0x803CBF78
.section .sbss, "wa", @nobits
.balign 8

# @unnamed@zDiscoFloor_cpp@::current_disco_floor
.obj "current_disco_floor__25@unnamed@zDiscoFloor_cpp@", local
	.skip 0x4
.endobj "current_disco_floor__25@unnamed@zDiscoFloor_cpp@"

.obj bit_index$829, local
	.skip 0x4
.endobj bit_index$829

.obj init$830, local
	.skip 0x1
.endobj init$830
	.skip 0x3

.obj r$832, local
	.skip 0x4
.endobj r$832

.obj inited$975, local
	.skip 0x1
.endobj inited$975

.obj init$976, local
	.skip 0x1
.endobj init$976
	.skip 0x2

# @unnamed@zDiscoFloor_cpp@::clone_pipe
.obj "clone_pipe__25@unnamed@zDiscoFloor_cpp@", local
	.skip 0x1
.endobj "clone_pipe__25@unnamed@zDiscoFloor_cpp@"
	.skip 0x3

# 0x803CEDA8 - 0x803CEE48
.section .sdata2, "a"
.balign 8

.obj "@710", local
	.4byte 0x3F800000
.endobj "@710"

.obj off_flag$790, local
	.byte 0x01, 0x00, 0x00
.endobj off_flag$790
	.byte 0x00

.obj transition_flag$791, local
	.byte 0x00, 0x01, 0x00
.endobj transition_flag$791
	.byte 0x00

.obj on_flag$792, local
	.byte 0x00, 0x00, 0x01
.endobj on_flag$792
	.byte 0x00

.obj off_flag$798, local
	.byte 0x00, 0x04, 0x04
.endobj off_flag$798
	.byte 0x00

.obj transition_flag$799, local
	.byte 0x04, 0x00, 0x04
.endobj transition_flag$799
	.byte 0x00

.obj on_flag$800, local
	.byte 0x04, 0x04, 0x00
.endobj on_flag$800
	.byte 0x00

.obj off_flag$806, local
	.byte 0x18, 0x00, 0x00
.endobj off_flag$806
	.byte 0x00

.obj transition_flag$807, local
	.byte 0x00, 0x18, 0x00
.endobj transition_flag$807
	.byte 0x00

.obj on_flag$808, local
	.byte 0x00, 0x00, 0x18
.endobj on_flag$808
	.byte 0x00

.obj "@908", local
	.4byte 0x3FC00000
.endobj "@908"

.obj "@909", local
	.4byte 0x40A00000
.endobj "@909"

.obj "@910", local
	.4byte 0x40C00000
.endobj "@910"

.obj "@911", local
	.4byte 0x3C23D70A
.endobj "@911"

.obj "@912", local
	.4byte 0x3D4CCCCD
.endobj "@912"

.obj "@913", local
	.4byte 0x41880000
.endobj "@913"

.obj "@914", local
	.4byte 0xC1200000
.endobj "@914"

.obj "@915", local
	.4byte 0x3F733333
.endobj "@915"

.obj "@916", local
	.4byte 0x41D80000
.endobj "@916"

.obj "@917", local
	.4byte 0x3E6C8B44
.endobj "@917"

.obj "@918", local
	.4byte 0x3F400000
.endobj "@918"

.obj "@919", local
	.4byte 0x00000000
.endobj "@919"

.obj "@1129", local
	.4byte 0x3E800000
.endobj "@1129"

.obj "@1174", local
	.4byte 0x40C90FDB
.endobj "@1174"

.obj "@1260", local
	.4byte 0x3DCCCCCD
.endobj "@1260"

.obj "@1270", local
	.4byte 0x3F000000
.endobj "@1270"

.obj "@1271", local
	.4byte 0x3E4CCCCD
.endobj "@1271"

.obj "@1272", local
	.4byte 0x3F333333
.endobj "@1272"

.obj "@1273", local
	.4byte 0x3E99999A
.endobj "@1273"

.obj "@1329", local
	.4byte 0xFE967699
.endobj "@1329"

.obj "@1330", local
	.4byte 0x7E967699
.endobj "@1330"
	.4byte 0x00000000

.obj "@1332", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@1332"

.obj "@1406", local
	.4byte 0x41C80000
.endobj "@1406"

.obj "@1407", local
	.4byte 0x42C80000
.endobj "@1407"

.obj "@1419", local
	.4byte 0x41200000
.endobj "@1419"

.obj "@1461", local
	.4byte 0x3EB33333
.endobj "@1461"

.obj "@1462", local
	.4byte 0x437F0000
.endobj "@1462"
	.4byte 0x00000000
