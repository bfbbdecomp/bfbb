.include "macros.inc"
.file "AXCL.c"

# 0x801B8654 - 0x801B8D70
.text
.balign 4

.fn __AXGetCommandListCycles, global
/* 801B8654 001B5734  80 6D 99 F8 */	lwz r3, __AXCommandListCycles@sda21(r13)
/* 801B8658 001B5738  4E 80 00 20 */	blr
.endfn __AXGetCommandListCycles

.fn __AXGetCommandListAddress, global
/* 801B865C 001B573C  80 AD 99 F0 */	lwz r5, __AXCommandListPosition@sda21(r13)
/* 801B8660 001B5740  3C 60 80 36 */	lis r3, __AXCommandList@ha
/* 801B8664 001B5744  38 83 6B A0 */	addi r4, r3, __AXCommandList@l
/* 801B8668 001B5748  38 05 00 01 */	addi r0, r5, 0x1
/* 801B866C 001B574C  90 0D 99 F0 */	stw r0, __AXCommandListPosition@sda21(r13)
/* 801B8670 001B5750  1C 65 03 00 */	mulli r3, r5, 0x300
/* 801B8674 001B5754  80 0D 99 F0 */	lwz r0, __AXCommandListPosition@sda21(r13)
/* 801B8678 001B5758  7C 64 1A 14 */	add r3, r4, r3
/* 801B867C 001B575C  54 00 07 FE */	clrlwi r0, r0, 31
/* 801B8680 001B5760  90 0D 99 F0 */	stw r0, __AXCommandListPosition@sda21(r13)
/* 801B8684 001B5764  80 0D 99 F0 */	lwz r0, __AXCommandListPosition@sda21(r13)
/* 801B8688 001B5768  1C 00 03 00 */	mulli r0, r0, 0x300
/* 801B868C 001B576C  7C 04 02 14 */	add r0, r4, r0
/* 801B8690 001B5770  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8694 001B5774  4E 80 00 20 */	blr
.endfn __AXGetCommandListAddress

.fn __AXNextFrame, global
/* 801B8698 001B5778  7C 08 02 A6 */	mflr r0
/* 801B869C 001B577C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B86A0 001B5780  38 00 01 A9 */	li r0, 0x1a9
/* 801B86A4 001B5784  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801B86A8 001B5788  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801B86AC 001B578C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801B86B0 001B5790  3B C4 00 00 */	addi r30, r4, 0x0
/* 801B86B4 001B5794  93 A1 00 54 */	stw r29, 0x54(r1)
/* 801B86B8 001B5798  3B A3 00 00 */	addi r29, r3, 0x0
/* 801B86BC 001B579C  83 ED 99 F4 */	lwz r31, __AXClWrite@sda21(r13)
/* 801B86C0 001B57A0  90 0D 99 F8 */	stw r0, __AXCommandListCycles@sda21(r13)
/* 801B86C4 001B57A4  48 00 0E 7D */	bl __AXGetStudio
/* 801B86C8 001B57A8  90 61 00 48 */	stw r3, 0x48(r1)
/* 801B86CC 001B57AC  38 00 00 00 */	li r0, 0x0
/* 801B86D0 001B57B0  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B86D4 001B57B4  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B86D8 001B57B8  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B86DC 001B57BC  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B86E0 001B57C0  38 63 00 02 */	addi r3, r3, 0x2
/* 801B86E4 001B57C4  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B86E8 001B57C8  54 00 84 3E */	srwi r0, r0, 16
/* 801B86EC 001B57CC  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B86F0 001B57D0  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B86F4 001B57D4  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B86F8 001B57D8  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B86FC 001B57DC  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8700 001B57E0  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8704 001B57E4  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8708 001B57E8  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B870C 001B57EC  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8710 001B57F0  80 6D 99 F8 */	lwz r3, __AXCommandListCycles@sda21(r13)
/* 801B8714 001B57F4  80 0D 9A 00 */	lwz r0, __AXClMode@sda21(r13)
/* 801B8718 001B57F8  38 84 00 02 */	addi r4, r4, 0x2
/* 801B871C 001B57FC  38 63 2E 44 */	addi r3, r3, 0x2e44
/* 801B8720 001B5800  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8724 001B5804  2C 00 00 01 */	cmpwi r0, 0x1
/* 801B8728 001B5808  90 6D 99 F8 */	stw r3, __AXCommandListCycles@sda21(r13)
/* 801B872C 001B580C  41 82 00 6C */	beq .L_801B8798
/* 801B8730 001B5810  40 80 00 B8 */	bge .L_801B87E8
/* 801B8734 001B5814  2C 00 00 00 */	cmpwi r0, 0x0
/* 801B8738 001B5818  40 80 00 0C */	bge .L_801B8744
/* 801B873C 001B581C  48 00 00 AC */	b .L_801B87E8
/* 801B8740 001B5820  48 00 00 A8 */	b .L_801B87E8
.L_801B8744:
/* 801B8744 001B5824  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8748 001B5828  38 80 00 07 */	li r4, 0x7
/* 801B874C 001B582C  57 A0 84 3E */	srwi r0, r29, 16
/* 801B8750 001B5830  B0 83 00 00 */	sth r4, 0x0(r3)
/* 801B8754 001B5834  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8758 001B5838  38 63 00 02 */	addi r3, r3, 0x2
/* 801B875C 001B583C  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8760 001B5840  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8764 001B5844  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8768 001B5848  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B876C 001B584C  38 03 00 02 */	addi r0, r3, 0x2
/* 801B8770 001B5850  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8774 001B5854  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8778 001B5858  B3 A3 00 00 */	sth r29, 0x0(r3)
/* 801B877C 001B585C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8780 001B5860  80 6D 99 F8 */	lwz r3, __AXCommandListCycles@sda21(r13)
/* 801B8784 001B5864  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8788 001B5868  38 03 05 46 */	addi r0, r3, 0x546
/* 801B878C 001B586C  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8790 001B5870  90 0D 99 F8 */	stw r0, __AXCommandListCycles@sda21(r13)
/* 801B8794 001B5874  48 00 00 54 */	b .L_801B87E8
.L_801B8798:
/* 801B8798 001B5878  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B879C 001B587C  38 80 00 11 */	li r4, 0x11
/* 801B87A0 001B5880  57 A0 84 3E */	srwi r0, r29, 16
/* 801B87A4 001B5884  B0 83 00 00 */	sth r4, 0x0(r3)
/* 801B87A8 001B5888  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B87AC 001B588C  38 63 00 02 */	addi r3, r3, 0x2
/* 801B87B0 001B5890  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B87B4 001B5894  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B87B8 001B5898  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B87BC 001B589C  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B87C0 001B58A0  38 03 00 02 */	addi r0, r3, 0x2
/* 801B87C4 001B58A4  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B87C8 001B58A8  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B87CC 001B58AC  B3 A3 00 00 */	sth r29, 0x0(r3)
/* 801B87D0 001B58B0  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B87D4 001B58B4  80 6D 99 F8 */	lwz r3, __AXCommandListCycles@sda21(r13)
/* 801B87D8 001B58B8  38 84 00 02 */	addi r4, r4, 0x2
/* 801B87DC 001B58BC  38 03 05 E6 */	addi r0, r3, 0x5e6
/* 801B87E0 001B58C0  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B87E4 001B58C4  90 0D 99 F8 */	stw r0, __AXCommandListCycles@sda21(r13)
.L_801B87E8:
/* 801B87E8 001B58C8  48 00 1B ED */	bl __AXGetPBs
/* 801B87EC 001B58CC  90 61 00 48 */	stw r3, 0x48(r1)
/* 801B87F0 001B58D0  38 80 00 02 */	li r4, 0x2
/* 801B87F4 001B58D4  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B87F8 001B58D8  38 00 00 03 */	li r0, 0x3
/* 801B87FC 001B58DC  B0 83 00 00 */	sth r4, 0x0(r3)
/* 801B8800 001B58E0  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8804 001B58E4  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801B8808 001B58E8  38 84 00 02 */	addi r4, r4, 0x2
/* 801B880C 001B58EC  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8810 001B58F0  54 64 84 3E */	srwi r4, r3, 16
/* 801B8814 001B58F4  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8818 001B58F8  B0 83 00 00 */	sth r4, 0x0(r3)
/* 801B881C 001B58FC  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8820 001B5900  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801B8824 001B5904  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8828 001B5908  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B882C 001B590C  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8830 001B5910  B0 83 00 00 */	sth r4, 0x0(r3)
/* 801B8834 001B5914  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8838 001B5918  38 63 00 02 */	addi r3, r3, 0x2
/* 801B883C 001B591C  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8840 001B5920  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8844 001B5924  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8848 001B5928  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B884C 001B592C  80 0D 9A 00 */	lwz r0, __AXClMode@sda21(r13)
/* 801B8850 001B5930  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8854 001B5934  28 00 00 02 */	cmplwi r0, 0x2
/* 801B8858 001B5938  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B885C 001B593C  40 82 02 3C */	bne .L_801B8A98
/* 801B8860 001B5940  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8864 001B5944  4B FF FA 5D */	bl __AXGetAuxAInput
/* 801B8868 001B5948  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B886C 001B594C  28 00 00 00 */	cmplwi r0, 0x0
/* 801B8870 001B5950  41 82 01 88 */	beq .L_801B89F8
/* 801B8874 001B5954  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8878 001B5958  38 00 00 13 */	li r0, 0x13
/* 801B887C 001B595C  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8880 001B5960  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8884 001B5964  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8888 001B5968  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B888C 001B596C  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8890 001B5970  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8894 001B5974  54 00 84 3E */	srwi r0, r0, 16
/* 801B8898 001B5978  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B889C 001B597C  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B88A0 001B5980  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B88A4 001B5984  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B88A8 001B5988  38 84 00 02 */	addi r4, r4, 0x2
/* 801B88AC 001B598C  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B88B0 001B5990  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B88B4 001B5994  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B88B8 001B5998  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B88BC 001B599C  38 04 00 02 */	addi r0, r4, 0x2
/* 801B88C0 001B59A0  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B88C4 001B59A4  4B FF FA 31 */	bl __AXGetAuxAInputDpl2
/* 801B88C8 001B59A8  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B88CC 001B59AC  38 61 00 48 */	addi r3, r1, 0x48
/* 801B88D0 001B59B0  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B88D4 001B59B4  54 00 84 3E */	srwi r0, r0, 16
/* 801B88D8 001B59B8  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B88DC 001B59BC  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B88E0 001B59C0  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B88E4 001B59C4  38 84 00 02 */	addi r4, r4, 0x2
/* 801B88E8 001B59C8  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B88EC 001B59CC  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B88F0 001B59D0  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B88F4 001B59D4  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B88F8 001B59D8  38 04 00 02 */	addi r0, r4, 0x2
/* 801B88FC 001B59DC  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8900 001B59E0  4B FF FA 15 */	bl __AXGetAuxAOutput
/* 801B8904 001B59E4  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8908 001B59E8  38 61 00 48 */	addi r3, r1, 0x48
/* 801B890C 001B59EC  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8910 001B59F0  54 00 84 3E */	srwi r0, r0, 16
/* 801B8914 001B59F4  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8918 001B59F8  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B891C 001B59FC  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8920 001B5A00  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8924 001B5A04  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8928 001B5A08  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B892C 001B5A0C  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8930 001B5A10  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8934 001B5A14  38 04 00 02 */	addi r0, r4, 0x2
/* 801B8938 001B5A18  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B893C 001B5A1C  4B FF F9 F5 */	bl __AXGetAuxAOutputDpl2R
/* 801B8940 001B5A20  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8944 001B5A24  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8948 001B5A28  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B894C 001B5A2C  54 00 84 3E */	srwi r0, r0, 16
/* 801B8950 001B5A30  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8954 001B5A34  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8958 001B5A38  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B895C 001B5A3C  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8960 001B5A40  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8964 001B5A44  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8968 001B5A48  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B896C 001B5A4C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8970 001B5A50  38 04 00 02 */	addi r0, r4, 0x2
/* 801B8974 001B5A54  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8978 001B5A58  4B FF F9 D9 */	bl __AXGetAuxAOutputDpl2Ls
/* 801B897C 001B5A5C  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8980 001B5A60  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8984 001B5A64  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8988 001B5A68  54 00 84 3E */	srwi r0, r0, 16
/* 801B898C 001B5A6C  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8990 001B5A70  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8994 001B5A74  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8998 001B5A78  38 84 00 02 */	addi r4, r4, 0x2
/* 801B899C 001B5A7C  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B89A0 001B5A80  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B89A4 001B5A84  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B89A8 001B5A88  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B89AC 001B5A8C  38 04 00 02 */	addi r0, r4, 0x2
/* 801B89B0 001B5A90  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B89B4 001B5A94  4B FF F9 BD */	bl __AXGetAuxAOutputDpl2Rs
/* 801B89B8 001B5A98  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B89BC 001B5A9C  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B89C0 001B5AA0  54 00 84 3E */	srwi r0, r0, 16
/* 801B89C4 001B5AA4  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B89C8 001B5AA8  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B89CC 001B5AAC  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B89D0 001B5AB0  38 63 00 02 */	addi r3, r3, 0x2
/* 801B89D4 001B5AB4  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B89D8 001B5AB8  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B89DC 001B5ABC  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B89E0 001B5AC0  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B89E4 001B5AC4  80 6D 99 F8 */	lwz r3, __AXCommandListCycles@sda21(r13)
/* 801B89E8 001B5AC8  38 84 00 02 */	addi r4, r4, 0x2
/* 801B89EC 001B5ACC  38 03 0D ED */	addi r0, r3, 0xded
/* 801B89F0 001B5AD0  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B89F4 001B5AD4  90 0D 99 F8 */	stw r0, __AXCommandListCycles@sda21(r13)
.L_801B89F8:
/* 801B89F8 001B5AD8  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B89FC 001B5ADC  38 00 00 10 */	li r0, 0x10
/* 801B8A00 001B5AE0  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8A04 001B5AE4  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8A08 001B5AE8  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8A0C 001B5AEC  38 04 00 02 */	addi r0, r4, 0x2
/* 801B8A10 001B5AF0  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8A14 001B5AF4  4B FF F9 CD */	bl __AXGetAuxBForDPL2
/* 801B8A18 001B5AF8  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8A1C 001B5AFC  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8A20 001B5B00  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8A24 001B5B04  54 00 84 3E */	srwi r0, r0, 16
/* 801B8A28 001B5B08  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8A2C 001B5B0C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8A30 001B5B10  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8A34 001B5B14  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8A38 001B5B18  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8A3C 001B5B1C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8A40 001B5B20  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8A44 001B5B24  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8A48 001B5B28  38 04 00 02 */	addi r0, r4, 0x2
/* 801B8A4C 001B5B2C  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8A50 001B5B30  4B FF F9 AD */	bl __AXGetAuxBOutputDPL2
/* 801B8A54 001B5B34  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8A58 001B5B38  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8A5C 001B5B3C  54 00 84 3E */	srwi r0, r0, 16
/* 801B8A60 001B5B40  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8A64 001B5B44  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8A68 001B5B48  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8A6C 001B5B4C  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8A70 001B5B50  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8A74 001B5B54  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8A78 001B5B58  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8A7C 001B5B5C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8A80 001B5B60  80 6D 99 F8 */	lwz r3, __AXCommandListCycles@sda21(r13)
/* 801B8A84 001B5B64  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8A88 001B5B68  38 03 0D ED */	addi r0, r3, 0xded
/* 801B8A8C 001B5B6C  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8A90 001B5B70  90 0D 99 F8 */	stw r0, __AXCommandListCycles@sda21(r13)
/* 801B8A94 001B5B74  48 00 01 54 */	b .L_801B8BE8
.L_801B8A98:
/* 801B8A98 001B5B78  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8A9C 001B5B7C  4B FF F8 25 */	bl __AXGetAuxAInput
/* 801B8AA0 001B5B80  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8AA4 001B5B84  28 00 00 00 */	cmplwi r0, 0x0
/* 801B8AA8 001B5B88  41 82 00 98 */	beq .L_801B8B40
/* 801B8AAC 001B5B8C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8AB0 001B5B90  38 00 00 04 */	li r0, 0x4
/* 801B8AB4 001B5B94  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8AB8 001B5B98  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8ABC 001B5B9C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8AC0 001B5BA0  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8AC4 001B5BA4  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8AC8 001B5BA8  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8ACC 001B5BAC  54 00 84 3E */	srwi r0, r0, 16
/* 801B8AD0 001B5BB0  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8AD4 001B5BB4  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8AD8 001B5BB8  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8ADC 001B5BBC  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8AE0 001B5BC0  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8AE4 001B5BC4  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8AE8 001B5BC8  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8AEC 001B5BCC  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8AF0 001B5BD0  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8AF4 001B5BD4  38 04 00 02 */	addi r0, r4, 0x2
/* 801B8AF8 001B5BD8  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8AFC 001B5BDC  4B FF F8 19 */	bl __AXGetAuxAOutput
/* 801B8B00 001B5BE0  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8B04 001B5BE4  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8B08 001B5BE8  54 00 84 3E */	srwi r0, r0, 16
/* 801B8B0C 001B5BEC  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8B10 001B5BF0  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8B14 001B5BF4  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8B18 001B5BF8  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8B1C 001B5BFC  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8B20 001B5C00  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8B24 001B5C04  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8B28 001B5C08  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8B2C 001B5C0C  80 6D 99 F8 */	lwz r3, __AXCommandListCycles@sda21(r13)
/* 801B8B30 001B5C10  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8B34 001B5C14  38 03 0D ED */	addi r0, r3, 0xded
/* 801B8B38 001B5C18  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8B3C 001B5C1C  90 0D 99 F8 */	stw r0, __AXCommandListCycles@sda21(r13)
.L_801B8B40:
/* 801B8B40 001B5C20  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8B44 001B5C24  4B FF F8 4D */	bl __AXGetAuxBInput
/* 801B8B48 001B5C28  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8B4C 001B5C2C  28 00 00 00 */	cmplwi r0, 0x0
/* 801B8B50 001B5C30  41 82 00 98 */	beq .L_801B8BE8
/* 801B8B54 001B5C34  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8B58 001B5C38  38 00 00 05 */	li r0, 0x5
/* 801B8B5C 001B5C3C  38 61 00 48 */	addi r3, r1, 0x48
/* 801B8B60 001B5C40  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8B64 001B5C44  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8B68 001B5C48  80 8D 99 F8 */	lwz r4, __AXCommandListCycles@sda21(r13)
/* 801B8B6C 001B5C4C  38 A5 00 02 */	addi r5, r5, 0x2
/* 801B8B70 001B5C50  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8B74 001B5C54  90 AD 99 F4 */	stw r5, __AXClWrite@sda21(r13)
/* 801B8B78 001B5C58  38 84 0D ED */	addi r4, r4, 0xded
/* 801B8B7C 001B5C5C  54 00 84 3E */	srwi r0, r0, 16
/* 801B8B80 001B5C60  90 8D 99 F8 */	stw r4, __AXCommandListCycles@sda21(r13)
/* 801B8B84 001B5C64  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8B88 001B5C68  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8B8C 001B5C6C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8B90 001B5C70  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8B94 001B5C74  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8B98 001B5C78  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8B9C 001B5C7C  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8BA0 001B5C80  B0 04 00 00 */	sth r0, 0x0(r4)
/* 801B8BA4 001B5C84  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8BA8 001B5C88  38 04 00 02 */	addi r0, r4, 0x2
/* 801B8BAC 001B5C8C  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8BB0 001B5C90  4B FF F8 15 */	bl __AXGetAuxBOutput
/* 801B8BB4 001B5C94  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8BB8 001B5C98  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8BBC 001B5C9C  54 00 84 3E */	srwi r0, r0, 16
/* 801B8BC0 001B5CA0  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8BC4 001B5CA4  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8BC8 001B5CA8  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801B8BCC 001B5CAC  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8BD0 001B5CB0  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8BD4 001B5CB4  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8BD8 001B5CB8  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8BDC 001B5CBC  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8BE0 001B5CC0  38 03 00 02 */	addi r0, r3, 0x2
/* 801B8BE4 001B5CC4  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
.L_801B8BE8:
/* 801B8BE8 001B5CC8  80 0D 99 FC */	lwz r0, __AXCompressor@sda21(r13)
/* 801B8BEC 001B5CCC  28 00 00 00 */	cmplwi r0, 0x0
/* 801B8BF0 001B5CD0  41 82 00 90 */	beq .L_801B8C80
/* 801B8BF4 001B5CD4  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8BF8 001B5CD8  38 00 00 12 */	li r0, 0x12
/* 801B8BFC 001B5CDC  3C A0 00 01 */	lis r5, 0x1
/* 801B8C00 001B5CE0  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8C04 001B5CE4  3C 60 80 2B */	lis r3, __AXCompressorTable@ha
/* 801B8C08 001B5CE8  38 83 05 C0 */	addi r4, r3, __AXCompressorTable@l
/* 801B8C0C 001B5CEC  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C10 001B5CF0  38 C5 80 00 */	addi r6, r5, -0x8000
/* 801B8C14 001B5CF4  38 A0 00 0A */	li r5, 0xa
/* 801B8C18 001B5CF8  38 03 00 02 */	addi r0, r3, 0x2
/* 801B8C1C 001B5CFC  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8C20 001B5D00  54 80 84 3E */	srwi r0, r4, 16
/* 801B8C24 001B5D04  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C28 001B5D08  B0 C3 00 00 */	sth r6, 0x0(r3)
/* 801B8C2C 001B5D0C  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C30 001B5D10  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8C34 001B5D14  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8C38 001B5D18  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C3C 001B5D1C  B0 A3 00 00 */	sth r5, 0x0(r3)
/* 801B8C40 001B5D20  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C44 001B5D24  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8C48 001B5D28  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8C4C 001B5D2C  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C50 001B5D30  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8C54 001B5D34  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C58 001B5D38  38 03 00 02 */	addi r0, r3, 0x2
/* 801B8C5C 001B5D3C  90 0D 99 F4 */	stw r0, __AXClWrite@sda21(r13)
/* 801B8C60 001B5D40  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C64 001B5D44  B0 83 00 00 */	sth r4, 0x0(r3)
/* 801B8C68 001B5D48  80 8D 99 F4 */	lwz r4, __AXClWrite@sda21(r13)
/* 801B8C6C 001B5D4C  80 6D 99 F8 */	lwz r3, __AXCommandListCycles@sda21(r13)
/* 801B8C70 001B5D50  38 84 00 02 */	addi r4, r4, 0x2
/* 801B8C74 001B5D54  38 03 0B B8 */	addi r0, r3, 0xbb8
/* 801B8C78 001B5D58  90 8D 99 F4 */	stw r4, __AXClWrite@sda21(r13)
/* 801B8C7C 001B5D5C  90 0D 99 F8 */	stw r0, __AXCommandListCycles@sda21(r13)
.L_801B8C80:
/* 801B8C80 001B5D60  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C84 001B5D64  38 00 00 0E */	li r0, 0xe
/* 801B8C88 001B5D68  57 A7 84 3E */	srwi r7, r29, 16
/* 801B8C8C 001B5D6C  B0 03 00 00 */	sth r0, 0x0(r3)
/* 801B8C90 001B5D70  57 C6 84 3E */	srwi r6, r30, 16
/* 801B8C94 001B5D74  38 00 00 0F */	li r0, 0xf
/* 801B8C98 001B5D78  80 6D 99 F4 */	lwz r3, __AXClWrite@sda21(r13)
/* 801B8C9C 001B5D7C  38 80 03 00 */	li r4, 0x300
/* 801B8CA0 001B5D80  38 63 00 02 */	addi r3, r3, 0x2
/* 801B8CA4 001B5D84  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8CA8 001B5D88  38 7F 00 00 */	addi r3, r31, 0x0
/* 801B8CAC 001B5D8C  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8CB0 001B5D90  B0 E5 00 00 */	sth r7, 0x0(r5)
/* 801B8CB4 001B5D94  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8CB8 001B5D98  38 A5 00 02 */	addi r5, r5, 0x2
/* 801B8CBC 001B5D9C  90 AD 99 F4 */	stw r5, __AXClWrite@sda21(r13)
/* 801B8CC0 001B5DA0  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8CC4 001B5DA4  B3 A5 00 00 */	sth r29, 0x0(r5)
/* 801B8CC8 001B5DA8  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8CCC 001B5DAC  38 A5 00 02 */	addi r5, r5, 0x2
/* 801B8CD0 001B5DB0  90 AD 99 F4 */	stw r5, __AXClWrite@sda21(r13)
/* 801B8CD4 001B5DB4  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8CD8 001B5DB8  B0 C5 00 00 */	sth r6, 0x0(r5)
/* 801B8CDC 001B5DBC  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8CE0 001B5DC0  38 A5 00 02 */	addi r5, r5, 0x2
/* 801B8CE4 001B5DC4  90 AD 99 F4 */	stw r5, __AXClWrite@sda21(r13)
/* 801B8CE8 001B5DC8  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8CEC 001B5DCC  B3 C5 00 00 */	sth r30, 0x0(r5)
/* 801B8CF0 001B5DD0  80 CD 99 F4 */	lwz r6, __AXClWrite@sda21(r13)
/* 801B8CF4 001B5DD4  80 AD 99 F8 */	lwz r5, __AXCommandListCycles@sda21(r13)
/* 801B8CF8 001B5DD8  38 C6 00 02 */	addi r6, r6, 0x2
/* 801B8CFC 001B5DDC  90 CD 99 F4 */	stw r6, __AXClWrite@sda21(r13)
/* 801B8D00 001B5DE0  38 A5 27 10 */	addi r5, r5, 0x2710
/* 801B8D04 001B5DE4  90 AD 99 F8 */	stw r5, __AXCommandListCycles@sda21(r13)
/* 801B8D08 001B5DE8  80 AD 99 F4 */	lwz r5, __AXClWrite@sda21(r13)
/* 801B8D0C 001B5DEC  B0 05 00 00 */	sth r0, 0x0(r5)
/* 801B8D10 001B5DF0  80 CD 99 F4 */	lwz r6, __AXClWrite@sda21(r13)
/* 801B8D14 001B5DF4  80 AD 99 F8 */	lwz r5, __AXCommandListCycles@sda21(r13)
/* 801B8D18 001B5DF8  38 C6 00 02 */	addi r6, r6, 0x2
/* 801B8D1C 001B5DFC  38 05 00 02 */	addi r0, r5, 0x2
/* 801B8D20 001B5E00  90 CD 99 F4 */	stw r6, __AXClWrite@sda21(r13)
/* 801B8D24 001B5E04  90 0D 99 F8 */	stw r0, __AXCommandListCycles@sda21(r13)
/* 801B8D28 001B5E08  48 01 96 31 */	bl DCFlushRange
/* 801B8D2C 001B5E0C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801B8D30 001B5E10  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801B8D34 001B5E14  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801B8D38 001B5E18  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 801B8D3C 001B5E1C  38 21 00 60 */	addi r1, r1, 0x60
/* 801B8D40 001B5E20  7C 08 03 A6 */	mtlr r0
/* 801B8D44 001B5E24  4E 80 00 20 */	blr
.endfn __AXNextFrame

.fn __AXClInit, global
/* 801B8D48 001B5E28  3C 60 80 36 */	lis r3, __AXCommandList@ha
/* 801B8D4C 001B5E2C  38 80 00 00 */	li r4, 0x0
/* 801B8D50 001B5E30  38 63 6B A0 */	addi r3, r3, __AXCommandList@l
/* 801B8D54 001B5E34  90 8D 9A 00 */	stw r4, __AXClMode@sda21(r13)
/* 801B8D58 001B5E38  38 00 00 01 */	li r0, 0x1
/* 801B8D5C 001B5E3C  90 8D 99 F0 */	stw r4, __AXCommandListPosition@sda21(r13)
/* 801B8D60 001B5E40  90 6D 99 F4 */	stw r3, __AXClWrite@sda21(r13)
/* 801B8D64 001B5E44  90 0D 99 FC */	stw r0, __AXCompressor@sda21(r13)
/* 801B8D68 001B5E48  4E 80 00 20 */	blr
.endfn __AXClInit

.fn __AXClQuit, global
/* 801B8D6C 001B5E4C  4E 80 00 20 */	blr
.endfn __AXClQuit

# 0x80366BA0 - 0x803671A0
.bss
.balign 8

.obj __AXCommandList, local
	.skip 0x600
.endobj __AXCommandList

# 0x803CC2F0 - 0x803CC308
.section .sbss, "wa", @nobits
.balign 8

.obj __AXCommandListPosition, local
	.skip 0x4
.endobj __AXCommandListPosition

.obj __AXClWrite, local
	.skip 0x4
.endobj __AXClWrite

.obj __AXCommandListCycles, local
	.skip 0x4
.endobj __AXCommandListCycles

.obj __AXCompressor, local
	.skip 0x4
.endobj __AXCompressor

.obj __AXClMode, global
	.skip 0x4
.endobj __AXClMode
	.skip 0x4
