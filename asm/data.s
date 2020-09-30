.section .data  # 0x8027A5C0 - 0x802B89E0
.global lbl_802A1F34
lbl_802A1F34:
	.incbin "baserom.dol", 0x29EF14, 0x20
.global LogoData
LogoData:
	.incbin "baserom.dol", 0x29EF34, 0x3A0C
.global ytable
ytable:
	.incbin "baserom.dol", 0x2A2940, 0x420
.global ytable_x4
ytable_x4:
	.incbin "baserom.dol", 0x2A2D60, 0x420
.global clamp_ytable
clamp_ytable:
	.incbin "baserom.dol", 0x2A3180, 0x420
.global clamptable
clamptable:
	.incbin "baserom.dol", 0x2A35A0, 0xC20
.global clamp_a4
clamp_a4:
	.incbin "baserom.dol", 0x2A41C0, 0x420
.global clamp_r
clamp_r:
	.incbin "baserom.dol", 0x2A45E0, 0x400
.global lbl_802A7A00
lbl_802A7A00:
	.incbin "baserom.dol", 0x2A49E0, 0x820
.global clamp_g
clamp_g:
	.incbin "baserom.dol", 0x2A5200, 0x400
.global lbl_802A8620
lbl_802A8620:
	.incbin "baserom.dol", 0x2A5600, 0x820
.global clamp_b
clamp_b:
	.incbin "baserom.dol", 0x2A5E20, 0x400
.global lbl_802A9240
lbl_802A9240:
	.incbin "baserom.dol", 0x2A6220, 0x820
.global clamp_rh
clamp_rh:
	.incbin "baserom.dol", 0x2A6A40, 0xC20
.global clamp_gh
clamp_gh:
	.incbin "baserom.dol", 0x2A7660, 0xC20
.global clamp_bh
clamp_bh:
	.incbin "baserom.dol", 0x2A8280, 0xC20
.global clamp_rr
clamp_rr:
	.incbin "baserom.dol", 0x2A8EA0, 0xC20
.global clamp_gg
clamp_gg:
	.incbin "baserom.dol", 0x2A9AC0, 0xC20
.global clamp_bb
clamp_bb:
	.incbin "baserom.dol", 0x2AA6E0, 0xC20
.global mono16
mono16:
	.incbin "baserom.dol", 0x2AB300, 0x400
.global mono16x2
mono16x2:
	.incbin "baserom.dol", 0x2AB700, 0x400
.global mono32
mono32:
	.incbin "baserom.dol", 0x2ABB00, 0x400
.global S
S:
	.incbin "baserom.dol", 0x2ABF00, 0x44
.global lbl_802AEF64
lbl_802AEF64:
	.incbin "baserom.dol", 0x2ABF44, 0x4
.global lbl_802AEF68
lbl_802AEF68:
	.incbin "baserom.dol", 0x2ABF48, 0x18
.global YUVTables
YUVTables:
	.incbin "baserom.dol", 0x2ABF60, 0x400
.global lbl_802AF380
lbl_802AF380:
	.incbin "baserom.dol", 0x2AC360, 0x400
.global lbl_802AF780
lbl_802AF780:
	.incbin "baserom.dol", 0x2AC760, 0x400
.global lbl_802AFB80
lbl_802AFB80:
	.incbin "baserom.dol", 0x2ACB60, 0x400
.global RGBshift
RGBshift:
	.incbin "baserom.dol", 0x2ACF60, 0x40
.global lbl_802AFFC0
lbl_802AFFC0:
	.incbin "baserom.dol", 0x2ACFA0, 0x80
.global lbl_802B0040
lbl_802B0040:
	.incbin "baserom.dol", 0x2AD020, 0x80
.global lbl_802B00C0
lbl_802B00C0:
	.incbin "baserom.dol", 0x2AD0A0, 0x80
.global lbl_802B0140
lbl_802B0140:
	.incbin "baserom.dol", 0x2AD120, 0x80
.global lbl_802B01C0
lbl_802B01C0:
	.incbin "baserom.dol", 0x2AD1A0, 0x80
.global lbl_802B0240
lbl_802B0240:
	.incbin "baserom.dol", 0x2AD220, 0x10
.global lbl_802B0250
lbl_802B0250:
	.incbin "baserom.dol", 0x2AD230, 0x68
.global lbl_802B02B8
lbl_802B02B8:
	.incbin "baserom.dol", 0x2AD298, 0xC8
.global lbl_802B0380
lbl_802B0380:
	.incbin "baserom.dol", 0x2AD360, 0x160
.global lbl_802B04E0
lbl_802B04E0:
	.incbin "baserom.dol", 0x2AD4C0, 0xE0
.global lbl_802B05C0
lbl_802B05C0:
	.incbin "baserom.dol", 0x2AD5A0, 0x1A40
.global lbl_802B2000
lbl_802B2000:
	.incbin "baserom.dol", 0x2AEFE0, 0x1F08
.global lbl_802B3F08
lbl_802B3F08:
	.incbin "baserom.dol", 0x2B0EE8, 0x18
.global lbl_802B3F20
lbl_802B3F20:
	.incbin "baserom.dol", 0x2B0F00, 0x160
.global lbl_802B4080
lbl_802B4080:
	.incbin "baserom.dol", 0x2B1060, 0x20
.global lbl_802B40A0
lbl_802B40A0:
	.incbin "baserom.dol", 0x2B1080, 0x20
.global lbl_802B40C0
lbl_802B40C0:
	.incbin "baserom.dol", 0x2B10A0, 0x18
.global lbl_802B40D8
lbl_802B40D8:
	.incbin "baserom.dol", 0x2B10B8, 0x80
.global lbl_802B4158
lbl_802B4158:
	.incbin "baserom.dol", 0x2B1138, 0x140
.global lbl_802B4298
lbl_802B4298:
	.incbin "baserom.dol", 0x2B1278, 0xC8
.global lbl_802B4360
lbl_802B4360:
	.incbin "baserom.dol", 0x2B1340, 0x38
.global lbl_802B4398
lbl_802B4398:
	.incbin "baserom.dol", 0x2B1378, 0x34
.global lbl_802B43CC
lbl_802B43CC:
	.incbin "baserom.dol", 0x2B13AC, 0x30
.global lbl_802B43FC
lbl_802B43FC:
	.incbin "baserom.dol", 0x2B13DC, 0x74
.global lbl_802B4470
lbl_802B4470:
	.incbin "baserom.dol", 0x2B1450, 0xC
.global lbl_802B447C
lbl_802B447C:
	.incbin "baserom.dol", 0x2B145C, 0x34
.global lbl_802B44B0
lbl_802B44B0:
	.incbin "baserom.dol", 0x2B1490, 0x90
.global lbl_802B4540
lbl_802B4540:
	.incbin "baserom.dol", 0x2B1520, 0x34
.global lbl_802B4574
lbl_802B4574:
	.incbin "baserom.dol", 0x2B1554, 0x34
.global lbl_802B45A8
lbl_802B45A8:
	.incbin "baserom.dol", 0x2B1588, 0x48
.global lbl_802B45F0
lbl_802B45F0:
	.incbin "baserom.dol", 0x2B15D0, 0x190
.global lbl_802B4780
lbl_802B4780:
	.incbin "baserom.dol", 0x2B1760, 0x16C
.global lbl_802B48EC
lbl_802B48EC:
	.incbin "baserom.dol", 0x2B18CC, 0xC0
.global lbl_802B49AC
lbl_802B49AC:
	.incbin "baserom.dol", 0x2B198C, 0x14
.global lbl_802B49C0
lbl_802B49C0:
	.incbin "baserom.dol", 0x2B19A0, 0x68
.global lbl_802B4A28
lbl_802B4A28:
	.incbin "baserom.dol", 0x2B1A08, 0x44
.global lbl_802B4A6C
lbl_802B4A6C:
	.incbin "baserom.dol", 0x2B1A4C, 0x44
.global lbl_802B4AB0
lbl_802B4AB0:
	.incbin "baserom.dol", 0x2B1A90, 0x1C
.global lbl_802B4ACC
lbl_802B4ACC:
	.incbin "baserom.dol", 0x2B1AAC, 0x54
.global lbl_802B4B20
lbl_802B4B20:
	.incbin "baserom.dol", 0x2B1B00, 0x3C
.global lbl_802B4B5C
lbl_802B4B5C:
	.incbin "baserom.dol", 0x2B1B3C, 0x3C
.global lbl_802B4B98
lbl_802B4B98:
	.incbin "baserom.dol", 0x2B1B78, 0x3C
.global lbl_802B4BD4
lbl_802B4BD4:
	.incbin "baserom.dol", 0x2B1BB4, 0x3C
.global lbl_802B4C10
lbl_802B4C10:
	.incbin "baserom.dol", 0x2B1BF0, 0x20
.global lbl_802B4C30
lbl_802B4C30:
	.incbin "baserom.dol", 0x2B1C10, 0xF4
.global lbl_802B4D24
lbl_802B4D24:
	.incbin "baserom.dol", 0x2B1D04, 0xF4
.global lbl_802B4E18
lbl_802B4E18:
	.incbin "baserom.dol", 0x2B1DF8, 0x40
.global lbl_802B4E58
lbl_802B4E58:
	.incbin "baserom.dol", 0x2B1E38, 0x50
.global lbl_802B4EA8
lbl_802B4EA8:
	.incbin "baserom.dol", 0x2B1E88, 0x28
.global lbl_802B4ED0
lbl_802B4ED0:
	.incbin "baserom.dol", 0x2B1EB0, 0x20
.global lbl_802B4EF0
lbl_802B4EF0:
	.incbin "baserom.dol", 0x2B1ED0, 0x5C
.global lbl_802B4F4C
lbl_802B4F4C:
	.incbin "baserom.dol", 0x2B1F2C, 0x94
.global lbl_802B4FE0
lbl_802B4FE0:
	.incbin "baserom.dol", 0x2B1FC0, 0x1F8
.global lbl_802B51D8
lbl_802B51D8:
	.incbin "baserom.dol", 0x2B21B8, 0x80
.global lbl_802B5258
lbl_802B5258:
	.incbin "baserom.dol", 0x2B2238, 0x230
.global lbl_802B5488
lbl_802B5488:
	.incbin "baserom.dol", 0x2B2468, 0x1B4
.global lbl_802B563C
lbl_802B563C:
	.incbin "baserom.dol", 0x2B261C, 0x24
.global lbl_802B5660
lbl_802B5660:
	.incbin "baserom.dol", 0x2B2640, 0x2DC
.global lbl_802B593C
lbl_802B593C:
	.incbin "baserom.dol", 0x2B291C, 0x44
.global lbl_802B5980
lbl_802B5980:
	.incbin "baserom.dol", 0x2B2960, 0x180
.global lbl_802B5B00
lbl_802B5B00:
	.incbin "baserom.dol", 0x2B2AE0, 0x990
.global lbl_802B6490
lbl_802B6490:
	.incbin "baserom.dol", 0x2B3470, 0x30
.global lbl_802B64C0
lbl_802B64C0:
	.incbin "baserom.dol", 0x2B34A0, 0x10
.global lbl_802B64D0
lbl_802B64D0:
	.incbin "baserom.dol", 0x2B34B0, 0x30
.global lbl_802B6500
lbl_802B6500:
	.incbin "baserom.dol", 0x2B34E0, 0x78
.global lbl_802B6578
lbl_802B6578:
	.incbin "baserom.dol", 0x2B3558, 0x10
.global lbl_802B6588
lbl_802B6588:
	.incbin "baserom.dol", 0x2B3568, 0x44
.global lbl_802B65CC
lbl_802B65CC:
	.incbin "baserom.dol", 0x2B35AC, 0x14
.global lbl_802B65E0
lbl_802B65E0:
	.incbin "baserom.dol", 0x2B35C0, 0xC0
.global lbl_802B66A0
lbl_802B66A0:
	.incbin "baserom.dol", 0x2B3680, 0x98
.global lbl_802B6738
lbl_802B6738:
	.incbin "baserom.dol", 0x2B3718, 0x1F4
.global lbl_802B692C
lbl_802B692C:
	.incbin "baserom.dol", 0x2B390C, 0x1C0
.global lbl_802B6AEC
lbl_802B6AEC:
	.incbin "baserom.dol", 0x2B3ACC, 0x1C
.global lbl_802B6B08
lbl_802B6B08:
	.incbin "baserom.dol", 0x2B3AE8, 0x140
.global lbl_802B6C48
lbl_802B6C48:
	.incbin "baserom.dol", 0x2B3C28, 0x40
.global lbl_802B6C88
lbl_802B6C88:
	.incbin "baserom.dol", 0x2B3C68, 0x128
.global lbl_802B6DB0
lbl_802B6DB0:
	.incbin "baserom.dol", 0x2B3D90, 0x100
.global lbl_802B6EB0
lbl_802B6EB0:
	.incbin "baserom.dol", 0x2B3E90, 0x100
.global lbl_802B6FB0
lbl_802B6FB0:
	.incbin "baserom.dol", 0x2B3F90, 0x100
.global lbl_802B70B0
lbl_802B70B0:
	.incbin "baserom.dol", 0x2B4090, 0x38
.global lbl_802B70E8
lbl_802B70E8:
	.incbin "baserom.dol", 0x2B40C8, 0x84
.global lbl_802B716C
lbl_802B716C:
	.incbin "baserom.dol", 0x2B414C, 0x84
.global lbl_802B71F0
lbl_802B71F0:
	.incbin "baserom.dol", 0x2B41D0, 0xE0
.global lbl_802B72D0
lbl_802B72D0:
	.incbin "baserom.dol", 0x2B42B0, 0x48
.global lbl_802B7318
lbl_802B7318:
	.incbin "baserom.dol", 0x2B42F8, 0xD0
.global lbl_802B73E8
lbl_802B73E8:
	.incbin "baserom.dol", 0x2B43C8, 0x44
.global lbl_802B742C
lbl_802B742C:
	.incbin "baserom.dol", 0x2B440C, 0x44
.global lbl_802B7470
lbl_802B7470:
	.incbin "baserom.dol", 0x2B4450, 0x10
.global lbl_802B7480
lbl_802B7480:
	.incbin "baserom.dol", 0x2B4460, 0x44
.global lbl_802B74C4
lbl_802B74C4:
	.incbin "baserom.dol", 0x2B44A4, 0x44
.global lbl_802B7508
lbl_802B7508:
	.incbin "baserom.dol", 0x2B44E8, 0x50
.global lbl_802B7558
lbl_802B7558:
	.incbin "baserom.dol", 0x2B4538, 0x10
.global gTRKDispatchTable
gTRKDispatchTable:
	.incbin "baserom.dol", 0x2B4548, 0x88
.global lbl_802B75F0
lbl_802B75F0:
	.incbin "baserom.dol", 0x2B45D0, 0x1C
.global lbl_802B760C
lbl_802B760C:
	.incbin "baserom.dol", 0x2B45EC, 0x1C
.global gTRKRestoreFlags
gTRKRestoreFlags:
	.incbin "baserom.dol", 0x2B4608, 0xC
.global lbl_802B7634
lbl_802B7634:
	.incbin "baserom.dol", 0x2B4614, 0x10
.global lbl_802B7644
lbl_802B7644:
	.incbin "baserom.dol", 0x2B4624, 0x14
.global lbl_802B7658
lbl_802B7658:
	.incbin "baserom.dol", 0x2B4638, 0x40
.global gDBCommTable
gDBCommTable:
	.incbin "baserom.dol", 0x2B4678, 0x20
.global MatFXInfo
MatFXInfo:
	.incbin "baserom.dol", 0x2B4698, 0xC
.global lbl_802B76C4
lbl_802B76C4:
	.incbin "baserom.dol", 0x2B46A4, 0x1C
.global defaultCB
defaultCB:
	.incbin "baserom.dol", 0x2B46C0, 0x10
.global _rpSkinGlobals
_rpSkinGlobals:
	.incbin "baserom.dol", 0x2B46D0, 0x40
.global lbl_802B7730
lbl_802B7730:
	.incbin "baserom.dol", 0x2B4710, 0x18
.global lbl_802B7748
lbl_802B7748:
	.incbin "baserom.dol", 0x2B4728, 0x18
.global lbl_802B7760
lbl_802B7760:
	.incbin "baserom.dol", 0x2B4740, 0x18
.global lbl_802B7778
lbl_802B7778:
	.incbin "baserom.dol", 0x2B4758, 0x18
.global lbl_802B7790
lbl_802B7790:
	.incbin "baserom.dol", 0x2B4770, 0x18
.global lbl_802B77A8
lbl_802B77A8:
	.incbin "baserom.dol", 0x2B4788, 0x10
.global lbl_802B77B8
lbl_802B77B8:
	.incbin "baserom.dol", 0x2B4798, 0x18
.global sectorTKList
sectorTKList:
	.incbin "baserom.dol", 0x2B47B0, 0x18
.global worldTKList
worldTKList:
	.incbin "baserom.dol", 0x2B47C8, 0x34
.global lbl_802B781C
lbl_802B781C:
	.incbin "baserom.dol", 0x2B47FC, 0x68
.global lbl_802B7884
lbl_802B7884:
	.incbin "baserom.dol", 0x2B4864, 0x44
.global lbl_802B78C8
lbl_802B78C8:
	.incbin "baserom.dol", 0x2B48A8, 0x2C
.global lbl_802B78F4
lbl_802B78F4:
	.incbin "baserom.dol", 0x2B48D4, 0x2C
.global lbl_802B7920
lbl_802B7920:
	.incbin "baserom.dol", 0x2B4900, 0x2C
.global lbl_802B794C
lbl_802B794C:
	.incbin "baserom.dol", 0x2B492C, 0x2C
.global lbl_802B7978
lbl_802B7978:
	.incbin "baserom.dol", 0x2B4958, 0x2C
.global lbl_802B79A4
lbl_802B79A4:
	.incbin "baserom.dol", 0x2B4984, 0x2C
.global lbl_802B79D0
lbl_802B79D0:
	.incbin "baserom.dol", 0x2B49B0, 0x2C
.global lbl_802B79FC
lbl_802B79FC:
	.incbin "baserom.dol", 0x2B49DC, 0x2C
.global lbl_802B7A28
lbl_802B7A28:
	.incbin "baserom.dol", 0x2B4A08, 0x20
.global lbl_802B7A48
lbl_802B7A48:
	.incbin "baserom.dol", 0x2B4A28, 0x58
.global lbl_802B7AA0
lbl_802B7AA0:
	.incbin "baserom.dol", 0x2B4A80, 0x58
.global lbl_802B7AF8
lbl_802B7AF8:
	.incbin "baserom.dol", 0x2B4AD8, 0x30
.global lbl_802B7B28
lbl_802B7B28:
	.incbin "baserom.dol", 0x2B4B08, 0x30
.global lbl_802B7B58
lbl_802B7B58:
	.incbin "baserom.dol", 0x2B4B38, 0x30
.global lbl_802B7B88
lbl_802B7B88:
	.incbin "baserom.dol", 0x2B4B68, 0x44
.global lbl_802B7BCC
lbl_802B7BCC:
	.incbin "baserom.dol", 0x2B4BAC, 0x6C
.global lbl_802B7C38
lbl_802B7C38:
	.incbin "baserom.dol", 0x2B4C18, 0x70
.global lbl_802B7CA8
lbl_802B7CA8:
	.incbin "baserom.dol", 0x2B4C88, 0x20
.global cameraTKList
cameraTKList:
	.incbin "baserom.dol", 0x2B4CA8, 0x18
.global lbl_802B7CE0
lbl_802B7CE0:
	.incbin "baserom.dol", 0x2B4CC0, 0x28
.global lbl_802B7D08
lbl_802B7D08:
	.incbin "baserom.dol", 0x2B4CE8, 0x18
.global frameTKList
frameTKList:
	.incbin "baserom.dol", 0x2B4D00, 0x18
.global lbl_802B7D38
lbl_802B7D38:
	.incbin "baserom.dol", 0x2B4D18, 0x18
.global lbl_802B7D50
lbl_802B7D50:
	.incbin "baserom.dol", 0x2B4D30, 0x18
.global textureTKList
textureTKList:
	.incbin "baserom.dol", 0x2B4D48, 0x18
.global texDictTKList
texDictTKList:
	.incbin "baserom.dol", 0x2B4D60, 0x18
.global lbl_802B7D98
lbl_802B7D98:
	.incbin "baserom.dol", 0x2B4D78, 0x1C
.global lbl_802B7DB4
lbl_802B7DB4:
	.incbin "baserom.dol", 0x2B4D94, 0x1C
.global lbl_802B7DD0
lbl_802B7DD0:
	.incbin "baserom.dol", 0x2B4DB0, 0x30
.global lbl_802B7E00
lbl_802B7E00:
	.incbin "baserom.dol", 0x2B4DE0, 0x28
.global lbl_802B7E28
lbl_802B7E28:
	.incbin "baserom.dol", 0x2B4E08, 0x44
.global lbl_802B7E6C
lbl_802B7E6C:
	.incbin "baserom.dol", 0x2B4E4C, 0x74
.global lbl_802B7EE0
lbl_802B7EE0:
	.incbin "baserom.dol", 0x2B4EC0, 0x44
.global lbl_802B7F24
lbl_802B7F24:
	.incbin "baserom.dol", 0x2B4F04, 0x74
.global lbl_802B7F98
lbl_802B7F98:
	.incbin "baserom.dol", 0x2B4F78, 0x74
.global lbl_802B800C
lbl_802B800C:
	.incbin "baserom.dol", 0x2B4FEC, 0x74
.global lbl_802B8080
lbl_802B8080:
	.incbin "baserom.dol", 0x2B5060, 0x8C
.global lbl_802B810C
lbl_802B810C:
	.incbin "baserom.dol", 0x2B50EC, 0x50
.global lbl_802B815C
lbl_802B815C:
	.incbin "baserom.dol", 0x2B513C, 0x1C
.global lbl_802B8178
lbl_802B8178:
	.incbin "baserom.dol", 0x2B5158, 0x38
.global lbl_802B81B0
lbl_802B81B0:
	.incbin "baserom.dol", 0x2B5190, 0x78
.global lbl_802B8228
lbl_802B8228:
	.incbin "baserom.dol", 0x2B5208, 0x74
.global lbl_802B829C
lbl_802B829C:
	.incbin "baserom.dol", 0x2B527C, 0x74
.global lbl_802B8310
lbl_802B8310:
	.incbin "baserom.dol", 0x2B52F0, 0x74
.global lbl_802B8384
lbl_802B8384:
	.incbin "baserom.dol", 0x2B5364, 0x74
.global lbl_802B83F8
lbl_802B83F8:
	.incbin "baserom.dol", 0x2B53D8, 0x74
.global lbl_802B846C
lbl_802B846C:
	.incbin "baserom.dol", 0x2B544C, 0x170
.global lbl_802B85DC
lbl_802B85DC:
	.incbin "baserom.dol", 0x2B55BC, 0x84
.global lbl_802B8660
lbl_802B8660:
	.incbin "baserom.dol", 0x2B5640, 0x28
.global lbl_802B8688
lbl_802B8688:
	.incbin "baserom.dol", 0x2B5668, 0x10
.global lbl_802B8698
lbl_802B8698:
	.incbin "baserom.dol", 0x2B5678, 0x30
.global lbl_802B86C8
lbl_802B86C8:
	.incbin "baserom.dol", 0x2B56A8, 0x54
.global lbl_802B871C
lbl_802B871C:
	.incbin "baserom.dol", 0x2B56FC, 0x54
.global lbl_802B8770
lbl_802B8770:
	.incbin "baserom.dol", 0x2B5750, 0x1C
.global lbl_802B878C
lbl_802B878C:
	.incbin "baserom.dol", 0x2B576C, 0x30
.global lbl_802B87BC
lbl_802B87BC:
	.incbin "baserom.dol", 0x2B579C, 0x34
.global lbl_802B87F0
lbl_802B87F0:
	.incbin "baserom.dol", 0x2B57D0, 0x1C
.global lbl_802B880C
lbl_802B880C:
	.incbin "baserom.dol", 0x2B57EC, 0x30
.global lbl_802B883C
lbl_802B883C:
	.incbin "baserom.dol", 0x2B581C, 0x74
.global lbl_802B88B0
lbl_802B88B0:
	.incbin "baserom.dol", 0x2B5890, 0x38
.global lbl_802B88E8
lbl_802B88E8:
	.incbin "baserom.dol", 0x2B58C8, 0x14
.global lbl_802B88FC
lbl_802B88FC:
	.incbin "baserom.dol", 0x2B58DC, 0x24
.global lbl_802B8920
lbl_802B8920:
	.incbin "baserom.dol", 0x2B5900, 0x2C
.global lbl_802B894C
lbl_802B894C:
	.incbin "baserom.dol", 0x2B592C, 0x54
.global lbl_802B89A0
lbl_802B89A0:
	.incbin "baserom.dol", 0x2B5980, 0x40
