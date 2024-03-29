.include "macros.inc"
.file "string.c"

# 0x801E7308 - 0x801E77D4
.text
.balign 4

.fn strstr, global
/* 801E7308 001E43E8  28 04 00 00 */	cmplwi r4, 0x0
/* 801E730C 001E43EC  38 A3 FF FF */	addi r5, r3, -0x1
/* 801E7310 001E43F0  4D 82 00 20 */	beqlr
/* 801E7314 001E43F4  88 C4 00 00 */	lbz r6, 0x0(r4)
/* 801E7318 001E43F8  28 06 00 00 */	cmplwi r6, 0x0
/* 801E731C 001E43FC  40 82 00 40 */	bne .L_801E735C
/* 801E7320 001E4400  4E 80 00 20 */	blr
.L_801E7324:
/* 801E7324 001E4404  7C 00 30 40 */	cmplw r0, r6
/* 801E7328 001E4408  40 82 00 34 */	bne .L_801E735C
/* 801E732C 001E440C  38 E5 FF FF */	addi r7, r5, -0x1
/* 801E7330 001E4410  39 04 FF FF */	addi r8, r4, -0x1
.L_801E7334:
/* 801E7334 001E4414  8C 07 00 01 */	lbzu r0, 0x1(r7)
/* 801E7338 001E4418  8C 68 00 01 */	lbzu r3, 0x1(r8)
/* 801E733C 001E441C  7C 00 18 40 */	cmplw r0, r3
/* 801E7340 001E4420  40 82 00 0C */	bne .L_801E734C
/* 801E7344 001E4424  28 00 00 00 */	cmplwi r0, 0x0
/* 801E7348 001E4428  40 82 FF EC */	bne .L_801E7334
.L_801E734C:
/* 801E734C 001E442C  28 03 00 00 */	cmplwi r3, 0x0
/* 801E7350 001E4430  40 82 00 0C */	bne .L_801E735C
/* 801E7354 001E4434  7C A3 2B 78 */	mr r3, r5
/* 801E7358 001E4438  4E 80 00 20 */	blr
.L_801E735C:
/* 801E735C 001E443C  8C 05 00 01 */	lbzu r0, 0x1(r5)
/* 801E7360 001E4440  28 00 00 00 */	cmplwi r0, 0x0
/* 801E7364 001E4444  40 82 FF C0 */	bne .L_801E7324
/* 801E7368 001E4448  38 60 00 00 */	li r3, 0x0
/* 801E736C 001E444C  4E 80 00 20 */	blr
.endfn strstr

.fn strtok, global
/* 801E7370 001E4450  3C A0 80 28 */	lis r5, "@212"@ha
/* 801E7374 001E4454  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801E7378 001E4458  39 85 9A 80 */	addi r12, r5, "@212"@l
/* 801E737C 001E445C  28 03 00 00 */	cmplwi r3, 0x0
/* 801E7380 001E4460  81 6C 00 00 */	lwz r11, 0x0(r12)
/* 801E7384 001E4464  81 4C 00 04 */	lwz r10, 0x4(r12)
/* 801E7388 001E4468  81 2C 00 08 */	lwz r9, 0x8(r12)
/* 801E738C 001E446C  81 0C 00 0C */	lwz r8, 0xc(r12)
/* 801E7390 001E4470  80 EC 00 10 */	lwz r7, 0x10(r12)
/* 801E7394 001E4474  80 CC 00 14 */	lwz r6, 0x14(r12)
/* 801E7398 001E4478  80 AC 00 18 */	lwz r5, 0x18(r12)
/* 801E739C 001E447C  80 0C 00 1C */	lwz r0, 0x1c(r12)
/* 801E73A0 001E4480  91 61 00 08 */	stw r11, 0x8(r1)
/* 801E73A4 001E4484  91 41 00 0C */	stw r10, 0xc(r1)
/* 801E73A8 001E4488  91 21 00 10 */	stw r9, 0x10(r1)
/* 801E73AC 001E448C  91 01 00 14 */	stw r8, 0x14(r1)
/* 801E73B0 001E4490  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801E73B4 001E4494  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 801E73B8 001E4498  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801E73BC 001E449C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E73C0 001E44A0  41 82 00 08 */	beq .L_801E73C8
/* 801E73C4 001E44A4  90 6D 86 B4 */	stw r3, s$211@sda21(r13)
.L_801E73C8:
/* 801E73C8 001E44A8  38 E4 FF FF */	addi r7, r4, -0x1
/* 801E73CC 001E44AC  38 A1 00 08 */	addi r5, r1, 0x8
/* 801E73D0 001E44B0  38 60 00 01 */	li r3, 0x1
/* 801E73D4 001E44B4  48 00 00 1C */	b .L_801E73F0
.L_801E73D8:
/* 801E73D8 001E44B8  54 06 EE FE */	extrwi r6, r0, 5, 24
/* 801E73DC 001E44BC  54 00 07 7E */	clrlwi r0, r0, 29
/* 801E73E0 001E44C0  7C 85 30 AE */	lbzx r4, r5, r6
/* 801E73E4 001E44C4  7C 60 00 30 */	slw r0, r3, r0
/* 801E73E8 001E44C8  7C 80 03 78 */	or r0, r4, r0
/* 801E73EC 001E44CC  7C 05 31 AE */	stbx r0, r5, r6
.L_801E73F0:
/* 801E73F0 001E44D0  8C 07 00 01 */	lbzu r0, 0x1(r7)
/* 801E73F4 001E44D4  2C 00 00 00 */	cmpwi r0, 0x0
/* 801E73F8 001E44D8  40 82 FF E0 */	bne .L_801E73D8
/* 801E73FC 001E44DC  80 8D 86 B4 */	lwz r4, s$211@sda21(r13)
/* 801E7400 001E44E0  38 A1 00 08 */	addi r5, r1, 0x8
/* 801E7404 001E44E4  38 60 00 01 */	li r3, 0x1
/* 801E7408 001E44E8  38 E4 FF FF */	addi r7, r4, -0x1
/* 801E740C 001E44EC  48 00 00 1C */	b .L_801E7428
.L_801E7410:
/* 801E7410 001E44F0  54 C4 EE FE */	extrwi r4, r6, 5, 24
/* 801E7414 001E44F4  54 C0 07 7E */	clrlwi r0, r6, 29
/* 801E7418 001E44F8  7C 85 20 AE */	lbzx r4, r5, r4
/* 801E741C 001E44FC  7C 60 00 30 */	slw r0, r3, r0
/* 801E7420 001E4500  7C 80 00 39 */	and. r0, r4, r0
/* 801E7424 001E4504  41 82 00 10 */	beq .L_801E7434
.L_801E7428:
/* 801E7428 001E4508  8C C7 00 01 */	lbzu r6, 0x1(r7)
/* 801E742C 001E450C  2C 06 00 00 */	cmpwi r6, 0x0
/* 801E7430 001E4510  40 82 FF E0 */	bne .L_801E7410
.L_801E7434:
/* 801E7434 001E4514  2C 06 00 00 */	cmpwi r6, 0x0
/* 801E7438 001E4518  40 82 00 14 */	bne .L_801E744C
/* 801E743C 001E451C  80 0D 86 B0 */	lwz r0, n$210@sda21(r13)
/* 801E7440 001E4520  38 60 00 00 */	li r3, 0x0
/* 801E7444 001E4524  90 0D 86 B4 */	stw r0, s$211@sda21(r13)
/* 801E7448 001E4528  48 00 00 5C */	b .L_801E74A4
.L_801E744C:
/* 801E744C 001E452C  7C E3 3B 78 */	mr r3, r7
/* 801E7450 001E4530  38 C1 00 08 */	addi r6, r1, 0x8
/* 801E7454 001E4534  38 80 00 01 */	li r4, 0x1
/* 801E7458 001E4538  48 00 00 1C */	b .L_801E7474
.L_801E745C:
/* 801E745C 001E453C  55 05 EE FE */	extrwi r5, r8, 5, 24
/* 801E7460 001E4540  55 00 07 7E */	clrlwi r0, r8, 29
/* 801E7464 001E4544  7C A6 28 AE */	lbzx r5, r6, r5
/* 801E7468 001E4548  7C 80 00 30 */	slw r0, r4, r0
/* 801E746C 001E454C  7C A0 00 39 */	and. r0, r5, r0
/* 801E7470 001E4550  40 82 00 10 */	bne .L_801E7480
.L_801E7474:
/* 801E7474 001E4554  8D 07 00 01 */	lbzu r8, 0x1(r7)
/* 801E7478 001E4558  2C 08 00 00 */	cmpwi r8, 0x0
/* 801E747C 001E455C  40 82 FF E0 */	bne .L_801E745C
.L_801E7480:
/* 801E7480 001E4560  2C 08 00 00 */	cmpwi r8, 0x0
/* 801E7484 001E4564  40 82 00 10 */	bne .L_801E7494
/* 801E7488 001E4568  80 0D 86 B0 */	lwz r0, n$210@sda21(r13)
/* 801E748C 001E456C  90 0D 86 B4 */	stw r0, s$211@sda21(r13)
/* 801E7490 001E4570  48 00 00 14 */	b .L_801E74A4
.L_801E7494:
/* 801E7494 001E4574  38 87 00 01 */	addi r4, r7, 0x1
/* 801E7498 001E4578  38 00 00 00 */	li r0, 0x0
/* 801E749C 001E457C  90 8D 86 B4 */	stw r4, s$211@sda21(r13)
/* 801E74A0 001E4580  98 07 00 00 */	stb r0, 0x0(r7)
.L_801E74A4:
/* 801E74A4 001E4584  38 21 00 30 */	addi r1, r1, 0x30
/* 801E74A8 001E4588  4E 80 00 20 */	blr
.endfn strtok

.fn strchr, global
/* 801E74AC 001E458C  38 63 FF FF */	addi r3, r3, -0x1
/* 801E74B0 001E4590  54 80 06 3E */	clrlwi r0, r4, 24
/* 801E74B4 001E4594  48 00 00 0C */	b .L_801E74C0
.L_801E74B8:
/* 801E74B8 001E4598  7C 04 00 40 */	cmplw r4, r0
/* 801E74BC 001E459C  4D 82 00 20 */	beqlr
.L_801E74C0:
/* 801E74C0 001E45A0  8C 83 00 01 */	lbzu r4, 0x1(r3)
/* 801E74C4 001E45A4  28 04 00 00 */	cmplwi r4, 0x0
/* 801E74C8 001E45A8  40 82 FF F0 */	bne .L_801E74B8
/* 801E74CC 001E45AC  28 00 00 00 */	cmplwi r0, 0x0
/* 801E74D0 001E45B0  4D 82 00 20 */	beqlr
/* 801E74D4 001E45B4  38 60 00 00 */	li r3, 0x0
/* 801E74D8 001E45B8  4E 80 00 20 */	blr
.endfn strchr

.fn strncmp, global
/* 801E74DC 001E45BC  38 63 FF FF */	addi r3, r3, -0x1
/* 801E74E0 001E45C0  38 84 FF FF */	addi r4, r4, -0x1
/* 801E74E4 001E45C4  38 C5 00 01 */	addi r6, r5, 0x1
/* 801E74E8 001E45C8  48 00 00 24 */	b .L_801E750C
.L_801E74EC:
/* 801E74EC 001E45CC  8C 03 00 01 */	lbzu r0, 0x1(r3)
/* 801E74F0 001E45D0  8C A4 00 01 */	lbzu r5, 0x1(r4)
/* 801E74F4 001E45D4  7C 00 28 40 */	cmplw r0, r5
/* 801E74F8 001E45D8  41 82 00 0C */	beq .L_801E7504
/* 801E74FC 001E45DC  7C 65 00 50 */	subf r3, r5, r0
/* 801E7500 001E45E0  4E 80 00 20 */	blr
.L_801E7504:
/* 801E7504 001E45E4  28 00 00 00 */	cmplwi r0, 0x0
/* 801E7508 001E45E8  41 82 00 0C */	beq .L_801E7514
.L_801E750C:
/* 801E750C 001E45EC  34 C6 FF FF */	addic. r6, r6, -0x1
/* 801E7510 001E45F0  40 82 FF DC */	bne .L_801E74EC
.L_801E7514:
/* 801E7514 001E45F4  38 60 00 00 */	li r3, 0x0
/* 801E7518 001E45F8  4E 80 00 20 */	blr
.endfn strncmp

.fn strcmp, global
/* 801E751C 001E45FC  88 A3 00 00 */	lbz r5, 0x0(r3)
/* 801E7520 001E4600  88 04 00 00 */	lbz r0, 0x0(r4)
/* 801E7524 001E4604  7C 00 28 51 */	subf. r0, r0, r5
/* 801E7528 001E4608  41 82 00 0C */	beq .L_801E7534
/* 801E752C 001E460C  7C 03 03 78 */	mr r3, r0
/* 801E7530 001E4610  4E 80 00 20 */	blr
.L_801E7534:
/* 801E7534 001E4614  54 80 07 BE */	clrlwi r0, r4, 30
/* 801E7538 001E4618  54 66 07 BE */	clrlwi r6, r3, 30
/* 801E753C 001E461C  7C 00 30 40 */	cmplw r0, r6
/* 801E7540 001E4620  40 82 00 CC */	bne .L_801E760C
/* 801E7544 001E4624  28 06 00 00 */	cmplwi r6, 0x0
/* 801E7548 001E4628  41 82 00 58 */	beq .L_801E75A0
/* 801E754C 001E462C  28 05 00 00 */	cmplwi r5, 0x0
/* 801E7550 001E4630  40 82 00 0C */	bne .L_801E755C
/* 801E7554 001E4634  38 60 00 00 */	li r3, 0x0
/* 801E7558 001E4638  4E 80 00 20 */	blr
.L_801E755C:
/* 801E755C 001E463C  20 06 00 03 */	subfic r0, r6, 0x3
/* 801E7560 001E4640  7C 09 03 A6 */	mtctr r0
/* 801E7564 001E4644  28 00 00 00 */	cmplwi r0, 0x0
/* 801E7568 001E4648  41 82 00 30 */	beq .L_801E7598
.L_801E756C:
/* 801E756C 001E464C  8C A3 00 01 */	lbzu r5, 0x1(r3)
/* 801E7570 001E4650  8C 04 00 01 */	lbzu r0, 0x1(r4)
/* 801E7574 001E4654  7C 00 28 51 */	subf. r0, r0, r5
/* 801E7578 001E4658  41 82 00 0C */	beq .L_801E7584
/* 801E757C 001E465C  7C 03 03 78 */	mr r3, r0
/* 801E7580 001E4660  4E 80 00 20 */	blr
.L_801E7584:
/* 801E7584 001E4664  28 05 00 00 */	cmplwi r5, 0x0
/* 801E7588 001E4668  40 82 00 0C */	bne .L_801E7594
/* 801E758C 001E466C  38 60 00 00 */	li r3, 0x0
/* 801E7590 001E4670  4E 80 00 20 */	blr
.L_801E7594:
/* 801E7594 001E4674  42 00 FF D8 */	bdnz .L_801E756C
.L_801E7598:
/* 801E7598 001E4678  38 63 00 01 */	addi r3, r3, 0x1
/* 801E759C 001E467C  38 84 00 01 */	addi r4, r4, 0x1
.L_801E75A0:
/* 801E75A0 001E4680  80 E3 00 00 */	lwz r7, 0x0(r3)
/* 801E75A4 001E4684  3C A0 80 81 */	lis r5, 0x8081
/* 801E75A8 001E4688  38 C5 80 80 */	addi r6, r5, -0x7f80
/* 801E75AC 001E468C  81 04 00 00 */	lwz r8, 0x0(r4)
/* 801E75B0 001E4690  3C A7 FE FF */	addis r5, r7, 0xfeff
/* 801E75B4 001E4694  38 05 FE FF */	addi r0, r5, -0x101
/* 801E75B8 001E4698  7C 00 30 39 */	and. r0, r0, r6
/* 801E75BC 001E469C  40 82 00 38 */	bne .L_801E75F4
/* 801E75C0 001E46A0  48 00 00 1C */	b .L_801E75DC
.L_801E75C4:
/* 801E75C4 001E46A4  84 E3 00 04 */	lwzu r7, 0x4(r3)
/* 801E75C8 001E46A8  85 04 00 04 */	lwzu r8, 0x4(r4)
/* 801E75CC 001E46AC  3C A7 FE FF */	addis r5, r7, 0xfeff
/* 801E75D0 001E46B0  38 05 FE FF */	addi r0, r5, -0x101
/* 801E75D4 001E46B4  7C 00 30 39 */	and. r0, r0, r6
/* 801E75D8 001E46B8  40 82 00 1C */	bne .L_801E75F4
.L_801E75DC:
/* 801E75DC 001E46BC  7C 07 40 40 */	cmplw r7, r8
/* 801E75E0 001E46C0  41 82 FF E4 */	beq .L_801E75C4
/* 801E75E4 001E46C4  38 60 FF FF */	li r3, -0x1
/* 801E75E8 001E46C8  4C 81 00 20 */	blelr
/* 801E75EC 001E46CC  38 60 00 01 */	li r3, 0x1
/* 801E75F0 001E46D0  4E 80 00 20 */	blr
.L_801E75F4:
/* 801E75F4 001E46D4  88 A3 00 00 */	lbz r5, 0x0(r3)
/* 801E75F8 001E46D8  88 04 00 00 */	lbz r0, 0x0(r4)
/* 801E75FC 001E46DC  7C 00 28 51 */	subf. r0, r0, r5
/* 801E7600 001E46E0  41 82 00 0C */	beq .L_801E760C
/* 801E7604 001E46E4  7C 03 03 78 */	mr r3, r0
/* 801E7608 001E46E8  4E 80 00 20 */	blr
.L_801E760C:
/* 801E760C 001E46EC  28 05 00 00 */	cmplwi r5, 0x0
/* 801E7610 001E46F0  40 82 00 0C */	bne .L_801E761C
/* 801E7614 001E46F4  38 60 00 00 */	li r3, 0x0
/* 801E7618 001E46F8  4E 80 00 20 */	blr
.L_801E761C:
/* 801E761C 001E46FC  8C A3 00 01 */	lbzu r5, 0x1(r3)
/* 801E7620 001E4700  8C 04 00 01 */	lbzu r0, 0x1(r4)
/* 801E7624 001E4704  7C 00 28 51 */	subf. r0, r0, r5
/* 801E7628 001E4708  41 82 00 0C */	beq .L_801E7634
/* 801E762C 001E470C  7C 03 03 78 */	mr r3, r0
/* 801E7630 001E4710  4E 80 00 20 */	blr
.L_801E7634:
/* 801E7634 001E4714  28 05 00 00 */	cmplwi r5, 0x0
/* 801E7638 001E4718  40 82 FF E4 */	bne .L_801E761C
/* 801E763C 001E471C  38 60 00 00 */	li r3, 0x0
/* 801E7640 001E4720  4E 80 00 20 */	blr
.endfn strcmp

.fn strncat, global
/* 801E7644 001E4724  38 84 FF FF */	addi r4, r4, -0x1
/* 801E7648 001E4728  38 C3 FF FF */	addi r6, r3, -0x1
.L_801E764C:
/* 801E764C 001E472C  8C 06 00 01 */	lbzu r0, 0x1(r6)
/* 801E7650 001E4730  28 00 00 00 */	cmplwi r0, 0x0
/* 801E7654 001E4734  40 82 FF F8 */	bne .L_801E764C
/* 801E7658 001E4738  38 C6 FF FF */	addi r6, r6, -0x1
/* 801E765C 001E473C  38 A5 00 01 */	addi r5, r5, 0x1
/* 801E7660 001E4740  48 00 00 1C */	b .L_801E767C
.L_801E7664:
/* 801E7664 001E4744  8C 04 00 01 */	lbzu r0, 0x1(r4)
/* 801E7668 001E4748  28 00 00 00 */	cmplwi r0, 0x0
/* 801E766C 001E474C  9C 06 00 01 */	stbu r0, 0x1(r6)
/* 801E7670 001E4750  40 82 00 0C */	bne .L_801E767C
/* 801E7674 001E4754  38 C6 FF FF */	addi r6, r6, -0x1
/* 801E7678 001E4758  48 00 00 0C */	b .L_801E7684
.L_801E767C:
/* 801E767C 001E475C  34 A5 FF FF */	addic. r5, r5, -0x1
/* 801E7680 001E4760  40 82 FF E4 */	bne .L_801E7664
.L_801E7684:
/* 801E7684 001E4764  38 00 00 00 */	li r0, 0x0
/* 801E7688 001E4768  98 06 00 01 */	stb r0, 0x1(r6)
/* 801E768C 001E476C  4E 80 00 20 */	blr
.endfn strncat

.fn strcat, global
/* 801E7690 001E4770  38 84 FF FF */	addi r4, r4, -0x1
/* 801E7694 001E4774  38 A3 FF FF */	addi r5, r3, -0x1
.L_801E7698:
/* 801E7698 001E4778  8C 05 00 01 */	lbzu r0, 0x1(r5)
/* 801E769C 001E477C  28 00 00 00 */	cmplwi r0, 0x0
/* 801E76A0 001E4780  40 82 FF F8 */	bne .L_801E7698
/* 801E76A4 001E4784  38 A5 FF FF */	addi r5, r5, -0x1
.L_801E76A8:
/* 801E76A8 001E4788  8C 04 00 01 */	lbzu r0, 0x1(r4)
/* 801E76AC 001E478C  28 00 00 00 */	cmplwi r0, 0x0
/* 801E76B0 001E4790  9C 05 00 01 */	stbu r0, 0x1(r5)
/* 801E76B4 001E4794  40 82 FF F4 */	bne .L_801E76A8
/* 801E76B8 001E4798  4E 80 00 20 */	blr
.endfn strcat

.fn strncpy, global
/* 801E76BC 001E479C  38 84 FF FF */	addi r4, r4, -0x1
/* 801E76C0 001E47A0  38 C3 FF FF */	addi r6, r3, -0x1
/* 801E76C4 001E47A4  38 A5 00 01 */	addi r5, r5, 0x1
/* 801E76C8 001E47A8  48 00 00 2C */	b .L_801E76F4
.L_801E76CC:
/* 801E76CC 001E47AC  8C 04 00 01 */	lbzu r0, 0x1(r4)
/* 801E76D0 001E47B0  28 00 00 00 */	cmplwi r0, 0x0
/* 801E76D4 001E47B4  9C 06 00 01 */	stbu r0, 0x1(r6)
/* 801E76D8 001E47B8  40 82 00 1C */	bne .L_801E76F4
/* 801E76DC 001E47BC  38 00 00 00 */	li r0, 0x0
/* 801E76E0 001E47C0  48 00 00 08 */	b .L_801E76E8
.L_801E76E4:
/* 801E76E4 001E47C4  9C 06 00 01 */	stbu r0, 0x1(r6)
.L_801E76E8:
/* 801E76E8 001E47C8  34 A5 FF FF */	addic. r5, r5, -0x1
/* 801E76EC 001E47CC  40 82 FF F8 */	bne .L_801E76E4
/* 801E76F0 001E47D0  4E 80 00 20 */	blr
.L_801E76F4:
/* 801E76F4 001E47D4  34 A5 FF FF */	addic. r5, r5, -0x1
/* 801E76F8 001E47D8  40 82 FF D4 */	bne .L_801E76CC
/* 801E76FC 001E47DC  4E 80 00 20 */	blr
.endfn strncpy

.fn strcpy, global
/* 801E7700 001E47E0  54 60 07 BE */	clrlwi r0, r3, 30
/* 801E7704 001E47E4  54 85 07 BE */	clrlwi r5, r4, 30
/* 801E7708 001E47E8  7C 00 28 40 */	cmplw r0, r5
/* 801E770C 001E47EC  7C 67 1B 78 */	mr r7, r3
/* 801E7710 001E47F0  40 82 00 84 */	bne .L_801E7794
/* 801E7714 001E47F4  28 05 00 00 */	cmplwi r5, 0x0
/* 801E7718 001E47F8  41 82 00 40 */	beq .L_801E7758
/* 801E771C 001E47FC  88 04 00 00 */	lbz r0, 0x0(r4)
/* 801E7720 001E4800  28 00 00 00 */	cmplwi r0, 0x0
/* 801E7724 001E4804  98 07 00 00 */	stb r0, 0x0(r7)
/* 801E7728 001E4808  4D 82 00 20 */	beqlr
/* 801E772C 001E480C  20 05 00 03 */	subfic r0, r5, 0x3
/* 801E7730 001E4810  7C 09 03 A6 */	mtctr r0
/* 801E7734 001E4814  28 00 00 00 */	cmplwi r0, 0x0
/* 801E7738 001E4818  41 82 00 18 */	beq .L_801E7750
.L_801E773C:
/* 801E773C 001E481C  8C 04 00 01 */	lbzu r0, 0x1(r4)
/* 801E7740 001E4820  28 00 00 00 */	cmplwi r0, 0x0
/* 801E7744 001E4824  9C 07 00 01 */	stbu r0, 0x1(r7)
/* 801E7748 001E4828  4D 82 00 20 */	beqlr
/* 801E774C 001E482C  42 00 FF F0 */	bdnz .L_801E773C
.L_801E7750:
/* 801E7750 001E4830  38 E7 00 01 */	addi r7, r7, 0x1
/* 801E7754 001E4834  38 84 00 01 */	addi r4, r4, 0x1
.L_801E7758:
/* 801E7758 001E4838  81 04 00 00 */	lwz r8, 0x0(r4)
/* 801E775C 001E483C  3C A0 80 81 */	lis r5, 0x8081
/* 801E7760 001E4840  38 C5 80 80 */	addi r6, r5, -0x7f80
/* 801E7764 001E4844  3C A8 FE FF */	addis r5, r8, 0xfeff
/* 801E7768 001E4848  38 05 FE FF */	addi r0, r5, -0x101
/* 801E776C 001E484C  7C 00 30 39 */	and. r0, r0, r6
/* 801E7770 001E4850  40 82 00 24 */	bne .L_801E7794
/* 801E7774 001E4854  38 E7 FF FC */	addi r7, r7, -0x4
.L_801E7778:
/* 801E7778 001E4858  95 07 00 04 */	stwu r8, 0x4(r7)
/* 801E777C 001E485C  85 04 00 04 */	lwzu r8, 0x4(r4)
/* 801E7780 001E4860  3C A8 FE FF */	addis r5, r8, 0xfeff
/* 801E7784 001E4864  38 05 FE FF */	addi r0, r5, -0x101
/* 801E7788 001E4868  7C 00 30 39 */	and. r0, r0, r6
/* 801E778C 001E486C  41 82 FF EC */	beq .L_801E7778
/* 801E7790 001E4870  38 E7 00 04 */	addi r7, r7, 0x4
.L_801E7794:
/* 801E7794 001E4874  88 04 00 00 */	lbz r0, 0x0(r4)
/* 801E7798 001E4878  28 00 00 00 */	cmplwi r0, 0x0
/* 801E779C 001E487C  98 07 00 00 */	stb r0, 0x0(r7)
/* 801E77A0 001E4880  4D 82 00 20 */	beqlr
.L_801E77A4:
/* 801E77A4 001E4884  8C 04 00 01 */	lbzu r0, 0x1(r4)
/* 801E77A8 001E4888  28 00 00 00 */	cmplwi r0, 0x0
/* 801E77AC 001E488C  9C 07 00 01 */	stbu r0, 0x1(r7)
/* 801E77B0 001E4890  40 82 FF F4 */	bne .L_801E77A4
/* 801E77B4 001E4894  4E 80 00 20 */	blr
.endfn strcpy

.fn strlen, global
/* 801E77B8 001E4898  38 83 FF FF */	addi r4, r3, -0x1
/* 801E77BC 001E489C  38 60 FF FF */	li r3, -0x1
.L_801E77C0:
/* 801E77C0 001E48A0  8C 04 00 01 */	lbzu r0, 0x1(r4)
/* 801E77C4 001E48A4  38 63 00 01 */	addi r3, r3, 0x1
/* 801E77C8 001E48A8  28 00 00 00 */	cmplwi r0, 0x0
/* 801E77CC 001E48AC  40 82 FF F4 */	bne .L_801E77C0
/* 801E77D0 001E48B0  4E 80 00 20 */	blr
.endfn strlen

# 0x80279A80 - 0x80279E10
.rodata
.balign 8

.obj "@212", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@212"

.obj "@stringBase0", local
	.4byte 0x00417267
	.4byte 0x756D656E
	.4byte 0x74206C69
	.4byte 0x73742074
	.4byte 0x6F6F206C
	.4byte 0x6F6E6700
	.4byte 0x5065726D
	.4byte 0x69737369
	.4byte 0x6F6E2064
	.4byte 0x656E6965
	.4byte 0x64005265
	.4byte 0x736F7572
	.4byte 0x63652074
	.4byte 0x656D706F
	.4byte 0x72617269
	.4byte 0x6C792075
	.4byte 0x6E617661
	.4byte 0x696C6162
	.4byte 0x6C650042
	.4byte 0x61642066
	.4byte 0x696C6520
	.4byte 0x64657363
	.4byte 0x72697074
	.4byte 0x6F720044
	.4byte 0x65766963
	.4byte 0x65206275
	.4byte 0x7379004E
	.4byte 0x6F206368
	.4byte 0x696C6420
	.4byte 0x70726F63
	.4byte 0x65737365
	.4byte 0x73005265
	.4byte 0x736F7572
	.4byte 0x63652064
	.4byte 0x6561646C
	.4byte 0x6F636B20
	.4byte 0x61766F69
	.4byte 0x64656400
	.4byte 0x4E756D65
	.4byte 0x72696361
	.4byte 0x6C206172
	.4byte 0x67756D65
	.4byte 0x6E74206F
	.4byte 0x7574206F
	.4byte 0x6620646F
	.4byte 0x6D61696E
	.4byte 0x0046696C
	.4byte 0x65206578
	.4byte 0x69737473
	.4byte 0x00426164
	.4byte 0x20616464
	.4byte 0x72657373
	.4byte 0x0046696C
	.4byte 0x6520746F
	.4byte 0x6F206C61
	.4byte 0x72676500
	.4byte 0x46696C65
	.4byte 0x20506F73
	.4byte 0x6974696F
	.4byte 0x6E204572
	.4byte 0x726F7200
	.4byte 0x57696465
	.4byte 0x20636861
	.4byte 0x72616374
	.4byte 0x65722065
	.4byte 0x6E636F64
	.4byte 0x696E6720
	.4byte 0x6572726F
	.4byte 0x7200496E
	.4byte 0x74657272
	.4byte 0x75707465
	.4byte 0x64207379
	.4byte 0x7374656D
	.4byte 0x2063616C
	.4byte 0x6C00496E
	.4byte 0x76616C69
	.4byte 0x64206172
	.4byte 0x67756D65
	.4byte 0x6E740049
	.4byte 0x6E707574
	.4byte 0x2F6F7574
	.4byte 0x70757420
	.4byte 0x6572726F
	.4byte 0x72004973
	.4byte 0x20612064
	.4byte 0x69726563
	.4byte 0x746F7279
	.4byte 0x00546F6F
	.4byte 0x206D616E
	.4byte 0x79206F70
	.4byte 0x656E2066
	.4byte 0x696C6573
	.4byte 0x00546F6F
	.4byte 0x206D616E
	.4byte 0x79206C69
	.4byte 0x6E6B7300
	.4byte 0x46696C65
	.4byte 0x206E616D
	.4byte 0x6520746F
	.4byte 0x6F206C6F
	.4byte 0x6E670054
	.4byte 0x6F6F206D
	.4byte 0x616E7920
	.4byte 0x6F70656E
	.4byte 0x2066696C
	.4byte 0x65732069
	.4byte 0x6E207379
	.4byte 0x7374656D
	.4byte 0x004F7065
	.4byte 0x72617469
	.4byte 0x6F6E206E
	.4byte 0x6F742073
	.4byte 0x7570706F
	.4byte 0x72746564
	.4byte 0x20627920
	.4byte 0x64657669
	.4byte 0x6365004E
	.4byte 0x6F207375
	.4byte 0x63682066
	.4byte 0x696C6520
	.4byte 0x6F722064
	.4byte 0x69726563
	.4byte 0x746F7279
	.4byte 0x004E6F20
	.4byte 0x6572726F
	.4byte 0x72206465
	.4byte 0x74656374
	.4byte 0x65640045
	.4byte 0x78656320
	.4byte 0x666F726D
	.4byte 0x61742065
	.4byte 0x72726F72
	.4byte 0x004E6F20
	.4byte 0x6C6F636B
	.4byte 0x73206176
	.4byte 0x61696C61
	.4byte 0x626C6500
	.4byte 0x43616E6E
	.4byte 0x6F742061
	.4byte 0x6C6C6F63
	.4byte 0x61746520
	.4byte 0x6D656D6F
	.4byte 0x7279004E
	.4byte 0x6F207370
	.4byte 0x61636520
	.4byte 0x6C656674
	.4byte 0x206F6E20
	.4byte 0x64657669
	.4byte 0x63650046
	.4byte 0x756E6374
	.4byte 0x696F6E20
	.4byte 0x6E6F7420
	.4byte 0x696D706C
	.4byte 0x656D656E
	.4byte 0x74656400
	.4byte 0x4E6F7420
	.4byte 0x61206469
	.4byte 0x72656374
	.4byte 0x6F727900
	.4byte 0x44697265
	.4byte 0x63746F72
	.4byte 0x79206E6F
	.4byte 0x7420656D
	.4byte 0x70747900
	.4byte 0x496E6170
	.4byte 0x70726F70
	.4byte 0x72696174
	.4byte 0x6520696F
	.4byte 0x63746C20
	.4byte 0x666F7220
	.4byte 0x64657669
	.4byte 0x63650044
	.4byte 0x65766963
	.4byte 0x65206E6F
	.4byte 0x7420636F
	.4byte 0x6E666967
	.4byte 0x75726564
	.4byte 0x004F7065
	.4byte 0x72617469
	.4byte 0x6F6E206E
	.4byte 0x6F742070
	.4byte 0x65726D69
	.4byte 0x74746564
	.4byte 0x0042726F
	.4byte 0x6B656E20
	.4byte 0x70697065
	.4byte 0x00526573
	.4byte 0x756C7420
	.4byte 0x746F6F20
	.4byte 0x6C617267
	.4byte 0x65005265
	.4byte 0x61642D6F
	.4byte 0x6E6C7920
	.4byte 0x66696C65
	.4byte 0x20737973
	.4byte 0x74656D00
	.4byte 0x5369676E
	.4byte 0x616C2065
	.4byte 0x72726F72
	.4byte 0x00496C6C
	.4byte 0x6567616C
	.4byte 0x20736565
	.4byte 0x6B004E6F
	.4byte 0x20737563
	.4byte 0x68207072
	.4byte 0x6F636573
	.4byte 0x7300556E
	.4byte 0x6B6E6F77
	.4byte 0x6E206572
	.4byte 0x726F7200
	.4byte 0x43726F73
	.4byte 0x732D6465
	.4byte 0x76696365
	.4byte 0x206C696E
	.4byte 0x6B00556E
	.4byte 0x6B6E6F77
	.4byte 0x6E204572
	.4byte 0x726F7220
	.4byte 0x28256429
	.byte 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x803CAFB0 - 0x803CAFB8
.section .sdata, "wa"
.balign 8

.obj n$210, local
	.4byte "@stringBase0"
.endobj n$210

.obj s$211, local
	.4byte "@stringBase0"
.endobj s$211
