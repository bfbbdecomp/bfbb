.section .data  # 0x8027A5C0 - 0x802B89E0
.global lbl_g_loadinst
lbl_g_loadinst:
	.incbin "baserom.dol", 0x2775A0, 0x340
.global lbl_g_xfload
lbl_g_xfload:
	.incbin "baserom.dol", 0x2778E0, 0x8A0
.global lbl_g_xtraload
lbl_g_xtraload:
	.incbin "baserom.dol", 0x278180, 0x1E0
.global lbl__700
lbl__700:
	.incbin "baserom.dol", 0x278360, 0x70
.global lbl_sCameraFXTable
lbl_sCameraFXTable:
	.incbin "baserom.dol", 0x2783D0, 0x28
.global lbl_shadVec$1235
lbl_shadVec$1235:
	.incbin "baserom.dol", 0x2783F8, 0x10
.global lbl_receive_models$855
lbl_receive_models$855:
	.incbin "baserom.dol", 0x278408, 0x3C
.global lbl__881
lbl__881:
	.incbin "baserom.dol", 0x278444, 0xA8
.global lbl_offs$1551
lbl_offs$1551:
	.incbin "baserom.dol", 0x2784EC, 0x64
.global lbl__1412
lbl__1412:
	.incbin "baserom.dol", 0x278550, 0x20
.global lbl_default_font_texture__19_unnamed_xFont_cpp_
lbl_default_font_texture__19_unnamed_xFont_cpp_:
	.incbin "baserom.dol", 0x278570, 0xC
.global lbl_default_font_assets__19_unnamed_xFont_cpp_
lbl_default_font_assets__19_unnamed_xFont_cpp_:
	.incbin "baserom.dol", 0x27857C, 0x650
.global lbl_text_cb__8xtextbox
lbl_text_cb__8xtextbox:
	.incbin "baserom.dol", 0x278BCC, 0xC
.global lbl_format_tags_buffer__19_unnamed_xFont_cpp_
lbl_format_tags_buffer__19_unnamed_xFont_cpp_:
	.incbin "baserom.dol", 0x278BD8, 0x1418
.global lbl__1933
lbl__1933:
	.incbin "baserom.dol", 0x279FF0, 0x90
.global lbl_g_hiploadinst
lbl_g_hiploadinst:
	.incbin "baserom.dol", 0x27A080, 0x540
.global lbl_g_map_HIPL_funcmap
lbl_g_map_HIPL_funcmap:
	.incbin "baserom.dol", 0x27A5C0, 0x38
.global lbl___vt__Q24xhud6widget
lbl___vt__Q24xhud6widget:
	.incbin "baserom.dol", 0x27A5F8, 0x28
.global lbl_format_text$709
lbl_format_text$709:
	.incbin "baserom.dol", 0x27A620, 0xC
.global lbl___vt__Q24xhud17font_meter_widget
lbl___vt__Q24xhud17font_meter_widget:
	.incbin "baserom.dol", 0x27A62C, 0x2C
.global lbl___vt__Q24xhud12meter_widget
lbl___vt__Q24xhud12meter_widget:
	.incbin "baserom.dol", 0x27A658, 0x28
.global lbl___vt__Q24xhud12model_widget
lbl___vt__Q24xhud12model_widget:
	.incbin "baserom.dol", 0x27A680, 0x28
.global lbl___vt__Q24xhud17unit_meter_widget
lbl___vt__Q24xhud17unit_meter_widget:
	.incbin "baserom.dol", 0x27A6A8, 0x28
.global lbl_nxt$2148
lbl_nxt$2148:
	.incbin "baserom.dol", 0x27A6D0, 0x10
.global lbl_sCmdInfo
lbl_sCmdInfo:
	.incbin "baserom.dol", 0x27A6E0, 0x1A8
.global lbl_g_pkr_read_funcmap_original
lbl_g_pkr_read_funcmap_original:
	.incbin "baserom.dol", 0x27A888, 0x44
.global lbl_g_pkr_read_funcmap
lbl_g_pkr_read_funcmap:
	.incbin "baserom.dol", 0x27A8CC, 0x44
.global lbl_g_readdatainst
lbl_g_readdatainst:
	.incbin "baserom.dol", 0x27A910, 0x26D4
.global lbl_80280004
lbl_80280004:
	.incbin "baserom.dol", 0x27CFE4, 0x682C
.global lbl__728_3
lbl__728_3:
	.incbin "baserom.dol", 0x283810, 0x2C
.global lbl__747_2
lbl__747_2:
	.incbin "baserom.dol", 0x28383C, 0x2C
.global lbl_g_xsgdata
lbl_g_xsgdata:
	.incbin "baserom.dol", 0x283868, 0x20F0
.global lbl_g_leaders
lbl_g_leaders:
	.incbin "baserom.dol", 0x285958, 0x108
.global lbl_da_date$566
lbl_da_date$566:
	.incbin "baserom.dol", 0x285A60, 0x20
.global lbl__802
lbl__802:
	.incbin "baserom.dol", 0x285A80, 0x34
.global lbl_slotname$1003
lbl_slotname$1003:
	.incbin "baserom.dol", 0x285AB4, 0x24
.global lbl_ddir
lbl_ddir:
	.incbin "baserom.dol", 0x285AD8, 0xC
.global lbl_sFullScreenGlareDir
lbl_sFullScreenGlareDir:
	.incbin "baserom.dol", 0x285AE4, 0xC
.global lbl_g_xserdata
lbl_g_xserdata:
	.incbin "baserom.dol", 0x285AF0, 0x24
.global lbl_g_tbl_onbit
lbl_g_tbl_onbit:
	.incbin "baserom.dol", 0x285B14, 0x80
.global lbl_g_tbl_clear
lbl_g_tbl_clear:
	.incbin "baserom.dol", 0x285B94, 0x84
.global lbl__964_2
lbl__964_2:
	.incbin "baserom.dol", 0x285C18, 0x48
.global lbl_ShadowLightColor
lbl_ShadowLightColor:
	.incbin "baserom.dol", 0x285C60, 0x10
.global lbl_gCamPos
lbl_gCamPos:
	.incbin "baserom.dol", 0x285C70, 0x10
.global lbl_sDelayedSnd
lbl_sDelayedSnd:
	.incbin "baserom.dol", 0x285C80, 0x340
.global lbl_sBasisBezier
lbl_sBasisBezier:
	.incbin "baserom.dol", 0x285FC0, 0x40
.global lbl_sBasisHermite
lbl_sBasisHermite:
	.incbin "baserom.dol", 0x286000, 0x40
.global lbl_g_xstdata
lbl_g_xstdata:
	.incbin "baserom.dol", 0x286040, 0x1144
.global lbl_fname$755
lbl_fname$755:
	.incbin "baserom.dol", 0x287184, 0x40
.global lbl_fname$761
lbl_fname$761:
	.incbin "baserom.dol", 0x2871C4, 0x44
.global lbl__1131
lbl__1131:
	.incbin "baserom.dol", 0x287208, 0x30
.global lbl_sPauseTimerHash
lbl_sPauseTimerHash:
	.incbin "baserom.dol", 0x287238, 0x50
.global lbl_tb$731
lbl_tb$731:
	.incbin "baserom.dol", 0x287288, 0x68
.global lbl_tb$895
lbl_tb$895:
	.incbin "baserom.dol", 0x2872F0, 0x68
.global lbl_g_crc32_table
lbl_g_crc32_table:
	.incbin "baserom.dol", 0x287358, 0x400
.global lbl_buf$424
lbl_buf$424:
	.incbin "baserom.dol", 0x287758, 0x40
.global lbl_astnames
lbl_astnames:
	.incbin "baserom.dol", 0x287798, 0x50
.global lbl_assetTypeHandlers
lbl_assetTypeHandlers:
	.incbin "baserom.dol", 0x2877E8, 0xC30
.global lbl_hackRadiusTable
lbl_hackRadiusTable:
	.incbin "baserom.dol", 0x288418, 0x18
.global lbl_jsp_shadow_hack_textures
lbl_jsp_shadow_hack_textures:
	.incbin "baserom.dol", 0x288430, 0x14
.global lbl_animTable
lbl_animTable:
	.incbin "baserom.dol", 0x288444, 0x18C
.global lbl_tableFuncList
lbl_tableFuncList:
	.incbin "baserom.dol", 0x2885D0, 0xC0
.global lbl_cutsceneHackTable
lbl_cutsceneHackTable:
	.incbin "baserom.dol", 0x288690, 0x658
.global lbl_zCutSceneNamesTable
lbl_zCutSceneNamesTable:
	.incbin "baserom.dol", 0x288CE8, 0x3F0
.global lbl__1068_1
lbl__1068_1:
	.incbin "baserom.dol", 0x2890D8, 0x60
.global lbl__1035
lbl__1035:
	.incbin "baserom.dol", 0x289138, 0x20
.global lbl_g_hash_xentanim
lbl_g_hash_xentanim:
	.incbin "baserom.dol", 0x289158, 0x14
.global lbl_g_strz_xentanim
lbl_g_strz_xentanim:
	.incbin "baserom.dol", 0x28916C, 0x14
.global lbl__1125
lbl__1125:
	.incbin "baserom.dol", 0x289180, 0x20
.global lbl_gShadowParams
lbl_gShadowParams:
	.incbin "baserom.dol", 0x2891A0, 0x40
.global lbl_base__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_
lbl_base__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_:
	.incbin "baserom.dol", 0x2891E0, 0x10
.global lbl_start_anim_states__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_
lbl_start_anim_states__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_:
	.incbin "baserom.dol", 0x2891F0, 0x94
.global lbl_shared__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_
lbl_shared__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_:
	.incbin "baserom.dol", 0x289284, 0x18C
.global lbl_sounds__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_
lbl_sounds__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_:
	.incbin "baserom.dol", 0x289410, 0xA0
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_17state_player_halt
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_17state_player_halt:
	.incbin "baserom.dol", 0x2894B0, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_16state_player_aim
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_16state_player_aim:
	.incbin "baserom.dol", 0x2894CC, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_17state_player_fire
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_17state_player_fire:
	.incbin "baserom.dol", 0x2894E8, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_17state_player_wait
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_17state_player_wait:
	.incbin "baserom.dol", 0x289504, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_19state_missle_appear
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_19state_missle_appear:
	.incbin "baserom.dol", 0x289520, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_16state_missle_fly
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_16state_missle_fly:
	.incbin "baserom.dol", 0x28953C, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_20state_missle_explode
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_20state_missle_explode:
	.incbin "baserom.dol", 0x289558, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_16state_camera_aim
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_16state_camera_aim:
	.incbin "baserom.dol", 0x289574, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_18state_camera_seize
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_18state_camera_seize:
	.incbin "baserom.dol", 0x289590, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_19state_camera_attach
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_19state_camera_attach:
	.incbin "baserom.dol", 0x2895AC, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_19state_camera_survey
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_19state_camera_survey:
	.incbin "baserom.dol", 0x2895C8, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_10state_type
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_10state_type:
	.incbin "baserom.dol", 0x2895E4, 0x1C
.global lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_20state_camera_restore
lbl___vt__Q313cruise_bubble30_unnamed_zEntCruiseBubble_cpp_20state_camera_restore:
	.incbin "baserom.dol", 0x289600, 0x20
.global lbl_ShinySparklyTable
lbl_ShinySparklyTable:
	.incbin "baserom.dol", 0x289620, 0xE0
.global lbl_sPickupOrientation
lbl_sPickupOrientation:
	.incbin "baserom.dol", 0x289700, 0xA0
.global lbl__1012
lbl__1012:
	.incbin "baserom.dol", 0x2897A0, 0x90
.global lbl__1147
lbl__1147:
	.incbin "baserom.dol", 0x289830, 0x3C
.global lbl__1224
lbl__1224:
	.incbin "baserom.dol", 0x28986C, 0x3C
.global lbl__1259
lbl__1259:
	.incbin "baserom.dol", 0x2898A8, 0x30
.global lbl_zPickupAuraTable
lbl_zPickupAuraTable:
	.incbin "baserom.dol", 0x2898D8, 0xB8
.global lbl_sPlayerSnd
lbl_sPlayerSnd:
	.incbin "baserom.dol", 0x289990, 0x468
.global lbl_sPlayerSndID
lbl_sPlayerSndID:
	.incbin "baserom.dol", 0x289DF8, 0xFD8
.global lbl_sPlayerStreamSndTimer
lbl_sPlayerStreamSndTimer:
	.incbin "baserom.dol", 0x28ADD0, 0x3DC
.global lbl__1475
lbl__1475:
	.incbin "baserom.dol", 0x28B1AC, 0x34
.global lbl_sStreakInfo
lbl_sStreakInfo:
	.incbin "baserom.dol", 0x28B1E0, 0x2A0
.global lbl_hashes_ss$6578
lbl_hashes_ss$6578:
	.incbin "baserom.dol", 0x28B480, 0xC
.global lbl_hashes_pa$6581
lbl_hashes_pa$6581:
	.incbin "baserom.dol", 0x28B48C, 0xC
.global lbl_lorigins$8065
lbl_lorigins$8065:
	.incbin "baserom.dol", 0x28B498, 0x30
.global lbl__8298
lbl__8298:
	.incbin "baserom.dol", 0x28B4C8, 0x20
.global lbl_sTrackHash
lbl_sTrackHash:
	.incbin "baserom.dol", 0x28B4E8, 0x50
.global lbl__9200
lbl__9200:
	.incbin "baserom.dol", 0x28B538, 0xC8
.global lbl_sEventTable
lbl_sEventTable:
	.incbin "baserom.dol", 0x28B600, 0x878
.global lbl_zFMVFileTable
lbl_zFMVFileTable:
	.incbin "baserom.dol", 0x28BE78, 0x148
.global lbl_cb_spawn_bubble_wall$724
lbl_cb_spawn_bubble_wall$724:
	.incbin "baserom.dol", 0x28BFC0, 0x28
.global lbl_bubblehit_pos_rnd
lbl_bubblehit_pos_rnd:
	.incbin "baserom.dol", 0x28BFE8, 0xC
.global lbl_bubblehit_vel_rnd
lbl_bubblehit_vel_rnd:
	.incbin "baserom.dol", 0x28BFF4, 0xC
.global lbl_bubbletrail_pos_rnd
lbl_bubbletrail_pos_rnd:
	.incbin "baserom.dol", 0x28C000, 0xC
.global lbl_bubbletrail_vel_rnd
lbl_bubbletrail_vel_rnd:
	.incbin "baserom.dol", 0x28C00C, 0xC
.global lbl_entrail_types__17_unnamed_zFX_cpp_
lbl_entrail_types__17_unnamed_zFX_cpp_:
	.incbin "baserom.dol", 0x28C018, 0x178
.global lbl_g_eggBasket
lbl_g_eggBasket:
	.incbin "baserom.dol", 0x28C190, 0x20
.global lbl__1050_3
lbl__1050_3:
	.incbin "baserom.dol", 0x28C1B0, 0x574
.global lbl_cheatList
lbl_cheatList:
	.incbin "baserom.dol", 0x28C724, 0x160
.global lbl_sCheatPressed
lbl_sCheatPressed:
	.incbin "baserom.dol", 0x28C884, 0x40
.global lbl_aid_sndList$1160
lbl_aid_sndList$1160:
	.incbin "baserom.dol", 0x28C8C4, 0x1C
.global lbl_choices$1318
lbl_choices$1318:
	.incbin "baserom.dol", 0x28C8E0, 0xC
.global lbl_aid_sndList$1342
lbl_aid_sndList$1342:
	.incbin "baserom.dol", 0x28C8EC, 0x1C
.global lbl_sGameMode_DispatchTable
lbl_sGameMode_DispatchTable:
	.incbin "baserom.dol", 0x28C908, 0xC4
.global lbl__741_3
lbl__741_3:
	.incbin "baserom.dol", 0x28C9CC, 0x34
.global lbl_widget_resources__Q24zhud18_unnamed_zHud_cpp_
lbl_widget_resources__Q24zhud18_unnamed_zHud_cpp_:
	.incbin "baserom.dol", 0x28CA00, 0x24
.global lbl_level_specials__Q24zhud18_unnamed_zHud_cpp_
lbl_level_specials__Q24zhud18_unnamed_zHud_cpp_:
	.incbin "baserom.dol", 0x28CA24, 0x7C
.global lbl_sEffectFuncs
lbl_sEffectFuncs:
	.incbin "baserom.dol", 0x28CAA0, 0x48
.global lbl_sEffectInitFuncs
lbl_sEffectInitFuncs:
	.incbin "baserom.dol", 0x28CAE8, 0x48
.global lbl_sDefaultShadowVec
lbl_sDefaultShadowVec:
	.incbin "baserom.dol", 0x28CB30, 0x10
.global lbl_lightning_type_names
lbl_lightning_type_names:
	.incbin "baserom.dol", 0x28CB40, 0x10
.global lbl_g_xser_sizeinfo
lbl_g_xser_sizeinfo:
	.incbin "baserom.dol", 0x28CB50, 0x1E4
.global lbl_preinit_bubble_matfx$1073
lbl_preinit_bubble_matfx$1073:
	.incbin "baserom.dol", 0x28CD34, 0x2C
.global lbl_sMusicInfo
lbl_sMusicInfo:
	.incbin "baserom.dol", 0x28CD60, 0x160
.global lbl__760_3
lbl__760_3:
	.incbin "baserom.dol", 0x28CEC0, 0x3C
.global lbl__801
lbl__801:
	.incbin "baserom.dol", 0x28CEFC, 0x24
.global lbl_ptranstbl
lbl_ptranstbl:
	.incbin "baserom.dol", 0x28CF20, 0xC0
.global lbl_80290000
lbl_80290000:
	.incbin "baserom.dol", 0x28CFE0, 0x30
.global lbl__558_3
lbl__558_3:
	.incbin "baserom.dol", 0x28D010, 0x60
.global lbl__686_1
lbl__686_1:
	.incbin "baserom.dol", 0x28D070, 0x50
.global lbl_currSceneStr
lbl_currSceneStr:
	.incbin "baserom.dol", 0x28D0C0, 0x20
.global lbl_sceneRead
lbl_sceneRead:
	.incbin "baserom.dol", 0x28D0E0, 0x20
.global lbl_zSaveLoadUITable
lbl_zSaveLoadUITable:
	.incbin "baserom.dol", 0x28D100, 0x2E8
.global lbl_thumbIconMap
lbl_thumbIconMap:
	.incbin "baserom.dol", 0x28D3E8, 0x3C
.global lbl__1523_1
lbl__1523_1:
	.incbin "baserom.dol", 0x28D424, 0x34
.global lbl__1905_1
lbl__1905_1:
	.incbin "baserom.dol", 0x28D458, 0x2C
.global lbl__1904
lbl__1904:
	.incbin "baserom.dol", 0x28D484, 0x28
.global lbl__1961
lbl__1961:
	.incbin "baserom.dol", 0x28D4AC, 0x2C
.global lbl__1960
lbl__1960:
	.incbin "baserom.dol", 0x28D4D8, 0x30
.global lbl_sLevelTable
lbl_sLevelTable:
	.incbin "baserom.dol", 0x28D508, 0x78
.global lbl_sInitTable
lbl_sInitTable:
	.incbin "baserom.dol", 0x28D580, 0x40C
.global lbl__1593_1
lbl__1593_1:
	.incbin "baserom.dol", 0x28D98C, 0x118
.global lbl__1678
lbl__1678:
	.incbin "baserom.dol", 0x28DAA4, 0x118
.global lbl__1711_1
lbl__1711_1:
	.incbin "baserom.dol", 0x28DBBC, 0x9C
.global lbl__2098_1
lbl__2098_1:
	.incbin "baserom.dol", 0x28DC58, 0x120
.global lbl__2243
lbl__2243:
	.incbin "baserom.dol", 0x28DD78, 0x104
.global lbl_scale
lbl_scale:
	.incbin "baserom.dol", 0x28DE7C, 0xC
.global lbl__1183
lbl__1183:
	.incbin "baserom.dol", 0x28DE88, 0x60
.global lbl_l_normal
lbl_l_normal:
	.incbin "baserom.dol", 0x28DEE8, 0xC
.global lbl_zThrowableModels
lbl_zThrowableModels:
	.incbin "baserom.dol", 0x28DEF4, 0x398
.global lbl_fruitPattern$863
lbl_fruitPattern$863:
	.incbin "baserom.dol", 0x28E28C, 0x4C
.global lbl_Index
lbl_Index:
	.incbin "baserom.dol", 0x28E2D8, 0x24
.global lbl_sWorldInfo
lbl_sWorldInfo:
	.incbin "baserom.dol", 0x28E2FC, 0x3C4
.global lbl_state_text$908
lbl_state_text$908:
	.incbin "baserom.dol", 0x28E6C0, 0x10
.global lbl_text$938
lbl_text$938:
	.incbin "baserom.dol", 0x28E6D0, 0xC
.global lbl_text$943
lbl_text$943:
	.incbin "baserom.dol", 0x28E6DC, 0xC
.global lbl_buffer$965
lbl_buffer$965:
	.incbin "baserom.dol", 0x28E6E8, 0x40
.global lbl_vars__18_unnamed_zVar_cpp_
lbl_vars__18_unnamed_zVar_cpp_:
	.incbin "baserom.dol", 0x28E728, 0x1D4
.global lbl_var_tag$1042
lbl_var_tag$1042:
	.incbin "baserom.dol", 0x28E8FC, 0x14
.global lbl_zVarEntryTable
lbl_zVarEntryTable:
	.incbin "baserom.dol", 0x28E910, 0x130
.global lbl___MIXVolumeTable
lbl___MIXVolumeTable:
	.incbin "baserom.dol", 0x28EA40, 0xB8C
.global lbl___MIXAIVolumeTable
lbl___MIXAIVolumeTable:
	.incbin "baserom.dol", 0x28F5CC, 0x34
.global lbl_sPadData
lbl_sPadData:
	.incbin "baserom.dol", 0x28F600, 0x30
.global lbl_i3d$923
lbl_i3d$923:
	.incbin "baserom.dol", 0x28F630, 0xC
.global lbl_i3d$1072
lbl_i3d$1072:
	.incbin "baserom.dol", 0x28F63C, 0xC
.global lbl_i3d$1483
lbl_i3d$1483:
	.incbin "baserom.dol", 0x28F648, 0x10
.global lbl_g_isgdata_MAIN
lbl_g_isgdata_MAIN:
	.incbin "baserom.dol", 0x28F658, 0x28C
.global lbl_rotatebuf$668
lbl_rotatebuf$668:
	.incbin "baserom.dol", 0x28F8E4, 0x100
.global lbl_datestr$1055
lbl_datestr$1055:
	.incbin "baserom.dol", 0x28F9E4, 0x40
.global lbl_errmsgs$1241
lbl_errmsgs$1241:
	.incbin "baserom.dol", 0x28FA24, 0x58
.global lbl__1876
lbl__1876:
	.incbin "baserom.dol", 0x28FA7C, 0x2C
.global lbl__2177
lbl__2177:
	.incbin "baserom.dol", 0x28FAA8, 0x38
.global lbl_sMBD
lbl_sMBD:
	.incbin "baserom.dol", 0x28FAE0, 0x88
.global lbl_months
lbl_months:
	.incbin "baserom.dol", 0x28FB68, 0x30
.global lbl_dotw
lbl_dotw:
	.incbin "baserom.dol", 0x28FB98, 0x20
.global lbl___vt__14zNPCGoalCommon
lbl___vt__14zNPCGoalCommon:
	.incbin "baserom.dol", 0x28FBB8, 0x38
.global lbl___vt__15zNPCGoalDEVHero
lbl___vt__15zNPCGoalDEVHero:
	.incbin "baserom.dol", 0x28FBF0, 0x34
.global lbl___vt__19zNPCGoalDEVAnimSpin
lbl___vt__19zNPCGoalDEVAnimSpin:
	.incbin "baserom.dol", 0x28FC24, 0x34
.global lbl___vt__20zNPCGoalDEVAnimCycle
lbl___vt__20zNPCGoalDEVAnimCycle:
	.incbin "baserom.dol", 0x28FC58, 0x34
.global lbl___vt__13zNPCGoalLimbo
lbl___vt__13zNPCGoalLimbo:
	.incbin "baserom.dol", 0x28FC8C, 0x34
.global lbl___vt__12zNPCGoalDead
lbl___vt__12zNPCGoalDead:
	.incbin "baserom.dol", 0x28FCC0, 0x34
.global lbl___vt__15zNPCGoalWaiting
lbl___vt__15zNPCGoalWaiting:
	.incbin "baserom.dol", 0x28FCF4, 0x34
.global lbl___vt__14zNPCGoalWander
lbl___vt__14zNPCGoalWander:
	.incbin "baserom.dol", 0x28FD28, 0x34
.global lbl___vt__14zNPCGoalFidget
lbl___vt__14zNPCGoalFidget:
	.incbin "baserom.dol", 0x28FD5C, 0x34
.global lbl___vt__14zNPCGoalPatrol
lbl___vt__14zNPCGoalPatrol:
	.incbin "baserom.dol", 0x28FD90, 0x34
.global lbl___vt__12zNPCGoalIdle
lbl___vt__12zNPCGoalIdle:
	.incbin "baserom.dol", 0x28FDC4, 0x34
.global lbl___vt__16zNPCGoalLoopAnim
lbl___vt__16zNPCGoalLoopAnim:
	.incbin "baserom.dol", 0x28FDF8, 0x34
.global lbl___vt__16zNPCGoalPushAnim
lbl___vt__16zNPCGoalPushAnim:
	.incbin "baserom.dol", 0x28FE2C, 0x34
.global lbl___vt__17zNPCGoalNoManLand
lbl___vt__17zNPCGoalNoManLand:
	.incbin "baserom.dol", 0x28FE60, 0x38
.global lbl_g_SharedCollisRecordList
lbl_g_SharedCollisRecordList:
	.incbin "baserom.dol", 0x28FE98, 0x1E0
.global lbl_g_SharedCollisRecord
lbl_g_SharedCollisRecord:
	.incbin "baserom.dol", 0x290078, 0x50
.global lbl__1038
lbl__1038:
	.incbin "baserom.dol", 0x2900C8, 0xF0
.global lbl_g_idx_handbone
lbl_g_idx_handbone:
	.incbin "baserom.dol", 0x2901B8, 0x18
.global lbl__3228
lbl__3228:
	.incbin "baserom.dol", 0x2901D0, 0x1C
.global lbl_totypes$3850
lbl_totypes$3850:
	.incbin "baserom.dol", 0x2901EC, 0x10
.global lbl_ang_delta$4622
lbl_ang_delta$4622:
	.incbin "baserom.dol", 0x2901FC, 0xC
.global lbl_scale$4623
lbl_scale$4623:
	.incbin "baserom.dol", 0x290208, 0xC
.global lbl_scale$4673
lbl_scale$4673:
	.incbin "baserom.dol", 0x290214, 0xC
.global lbl__4959
lbl__4959:
	.incbin "baserom.dol", 0x290220, 0x34
.global lbl_g_map_policeCounter
lbl_g_map_policeCounter:
	.incbin "baserom.dol", 0x290254, 0x88
.global lbl_g_cntr_policeLineup
lbl_g_cntr_policeLineup:
	.incbin "baserom.dol", 0x2902DC, 0x3C
.global lbl___vt__15zNPCGoalDeflate
lbl___vt__15zNPCGoalDeflate:
	.incbin "baserom.dol", 0x290318, 0x34
.global lbl___vt__17zNPCGoalTubeDying
lbl___vt__17zNPCGoalTubeDying:
	.incbin "baserom.dol", 0x29034C, 0x34
.global lbl___vt__16zNPCGoalTubeDead
lbl___vt__16zNPCGoalTubeDead:
	.incbin "baserom.dol", 0x290380, 0x34
.global lbl___vt__18zNPCGoalTubeBonked
lbl___vt__18zNPCGoalTubeBonked:
	.incbin "baserom.dol", 0x2903B4, 0x34
.global lbl___vt__17zNPCGoalTubeBirth
lbl___vt__17zNPCGoalTubeBirth:
	.incbin "baserom.dol", 0x2903E8, 0x34
.global lbl___vt__17zNPCGoalTubeLasso
lbl___vt__17zNPCGoalTubeLasso:
	.incbin "baserom.dol", 0x29041C, 0x34
.global lbl___vt__18zNPCGoalTubeAttack
lbl___vt__18zNPCGoalTubeAttack:
	.incbin "baserom.dol", 0x290450, 0x34
.global lbl___vt__20zNPCGoalTubeDuckling
lbl___vt__20zNPCGoalTubeDuckling:
	.incbin "baserom.dol", 0x290484, 0x34
.global lbl___vt__15zNPCGoalTubePal
lbl___vt__15zNPCGoalTubePal:
	.incbin "baserom.dol", 0x2904B8, 0x34
.global lbl___vt__15zNPCGoalRespawn
lbl___vt__15zNPCGoalRespawn:
	.incbin "baserom.dol", 0x2904EC, 0x34
.global lbl___vt__17zNPCGoalAfterlife
lbl___vt__17zNPCGoalAfterlife:
	.incbin "baserom.dol", 0x290520, 0x34
.global lbl___vt__13zNPCGoalKnock
lbl___vt__13zNPCGoalKnock:
	.incbin "baserom.dol", 0x290554, 0x34
.global lbl___vt__13zNPCGoalWound
lbl___vt__13zNPCGoalWound:
	.incbin "baserom.dol", 0x290588, 0x34
.global lbl___vt__14zNPCGoalBashed
lbl___vt__14zNPCGoalBashed:
	.incbin "baserom.dol", 0x2905BC, 0x34
.global lbl___vt__14zNPCGoalDamage
lbl___vt__14zNPCGoalDamage:
	.incbin "baserom.dol", 0x2905F0, 0x34
.global lbl___vt__18zNPCGoalLassoThrow
lbl___vt__18zNPCGoalLassoThrow:
	.incbin "baserom.dol", 0x290624, 0x34
.global lbl___vt__17zNPCGoalLassoGrab
lbl___vt__17zNPCGoalLassoGrab:
	.incbin "baserom.dol", 0x290658, 0x34
.global lbl___vt__17zNPCGoalLassoBase
lbl___vt__17zNPCGoalLassoBase:
	.incbin "baserom.dol", 0x29068C, 0x34
.global lbl___vt__16zNPCGoalPatThrow
lbl___vt__16zNPCGoalPatThrow:
	.incbin "baserom.dol", 0x2906C0, 0x34
.global lbl___vt__16zNPCGoalPatCarry
lbl___vt__16zNPCGoalPatCarry:
	.incbin "baserom.dol", 0x2906F4, 0x34
.global lbl___vt__15zNPCGoalStunned
lbl___vt__15zNPCGoalStunned:
	.incbin "baserom.dol", 0x290728, 0x34
.global lbl___vt__15zNPCGoalEvilPat
lbl___vt__15zNPCGoalEvilPat:
	.incbin "baserom.dol", 0x29075C, 0x34
.global lbl___vt__18zNPCGoalHokeyPokey
lbl___vt__18zNPCGoalHokeyPokey:
	.incbin "baserom.dol", 0x290790, 0x34
.global lbl___vt__16zNPCGoalTeleport
lbl___vt__16zNPCGoalTeleport:
	.incbin "baserom.dol", 0x2907C4, 0x34
.global lbl___vt__17zNPCGoalDogPounce
lbl___vt__17zNPCGoalDogPounce:
	.incbin "baserom.dol", 0x2907F8, 0x34
.global lbl___vt__15zNPCGoalDogDash
lbl___vt__15zNPCGoalDogDash:
	.incbin "baserom.dol", 0x29082C, 0x34
.global lbl___vt__15zNPCGoalDogBark
lbl___vt__15zNPCGoalDogBark:
	.incbin "baserom.dol", 0x290860, 0x34
.global lbl___vt__17zNPCGoalDogLaunch
lbl___vt__17zNPCGoalDogLaunch:
	.incbin "baserom.dol", 0x290894, 0x34
.global lbl___vt__19zNPCGoalAttackSlick
lbl___vt__19zNPCGoalAttackSlick:
	.incbin "baserom.dol", 0x2908C8, 0x34
.global lbl___vt__19zNPCGoalAttackChuck
lbl___vt__19zNPCGoalAttackChuck:
	.incbin "baserom.dol", 0x2908FC, 0x34
.global lbl___vt__17zNPCGoalAttackArf
lbl___vt__17zNPCGoalAttackArf:
	.incbin "baserom.dol", 0x290930, 0x34
.global lbl___vt__22zNPCGoalAttackArfMelee
lbl___vt__22zNPCGoalAttackArfMelee:
	.incbin "baserom.dol", 0x290964, 0x34
.global lbl___vt__21zNPCGoalAttackMonsoon
lbl___vt__21zNPCGoalAttackMonsoon:
	.incbin "baserom.dol", 0x290998, 0x34
.global lbl___vt__20zNPCGoalAttackTarTar
lbl___vt__20zNPCGoalAttackTarTar:
	.incbin "baserom.dol", 0x2909CC, 0x34
.global lbl___vt__20zNPCGoalAttackHammer
lbl___vt__20zNPCGoalAttackHammer:
	.incbin "baserom.dol", 0x290A00, 0x34
.global lbl___vt__21zNPCGoalAttackChomper
lbl___vt__21zNPCGoalAttackChomper:
	.incbin "baserom.dol", 0x290A34, 0x34
.global lbl___vt__Q220zNPCGoalAttackFodder12CattleNotify
lbl___vt__Q220zNPCGoalAttackFodder12CattleNotify:
	.incbin "baserom.dol", 0x290A68, 0xC
.global lbl___vt__20zNPCGoalAttackFodder
lbl___vt__20zNPCGoalAttackFodder:
	.incbin "baserom.dol", 0x290A74, 0x34
.global lbl___vt__17zNPCGoalAttackCQC
lbl___vt__17zNPCGoalAttackCQC:
	.incbin "baserom.dol", 0x290AA8, 0x34
.global lbl___vt__13zNPCGoalChase
lbl___vt__13zNPCGoalChase:
	.incbin "baserom.dol", 0x290ADC, 0x34
.global lbl___vt__18zNPCGoalAlertSlick
lbl___vt__18zNPCGoalAlertSlick:
	.incbin "baserom.dol", 0x290B10, 0x34
.global lbl___vt__20zNPCGoalAlertTubelet
lbl___vt__20zNPCGoalAlertTubelet:
	.incbin "baserom.dol", 0x290B44, 0x34
.global lbl___vt__18zNPCGoalAlertChuck
lbl___vt__18zNPCGoalAlertChuck:
	.incbin "baserom.dol", 0x290B78, 0x34
.global lbl___vt__18zNPCGoalAlertPuppy
lbl___vt__18zNPCGoalAlertPuppy:
	.incbin "baserom.dol", 0x290BAC, 0x34
.global lbl___vt__16zNPCGoalAlertArf
lbl___vt__16zNPCGoalAlertArf:
	.incbin "baserom.dol", 0x290BE0, 0x34
.global lbl___vt__19zNPCGoalAlertSleepy
lbl___vt__19zNPCGoalAlertSleepy:
	.incbin "baserom.dol", 0x290C14, 0x34
.global lbl___vt__20zNPCGoalAlertMonsoon
lbl___vt__20zNPCGoalAlertMonsoon:
	.incbin "baserom.dol", 0x290C48, 0x34
.global lbl___vt__18zNPCGoalAlertGlove
lbl___vt__18zNPCGoalAlertGlove:
	.incbin "baserom.dol", 0x290C7C, 0x34
.global lbl___vt__19zNPCGoalAlertTarTar
lbl___vt__19zNPCGoalAlertTarTar:
	.incbin "baserom.dol", 0x290CB0, 0x34
.global lbl___vt__19zNPCGoalAlertHammer
lbl___vt__19zNPCGoalAlertHammer:
	.incbin "baserom.dol", 0x290CE4, 0x34
.global lbl___vt__20zNPCGoalAlertChomper
lbl___vt__20zNPCGoalAlertChomper:
	.incbin "baserom.dol", 0x290D18, 0x34
.global lbl___vt__20zNPCGoalAlertFodBzzt
lbl___vt__20zNPCGoalAlertFodBzzt:
	.incbin "baserom.dol", 0x290D4C, 0x34
.global lbl___vt__20zNPCGoalAlertFodBomb
lbl___vt__20zNPCGoalAlertFodBomb:
	.incbin "baserom.dol", 0x290D80, 0x34
.global lbl___vt__19zNPCGoalAlertFodder
lbl___vt__19zNPCGoalAlertFodder:
	.incbin "baserom.dol", 0x290DB4, 0x34
.global lbl___vt__13zNPCGoalAlert
lbl___vt__13zNPCGoalAlert:
	.incbin "baserom.dol", 0x290DE8, 0x34
.global lbl___vt__14zNPCGoalGoHome
lbl___vt__14zNPCGoalGoHome:
	.incbin "baserom.dol", 0x290E1C, 0x34
.global lbl___vt__13zNPCGoalEvade
lbl___vt__13zNPCGoalEvade:
	.incbin "baserom.dol", 0x290E50, 0x34
.global lbl___vt__13zNPCGoalTaunt
lbl___vt__13zNPCGoalTaunt:
	.incbin "baserom.dol", 0x290E84, 0x34
.global lbl___vt__14zNPCGoalNotice
lbl___vt__14zNPCGoalNotice:
	.incbin "baserom.dol", 0x290EB8, 0x34
.global lbl___vt__9HAZNotify
lbl___vt__9HAZNotify:
	.incbin "baserom.dol", 0x290EEC, 0xC
.global lbl___vt__16zNPCGoalTikiDead
lbl___vt__16zNPCGoalTikiDead:
	.incbin "baserom.dol", 0x290EF8, 0x34
.global lbl___vt__17zNPCGoalTikiDying
lbl___vt__17zNPCGoalTikiDying:
	.incbin "baserom.dol", 0x290F2C, 0x34
.global lbl___vt__17zNPCGoalTikiCount
lbl___vt__17zNPCGoalTikiCount:
	.incbin "baserom.dol", 0x290F60, 0x34
.global lbl___vt__16zNPCGoalTikiHide
lbl___vt__16zNPCGoalTikiHide:
	.incbin "baserom.dol", 0x290F94, 0x34
.global lbl___vt__18zNPCGoalTikiPatrol
lbl___vt__18zNPCGoalTikiPatrol:
	.incbin "baserom.dol", 0x290FC8, 0x34
.global lbl___vt__16zNPCGoalTikiIdle
lbl___vt__16zNPCGoalTikiIdle:
	.incbin "baserom.dol", 0x290FFC, 0x34
.global lbl_g_postoffice
lbl_g_postoffice:
	.incbin "baserom.dol", 0x291030, 0x30
.global lbl_g_brainTable
lbl_g_brainTable:
	.incbin "baserom.dol", 0x291060, 0x2F4
.global lbl_g_tbltype
lbl_g_tbltype:
	.incbin "baserom.dol", 0x291354, 0xBBC
.global lbl_g_hash_lassanim
lbl_g_hash_lassanim:
	.incbin "baserom.dol", 0x291F10, 0xC
.global lbl_g_strz_lassanim
lbl_g_strz_lassanim:
	.incbin "baserom.dol", 0x291F1C, 0xC
.global lbl_g_strz_params
lbl_g_strz_params:
	.incbin "baserom.dol", 0x291F28, 0x10C
.global lbl_mdlVertToParm
lbl_mdlVertToParm:
	.incbin "baserom.dol", 0x292034, 0x50
.global lbl__1143_1
lbl__1143_1:
	.incbin "baserom.dol", 0x292084, 0x44
.global lbl__1945
lbl__1945:
	.incbin "baserom.dol", 0x2920C8, 0xF8
.global lbl__2454
lbl__2454:
	.incbin "baserom.dol", 0x2921C0, 0x10C
.global lbl__2547
lbl__2547:
	.incbin "baserom.dol", 0x2922CC, 0x10C
.global lbl_localCollis$2611
lbl_localCollis$2611:
	.incbin "baserom.dol", 0x2923D8, 0x50
.global lbl___vt__10zNPCCommon
lbl___vt__10zNPCCommon:
	.incbin "baserom.dol", 0x292428, 0xD0
.global lbl_g_hash_roboanim
lbl_g_hash_roboanim:
	.incbin "baserom.dol", 0x2924F8, 0xA4
.global lbl_g_strz_roboanim
lbl_g_strz_roboanim:
	.incbin "baserom.dol", 0x29259C, 0xB0
.global lbl_g_strz_cloudanim
lbl_g_strz_cloudanim:
	.incbin "baserom.dol", 0x29264C, 0xC
.global lbl__1265_1
lbl__1265_1:
	.incbin "baserom.dol", 0x292658, 0x50
.global lbl__1567
lbl__1567:
	.incbin "baserom.dol", 0x2926A8, 0x9C
.global lbl_g_sleepy_angryStates
lbl_g_sleepy_angryStates:
	.incbin "baserom.dol", 0x292744, 0x14
.global lbl__4198
lbl__4198:
	.incbin "baserom.dol", 0x292758, 0x20
.global lbl_choices$4332
lbl_choices$4332:
	.incbin "baserom.dol", 0x292778, 0xC
.global lbl___vt__9zNPCSlick
lbl___vt__9zNPCSlick:
	.incbin "baserom.dol", 0x292784, 0xD8
.global lbl___vt__13zNPCTubeSlave
lbl___vt__13zNPCTubeSlave:
	.incbin "baserom.dol", 0x29285C, 0xD8
.global lbl___vt__10TubeNotice
lbl___vt__10TubeNotice:
	.incbin "baserom.dol", 0x292934, 0xC
.global lbl___vt__11zNPCTubelet
lbl___vt__11zNPCTubelet:
	.incbin "baserom.dol", 0x292940, 0xD8
.global lbl___vt__9zNPCChuck
lbl___vt__9zNPCChuck:
	.incbin "baserom.dol", 0x292A18, 0xD8
.global lbl___vt__10zNPCArfDog
lbl___vt__10zNPCArfDog:
	.incbin "baserom.dol", 0x292AF0, 0xD8
.global lbl___vt__10zNPCArfArf
lbl___vt__10zNPCArfArf:
	.incbin "baserom.dol", 0x292BC8, 0xD8
.global lbl___vt__10zNPCSleepy
lbl___vt__10zNPCSleepy:
	.incbin "baserom.dol", 0x292CA0, 0xD8
.global lbl___vt__11zNPCMonsoon
lbl___vt__11zNPCMonsoon:
	.incbin "baserom.dol", 0x292D78, 0xD8
.global lbl___vt__9zNPCGlove
lbl___vt__9zNPCGlove:
	.incbin "baserom.dol", 0x292E50, 0xD8
.global lbl___vt__10zNPCTarTar
lbl___vt__10zNPCTarTar:
	.incbin "baserom.dol", 0x292F28, 0xD8
.global lbl___vt__10zNPCHammer
lbl___vt__10zNPCHammer:
	.incbin "baserom.dol", 0x293000, 0xD8
.global lbl___vt__11zNPCCritter
lbl___vt__11zNPCCritter:
	.incbin "baserom.dol", 0x2930D8, 0xD8
.global lbl___vt__11zNPCChomper
lbl___vt__11zNPCChomper:
	.incbin "baserom.dol", 0x2931B0, 0xD8
.global lbl___vt__11zNPCFodBzzt
lbl___vt__11zNPCFodBzzt:
	.incbin "baserom.dol", 0x293288, 0xD8
.global lbl___vt__11zNPCFodBomb
lbl___vt__11zNPCFodBomb:
	.incbin "baserom.dol", 0x293360, 0xD8
.global lbl___vt__10zNPCFodder
lbl___vt__10zNPCFodder:
	.incbin "baserom.dol", 0x293438, 0xD8
.global lbl___vt__9zNPCRobot
lbl___vt__9zNPCRobot:
	.incbin "baserom.dol", 0x293510, 0xD8
.global lbl___vt__8xPSYNote
lbl___vt__8xPSYNote:
	.incbin "baserom.dol", 0x2935E8, 0x10
.global lbl_g_hash_folkanim
lbl_g_hash_folkanim:
	.incbin "baserom.dol", 0x2935F8, 0x68
.global lbl_g_strz_folkanim
lbl_g_strz_folkanim:
	.incbin "baserom.dol", 0x293660, 0x88
.global lbl__1578
lbl__1578:
	.incbin "baserom.dol", 0x2936E8, 0x74
.global lbl_goalsWhichCheer
lbl_goalsWhichCheer:
	.incbin "baserom.dol", 0x29375C, 0x18
.global lbl_choices$1742
lbl_choices$1742:
	.incbin "baserom.dol", 0x293774, 0x10
.global lbl_news_fish_audio
lbl_news_fish_audio:
	.incbin "baserom.dol", 0x293784, 0x11C
.global lbl___vt__15zNPCBubbleBuddy
lbl___vt__15zNPCBubbleBuddy:
	.incbin "baserom.dol", 0x2938A0, 0xD0
.global lbl___vt__14zNPCBalloonBoy
lbl___vt__14zNPCBalloonBoy:
	.incbin "baserom.dol", 0x293970, 0xD0
.global lbl___vt__15zNPCSandyBikini
lbl___vt__15zNPCSandyBikini:
	.incbin "baserom.dol", 0x293A40, 0xD0
.global lbl___vt__12zNPCNewsFish
lbl___vt__12zNPCNewsFish:
	.incbin "baserom.dol", 0x293B10, 0xD0
.global lbl___vt__15zNPCMerManChair
lbl___vt__15zNPCMerManChair:
	.incbin "baserom.dol", 0x293BE0, 0xD0
.global lbl___vt__8zNPCFish
lbl___vt__8zNPCFish:
	.incbin "baserom.dol", 0x293CB0, 0xD0
.global lbl___vt__12zNPCVillager
lbl___vt__12zNPCVillager:
	.incbin "baserom.dol", 0x293D80, 0xD0
.global lbl___vt__Q28ztaskbox8callback
lbl___vt__Q28ztaskbox8callback:
	.incbin "baserom.dol", 0x293E50, 0x10
.global lbl___vt__7HiThere
lbl___vt__7HiThere:
	.incbin "baserom.dol", 0x293E60, 0x10
.global lbl___vt__14zNPCNewsFishTV
lbl___vt__14zNPCNewsFishTV:
	.incbin "baserom.dol", 0x293E70, 0xD0
.global lbl_g_hash_ambianim
lbl_g_hash_ambianim:
	.incbin "baserom.dol", 0x293F40, 0x30
.global lbl_g_strz_ambianim
lbl_g_strz_ambianim:
	.incbin "baserom.dol", 0x293F70, 0x30
.global lbl___vt__12zNPCMimeFish
lbl___vt__12zNPCMimeFish:
	.incbin "baserom.dol", 0x293FA0, 0xD0
.global lbl___vt__11zNPCNeptune
lbl___vt__11zNPCNeptune:
	.incbin "baserom.dol", 0x294070, 0xD0
.global lbl___vt__9zNPCJelly
lbl___vt__9zNPCJelly:
	.incbin "baserom.dol", 0x294140, 0xD0
.global lbl___vt__11zNPCAmbient
lbl___vt__11zNPCAmbient:
	.incbin "baserom.dol", 0x294210, 0xD0
.global lbl___vt__8zNPCTiki
lbl___vt__8zNPCTiki:
	.incbin "baserom.dol", 0x2942E0, 0xD0
.global lbl___vt__5xGoal
lbl___vt__5xGoal:
	.incbin "baserom.dol", 0x2943B0, 0x30
.global lbl___vt__12xGoalGeneric
lbl___vt__12xGoalGeneric:
	.incbin "baserom.dol", 0x2943E0, 0x30
.global lbl___vt__10xGoalEmpty
lbl___vt__10xGoalEmpty:
	.incbin "baserom.dol", 0x294410, 0x30
.global lbl_g_colrec
lbl_g_colrec:
	.incbin "baserom.dol", 0x294440, 0x5B4
.global lbl___vt__9xNPCBasic
lbl___vt__9xNPCBasic:
	.incbin "baserom.dol", 0x2949F4, 0x54
.global lbl_shared__Q212bungee_state35_unnamed_zEntPlayerBungeeState_cpp_
lbl_shared__Q212bungee_state35_unnamed_zEntPlayerBungeeState_cpp_:
	.incbin "baserom.dol", 0x294A48, 0x19C
.global lbl_tweak_cord_off$1014
lbl_tweak_cord_off$1014:
	.incbin "baserom.dol", 0x294BE4, 0xC
.global lbl___vt__Q312bungee_state35_unnamed_zEntPlayerBungeeState_cpp_20attaching_state_type
lbl___vt__Q312bungee_state35_unnamed_zEntPlayerBungeeState_cpp_20attaching_state_type:
	.incbin "baserom.dol", 0x294BF0, 0x18
.global lbl___vt__Q312bungee_state35_unnamed_zEntPlayerBungeeState_cpp_10state_type
lbl___vt__Q312bungee_state35_unnamed_zEntPlayerBungeeState_cpp_10state_type:
	.incbin "baserom.dol", 0x294C08, 0x18
.global lbl___vt__Q312bungee_state35_unnamed_zEntPlayerBungeeState_cpp_18hanging_state_type
lbl___vt__Q312bungee_state35_unnamed_zEntPlayerBungeeState_cpp_18hanging_state_type:
	.incbin "baserom.dol", 0x294C20, 0x18
.global lbl__2594
lbl__2594:
	.incbin "baserom.dol", 0x294C38, 0x88
.global lbl_sParSysInfo
lbl_sParSysInfo:
	.incbin "baserom.dol", 0x294CC0, 0x38
.global lbl__927_1
lbl__927_1:
	.incbin "baserom.dol", 0x294CF8, 0x3C
.global lbl__978_2
lbl__978_2:
	.incbin "baserom.dol", 0x294D34, 0x20
.global lbl__1136_1
lbl__1136_1:
	.incbin "baserom.dol", 0x294D54, 0x44
.global lbl__1006_2
lbl__1006_2:
	.incbin "baserom.dol", 0x294D98, 0x2C
.global lbl__1050_4
lbl__1050_4:
	.incbin "baserom.dol", 0x294DC4, 0x34
.global lbl_sBlendTable_1
lbl_sBlendTable_1:
	.incbin "baserom.dol", 0x294DF8, 0x30
.global lbl_shared__Q29oob_state32_unnamed_zEntPlayerOOBState_cpp_
lbl_shared__Q29oob_state32_unnamed_zEntPlayerOOBState_cpp_:
	.incbin "baserom.dol", 0x294E28, 0x70
.global lbl_idiot_levels__Q29oob_state32_unnamed_zEntPlayerOOBState_cpp_
lbl_idiot_levels__Q29oob_state32_unnamed_zEntPlayerOOBState_cpp_:
	.incbin "baserom.dol", 0x294E98, 0x30
.global lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_13in_state_type
lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_13in_state_type:
	.incbin "baserom.dol", 0x294EC8, 0x14
.global lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_14out_state_type
lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_14out_state_type:
	.incbin "baserom.dol", 0x294EDC, 0x14
.global lbl___vt__Q28ztalkbox8callback
lbl___vt__Q28ztalkbox8callback:
	.incbin "baserom.dol", 0x294EF0, 0x18
.global lbl___vt__Q49oob_state32_unnamed_zEntPlayerOOBState_cpp_15grab_state_type17tutorial_callback
lbl___vt__Q49oob_state32_unnamed_zEntPlayerOOBState_cpp_15grab_state_type17tutorial_callback:
	.incbin "baserom.dol", 0x294F08, 0x18
.global lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_15grab_state_type
lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_15grab_state_type:
	.incbin "baserom.dol", 0x294F20, 0x14
.global lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_10state_type
lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_10state_type:
	.incbin "baserom.dol", 0x294F34, 0x14
.global lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_15drop_state_type
lbl___vt__Q39oob_state32_unnamed_zEntPlayerOOBState_cpp_15drop_state_type:
	.incbin "baserom.dol", 0x294F48, 0x18
.global lbl__1566_1
lbl__1566_1:
	.incbin "baserom.dol", 0x294F60, 0xC0
.global lbl_offs$919
lbl_offs$919:
	.incbin "baserom.dol", 0x295020, 0x60
.global lbl_special_models$666
lbl_special_models$666:
	.incbin "baserom.dol", 0x295080, 0x68
.global lbl__811_1
lbl__811_1:
	.incbin "baserom.dol", 0x2950E8, 0x20
.global lbl___vt__14zNPCGoalScript
lbl___vt__14zNPCGoalScript:
	.incbin "baserom.dol", 0x295108, 0x34
.global lbl___vt__18zNPCGoalScriptAnim
lbl___vt__18zNPCGoalScriptAnim:
	.incbin "baserom.dol", 0x29513C, 0x34
.global lbl___vt__20zNPCGoalScriptAttack
lbl___vt__20zNPCGoalScriptAttack:
	.incbin "baserom.dol", 0x295170, 0x34
.global lbl___vt__18zNPCGoalScriptMove
lbl___vt__18zNPCGoalScriptMove:
	.incbin "baserom.dol", 0x2951A4, 0x34
.global lbl___vt__18zNPCGoalScriptTalk
lbl___vt__18zNPCGoalScriptTalk:
	.incbin "baserom.dol", 0x2951D8, 0x34
.global lbl___vt__20zNPCGoalScriptFollow
lbl___vt__20zNPCGoalScriptFollow:
	.incbin "baserom.dol", 0x29520C, 0x34
.global lbl___vt__18zNPCGoalScriptLead
lbl___vt__18zNPCGoalScriptLead:
	.incbin "baserom.dol", 0x295240, 0x34
.global lbl___vt__18zNPCGoalScriptWait
lbl___vt__18zNPCGoalScriptWait:
	.incbin "baserom.dol", 0x295274, 0x34
.global lbl_g_tmrz_sndplay
lbl_g_tmrz_sndplay:
	.incbin "baserom.dol", 0x2952A8, 0x68
.global lbl_g_strz_sndgroup
lbl_g_strz_sndgroup:
	.incbin "baserom.dol", 0x295310, 0x68
.global lbl_g_sndProps
lbl_g_sndProps:
	.incbin "baserom.dol", 0x295378, 0xCC
.global lbl_g_sndTrax_Universal
lbl_g_sndTrax_Universal:
	.incbin "baserom.dol", 0x295444, 0xC
.global lbl_g_sndTrax_General
lbl_g_sndTrax_General:
	.incbin "baserom.dol", 0x295450, 0xC
.global lbl_g_sndTrax_Villager
lbl_g_sndTrax_Villager:
	.incbin "baserom.dol", 0x29545C, 0x144
.global lbl_g_sndTrax_Squidward
lbl_g_sndTrax_Squidward:
	.incbin "baserom.dol", 0x2955A0, 0x48
.global lbl_g_sndTrax_VillagerCoStar
lbl_g_sndTrax_VillagerCoStar:
	.incbin "baserom.dol", 0x2955E8, 0xC0
.global lbl_g_sndTrax_VillagerMale
lbl_g_sndTrax_VillagerMale:
	.incbin "baserom.dol", 0x2956A8, 0xC
.global lbl_g_sndTrax_VillagerFemale
lbl_g_sndTrax_VillagerFemale:
	.incbin "baserom.dol", 0x2956B4, 0xC
.global lbl_g_sndTrax_VillagerElder
lbl_g_sndTrax_VillagerElder:
	.incbin "baserom.dol", 0x2956C0, 0xC
.global lbl_g_sndTrax_VillagerEldess
lbl_g_sndTrax_VillagerEldess:
	.incbin "baserom.dol", 0x2956CC, 0xC
.global lbl_g_sndTrax_VillagerBoy
lbl_g_sndTrax_VillagerBoy:
	.incbin "baserom.dol", 0x2956D8, 0x18
.global lbl_g_sndTrax_VillagerGirl
lbl_g_sndTrax_VillagerGirl:
	.incbin "baserom.dol", 0x2956F0, 0x18
.global lbl_g_sndTrax_Neptune
lbl_g_sndTrax_Neptune:
	.incbin "baserom.dol", 0x295708, 0xC
.global lbl_g_sndTrax_Jelly
lbl_g_sndTrax_Jelly:
	.incbin "baserom.dol", 0x295714, 0x30
.global lbl_g_sndTrax_TikiShared
lbl_g_sndTrax_TikiShared:
	.incbin "baserom.dol", 0x295744, 0x24
.global lbl_g_sndTrax_TikiThunder
lbl_g_sndTrax_TikiThunder:
	.incbin "baserom.dol", 0x295768, 0x18
.global lbl_g_sndTrax_Duplotron
lbl_g_sndTrax_Duplotron:
	.incbin "baserom.dol", 0x295780, 0x24
.global lbl_g_sndTrax_Robot
lbl_g_sndTrax_Robot:
	.incbin "baserom.dol", 0x2957A4, 0x18
.global lbl_g_sndTrax_Fodder
lbl_g_sndTrax_Fodder:
	.incbin "baserom.dol", 0x2957BC, 0x24
.global lbl_g_sndTrax_FodBomb
lbl_g_sndTrax_FodBomb:
	.incbin "baserom.dol", 0x2957E0, 0x48
.global lbl_g_sndTrax_FodBzzt
lbl_g_sndTrax_FodBzzt:
	.incbin "baserom.dol", 0x295828, 0x24
.global lbl_g_sndTrax_Chomper
lbl_g_sndTrax_Chomper:
	.incbin "baserom.dol", 0x29584C, 0x30
.global lbl_g_sndTrax_Hammer
lbl_g_sndTrax_Hammer:
	.incbin "baserom.dol", 0x29587C, 0x24
.global lbl_g_sndTrax_TarTar
lbl_g_sndTrax_TarTar:
	.incbin "baserom.dol", 0x2958A0, 0x30
.global lbl_g_sndTrax_Glove
lbl_g_sndTrax_Glove:
	.incbin "baserom.dol", 0x2958D0, 0x18
.global lbl_g_sndTrax_Monsoon
lbl_g_sndTrax_Monsoon:
	.incbin "baserom.dol", 0x2958E8, 0x24
.global lbl_g_sndTrax_Sleepy
lbl_g_sndTrax_Sleepy:
	.incbin "baserom.dol", 0x29590C, 0x24
.global lbl_g_sndTrax_Chuck
lbl_g_sndTrax_Chuck:
	.incbin "baserom.dol", 0x295930, 0x3C
.global lbl_g_sndTrax_ArfArf
lbl_g_sndTrax_ArfArf:
	.incbin "baserom.dol", 0x29596C, 0x24
.global lbl_g_sndTrax_ArfDog
lbl_g_sndTrax_ArfDog:
	.incbin "baserom.dol", 0x295990, 0x30
.global lbl_g_sndTrax_Tubelet
lbl_g_sndTrax_Tubelet:
	.incbin "baserom.dol", 0x2959C0, 0x3C
.global lbl_g_sndTrax_Slick
lbl_g_sndTrax_Slick:
	.incbin "baserom.dol", 0x2959FC, 0x3C
.global lbl_g_sndTrax_KingJelly
lbl_g_sndTrax_KingJelly:
	.incbin "baserom.dol", 0x295A38, 0xC
.global lbl_g_sndTrax_Dutchman
lbl_g_sndTrax_Dutchman:
	.incbin "baserom.dol", 0x295A44, 0xC
.global lbl_g_sndTrax_BossSandy
lbl_g_sndTrax_BossSandy:
	.incbin "baserom.dol", 0x295A50, 0x10
.global lbl_g_hash_dupoanim
lbl_g_hash_dupoanim:
	.incbin "baserom.dol", 0x295A60, 0x14
.global lbl_g_strz_dupoanim
lbl_g_strz_dupoanim:
	.incbin "baserom.dol", 0x295A74, 0x14
.global lbl_idx_smoke$1150
lbl_idx_smoke$1150:
	.incbin "baserom.dol", 0x295A88, 0x10
.global lbl___vt__13zNPCDuplotron
lbl___vt__13zNPCDuplotron:
	.incbin "baserom.dol", 0x295A98, 0xD0
.global lbl_sShrapnelTable
lbl_sShrapnelTable:
	.incbin "baserom.dol", 0x295B68, 0x48
.global lbl___vt__17zNPCGoalDuploLive
lbl___vt__17zNPCGoalDuploLive:
	.incbin "baserom.dol", 0x295BB0, 0x34
.global lbl___vt__17zNPCGoalDuploDead
lbl___vt__17zNPCGoalDuploDead:
	.incbin "baserom.dol", 0x295BE4, 0x34
.global lbl_g_smdepot
lbl_g_smdepot:
	.incbin "baserom.dol", 0x295C18, 0x10
.global lbl__1044_1
lbl__1044_1:
	.incbin "baserom.dol", 0x295C28, 0x20
.global lbl_sNPCSndFx
lbl_sNPCSndFx:
	.incbin "baserom.dol", 0x295C48, 0x14
.global lbl_sNPCSndID
lbl_sNPCSndID:
	.incbin "baserom.dol", 0x295C5C, 0x28
.global lbl__2035_1
lbl__2035_1:
	.incbin "baserom.dol", 0x295C84, 0xB8
.global lbl__2063
lbl__2063:
	.incbin "baserom.dol", 0x295D3C, 0xB8
.global lbl_localCollis$2089
lbl_localCollis$2089:
	.incbin "baserom.dol", 0x295DF4, 0x54
.global lbl_new_tags__22_unnamed_zTalkBox_cpp_
lbl_new_tags__22_unnamed_zTalkBox_cpp_:
	.incbin "baserom.dol", 0x295E48, 0xB4
.global lbl___vt__Q222_unnamed_zTalkBox_cpp_16start_state_type
lbl___vt__Q222_unnamed_zTalkBox_cpp_16start_state_type:
	.incbin "baserom.dol", 0x295EFC, 0x14
.global lbl___vt__Q222_unnamed_zTalkBox_cpp_15next_state_type
lbl___vt__Q222_unnamed_zTalkBox_cpp_15next_state_type:
	.incbin "baserom.dol", 0x295F10, 0x14
.global lbl___vt__Q222_unnamed_zTalkBox_cpp_15wait_state_type
lbl___vt__Q222_unnamed_zTalkBox_cpp_15wait_state_type:
	.incbin "baserom.dol", 0x295F24, 0x14
.global lbl___vt__Q222_unnamed_zTalkBox_cpp_10state_type
lbl___vt__Q222_unnamed_zTalkBox_cpp_10state_type:
	.incbin "baserom.dol", 0x295F38, 0x14
.global lbl___vt__Q222_unnamed_zTalkBox_cpp_15stop_state_type
lbl___vt__Q222_unnamed_zTalkBox_cpp_15stop_state_type:
	.incbin "baserom.dol", 0x295F4C, 0x14
.global lbl_render_bk_table__22_unnamed_zTextBox_cpp_
lbl_render_bk_table__22_unnamed_zTextBox_cpp_:
	.incbin "baserom.dol", 0x295F60, 0xC
.global lbl_new_tags__22_unnamed_zTextBox_cpp_
lbl_new_tags__22_unnamed_zTextBox_cpp_:
	.incbin "baserom.dol", 0x295F6C, 0x14
.global lbl___vt__Q28ztaskbox13talk_callback
lbl___vt__Q28ztaskbox13talk_callback:
	.incbin "baserom.dol", 0x295F80, 0x18
.global lbl_g_hash_testanim
lbl_g_hash_testanim:
	.incbin "baserom.dol", 0x295F98, 0x2C
.global lbl_g_strz_testanim
lbl_g_strz_testanim:
	.incbin "baserom.dol", 0x295FC4, 0x2C
.global lbl___vt__8zNPCTest
lbl___vt__8zNPCTest:
	.incbin "baserom.dol", 0x295FF0, 0xD0
.global lbl_g_hash_subbanim
lbl_g_hash_subbanim:
	.incbin "baserom.dol", 0x2960C0, 0x5C
.global lbl_g_strz_subbanim
lbl_g_strz_subbanim:
	.incbin "baserom.dol", 0x29611C, 0x5C
.global lbl___vt__11zNPCSubBoss
lbl___vt__11zNPCSubBoss:
	.incbin "baserom.dol", 0x296178, 0xD0
.global lbl_g_hash_bossanim
lbl_g_hash_bossanim:
	.incbin "baserom.dol", 0x296248, 0x138
.global lbl_g_strz_bossanim
lbl_g_strz_bossanim:
	.incbin "baserom.dol", 0x296380, 0x138
.global lbl___vt__8zNPCBoss
lbl___vt__8zNPCBoss:
	.incbin "baserom.dol", 0x2964B8, 0xD8
.global lbl__850_1
lbl__850_1:
	.incbin "baserom.dol", 0x296590, 0x74
.global lbl___vt__15zNPCGoalBoyWeep
lbl___vt__15zNPCGoalBoyWeep:
	.incbin "baserom.dol", 0x296604, 0x34
.global lbl___vt__15zNPCGoalBoyFall
lbl___vt__15zNPCGoalBoyFall:
	.incbin "baserom.dol", 0x296638, 0x34
.global lbl___vt__15zNPCGoalBoyRide
lbl___vt__15zNPCGoalBoyRide:
	.incbin "baserom.dol", 0x29666C, 0x34
.global lbl___vt__15zNPCGoalBalloon
lbl___vt__15zNPCGoalBalloon:
	.incbin "baserom.dol", 0x2966A0, 0x34
.global lbl___vt__12zNPCGoalHurt
lbl___vt__12zNPCGoalHurt:
	.incbin "baserom.dol", 0x2966D4, 0x34
.global lbl___vt__15zNPCGoalChatter
lbl___vt__15zNPCGoalChatter:
	.incbin "baserom.dol", 0x296708, 0x34
.global lbl___vt__13zNPCGoalCheer
lbl___vt__13zNPCGoalCheer:
	.incbin "baserom.dol", 0x29673C, 0x34
.global lbl___vt__13zNPCGoalSpeak
lbl___vt__13zNPCGoalSpeak:
	.incbin "baserom.dol", 0x296770, 0x34
.global lbl___vt__12zNPCGoalTalk
lbl___vt__12zNPCGoalTalk:
	.incbin "baserom.dol", 0x2967A4, 0x34
.global lbl___vt__18zNPCGoalPlayerNear
lbl___vt__18zNPCGoalPlayerNear:
	.incbin "baserom.dol", 0x2967D8, 0x34
.global lbl___vt__15zNPCGoalBoySwim
lbl___vt__15zNPCGoalBoySwim:
	.incbin "baserom.dol", 0x29680C, 0x34
.global lbl__863_6
lbl__863_6:
	.incbin "baserom.dol", 0x296840, 0x34
.global lbl___vt__12zNPCGoalHere
lbl___vt__12zNPCGoalHere:
	.incbin "baserom.dol", 0x296874, 0x34
.global lbl_sBone
lbl_sBone:
	.incbin "baserom.dol", 0x2968A8, 0x88
.global lbl_sBoneOffset
lbl_sBoneOffset:
	.incbin "baserom.dol", 0x296930, 0x114
.global lbl__1281
lbl__1281:
	.incbin "baserom.dol", 0x296A44, 0x2C
.global lbl___vt__28zNPCGoalBossSandyClothesline
lbl___vt__28zNPCGoalBossSandyClothesline:
	.incbin "baserom.dol", 0x296A70, 0x34
.global lbl___vt__26zNPCGoalBossSandyRunToRope
lbl___vt__26zNPCGoalBossSandyRunToRope:
	.incbin "baserom.dol", 0x296AA4, 0x34
.global lbl___vt__22zNPCGoalBossSandyGetUp
lbl___vt__22zNPCGoalBossSandyGetUp:
	.incbin "baserom.dol", 0x296AD8, 0x34
.global lbl___vt__20zNPCGoalBossSandySit
lbl___vt__20zNPCGoalBossSandySit:
	.incbin "baserom.dol", 0x296B0C, 0x34
.global lbl___vt__21zNPCGoalBossSandyLeap
lbl___vt__21zNPCGoalBossSandyLeap:
	.incbin "baserom.dol", 0x296B40, 0x34
.global lbl___vt__26zNPCGoalBossSandyElbowDrop
lbl___vt__26zNPCGoalBossSandyElbowDrop:
	.incbin "baserom.dol", 0x296B74, 0x34
.global lbl___vt__23zNPCGoalBossSandyNoHead
lbl___vt__23zNPCGoalBossSandyNoHead:
	.incbin "baserom.dol", 0x296BA8, 0x34
.global lbl___vt__22zNPCGoalBossSandyMelee
lbl___vt__22zNPCGoalBossSandyMelee:
	.incbin "baserom.dol", 0x296BDC, 0x34
.global lbl___vt__22zNPCGoalBossSandyChase
lbl___vt__22zNPCGoalBossSandyChase:
	.incbin "baserom.dol", 0x296C10, 0x34
.global lbl___vt__22zNPCGoalBossSandyTaunt
lbl___vt__22zNPCGoalBossSandyTaunt:
	.incbin "baserom.dol", 0x296C44, 0x34
.global lbl___vt__21zNPCGoalBossSandyIdle
lbl___vt__21zNPCGoalBossSandyIdle:
	.incbin "baserom.dol", 0x296C78, 0x34
.global lbl___vt__10zNPCBSandy
lbl___vt__10zNPCBSandy:
	.incbin "baserom.dol", 0x296CAC, 0xDC
.global lbl_sound_name__31_unnamed_zNPCTypeKingJelly_cpp_
lbl_sound_name__31_unnamed_zNPCTypeKingJelly_cpp_:
	.incbin "baserom.dol", 0x296D88, 0x84
.global lbl_boss_cam__31_unnamed_zNPCTypeKingJelly_cpp_
lbl_boss_cam__31_unnamed_zNPCTypeKingJelly_cpp_:
	.incbin "baserom.dol", 0x296E0C, 0x64
.global lbl_cb_fade_obstructions$2233
lbl_cb_fade_obstructions$2233:
	.incbin "baserom.dol", 0x296E70, 0x28
.global lbl_cb_ambient_ring$2234
lbl_cb_ambient_ring$2234:
	.incbin "baserom.dol", 0x296E98, 0x28
.global lbl__2565
lbl__2565:
	.incbin "baserom.dol", 0x296EC0, 0x1C
.global lbl___vt__15zNPCGoalKJDeath
lbl___vt__15zNPCGoalKJDeath:
	.incbin "baserom.dol", 0x296EDC, 0x34
.global lbl___vt__16zNPCGoalKJDamage
lbl___vt__16zNPCGoalKJDamage:
	.incbin "baserom.dol", 0x296F10, 0x34
.global lbl___vt__21zNPCGoalKJShockGround
lbl___vt__21zNPCGoalKJShockGround:
	.incbin "baserom.dol", 0x296F44, 0x34
.global lbl___vt__15zNPCGoalKJTaunt
lbl___vt__15zNPCGoalKJTaunt:
	.incbin "baserom.dol", 0x296F78, 0x34
.global lbl___vt__19zNPCGoalKJSpawnKids
lbl___vt__19zNPCGoalKJSpawnKids:
	.incbin "baserom.dol", 0x296FAC, 0x34
.global lbl___vt__15zNPCGoalKJBored
lbl___vt__15zNPCGoalKJBored:
	.incbin "baserom.dol", 0x296FE0, 0x34
.global lbl___vt__14zNPCGoalKJIdle
lbl___vt__14zNPCGoalKJIdle:
	.incbin "baserom.dol", 0x297014, 0x34
.global lbl___vt__13zNPCKingJelly
lbl___vt__13zNPCKingJelly:
	.incbin "baserom.dol", 0x297048, 0xD0
.global lbl__887_4
lbl__887_4:
	.incbin "baserom.dol", 0x297118, 0xD0
.global lbl___vt__13zNPCGoalExist
lbl___vt__13zNPCGoalExist:
	.incbin "baserom.dol", 0x2971E8, 0x38
.global lbl_boss_cam__27_unnamed_zNPCTypePrawn_cpp_
lbl_boss_cam__27_unnamed_zNPCTypePrawn_cpp_:
	.incbin "baserom.dol", 0x297220, 0x64
.global lbl_from$2071
lbl_from$2071:
	.incbin "baserom.dol", 0x297284, 0xC
.global lbl_to$2072
lbl_to$2072:
	.incbin "baserom.dol", 0x297290, 0xC
.global lbl___vt__18zNPCGoalPrawnDeath
lbl___vt__18zNPCGoalPrawnDeath:
	.incbin "baserom.dol", 0x29729C, 0x34
.global lbl___vt__19zNPCGoalPrawnDamage
lbl___vt__19zNPCGoalPrawnDamage:
	.incbin "baserom.dol", 0x2972D0, 0x34
.global lbl___vt__17zNPCGoalPrawnBowl
lbl___vt__17zNPCGoalPrawnBowl:
	.incbin "baserom.dol", 0x297304, 0x34
.global lbl___vt__17zNPCGoalPrawnBeam
lbl___vt__17zNPCGoalPrawnBeam:
	.incbin "baserom.dol", 0x297338, 0x34
.global lbl___vt__17zNPCGoalPrawnIdle
lbl___vt__17zNPCGoalPrawnIdle:
	.incbin "baserom.dol", 0x29736C, 0x34
.global lbl___vt__9zNPCPrawn
lbl___vt__9zNPCPrawn:
	.incbin "baserom.dol", 0x2973A0, 0xD0
.global lbl_BossArmTags
lbl_BossArmTags:
	.incbin "baserom.dol", 0x297470, 0x60
.global lbl_BossFeetTags
lbl_BossFeetTags:
	.incbin "baserom.dol", 0x2974D0, 0x30
.global lbl___vt__22zNPCGoalBossSB1Deflate
lbl___vt__22zNPCGoalBossSB1Deflate:
	.incbin "baserom.dol", 0x297500, 0x34
.global lbl___vt__20zNPCGoalBossSB1Smash
lbl___vt__20zNPCGoalBossSB1Smash:
	.incbin "baserom.dol", 0x297534, 0x34
.global lbl___vt__20zNPCGoalBossSB1Stomp
lbl___vt__20zNPCGoalBossSB1Stomp:
	.incbin "baserom.dol", 0x297568, 0x34
.global lbl___vt__20zNPCGoalBossSB1Taunt
lbl___vt__20zNPCGoalBossSB1Taunt:
	.incbin "baserom.dol", 0x29759C, 0x34
.global lbl___vt__19zNPCGoalBossSB1Idle
lbl___vt__19zNPCGoalBossSB1Idle:
	.incbin "baserom.dol", 0x2975D0, 0x34
.global lbl___vt__9zNPCB_SB1
lbl___vt__9zNPCB_SB1:
	.incbin "baserom.dol", 0x297604, 0xDC
.global lbl_boss_cam__29_unnamed_zNPCTypeBossSB2_cpp_
lbl_boss_cam__29_unnamed_zNPCTypeBossSB2_cpp_:
	.incbin "baserom.dol", 0x2976E0, 0x64
.global lbl__2368
lbl__2368:
	.incbin "baserom.dol", 0x297744, 0x20
.global lbl___vt__20zNPCGoalBossSB2Death
lbl___vt__20zNPCGoalBossSB2Death:
	.incbin "baserom.dol", 0x297764, 0x34
.global lbl___vt__21zNPCGoalBossSB2Karate
lbl___vt__21zNPCGoalBossSB2Karate:
	.incbin "baserom.dol", 0x297798, 0x34
.global lbl___vt__19zNPCGoalBossSB2Chop
lbl___vt__19zNPCGoalBossSB2Chop:
	.incbin "baserom.dol", 0x2977CC, 0x34
.global lbl___vt__20zNPCGoalBossSB2Swipe
lbl___vt__20zNPCGoalBossSB2Swipe:
	.incbin "baserom.dol", 0x297800, 0x34
.global lbl___vt__19zNPCGoalBossSB2Hunt
lbl___vt__19zNPCGoalBossSB2Hunt:
	.incbin "baserom.dol", 0x297834, 0x34
.global lbl___vt__18zNPCGoalBossSB2Hit
lbl___vt__18zNPCGoalBossSB2Hit:
	.incbin "baserom.dol", 0x297868, 0x34
.global lbl___vt__20zNPCGoalBossSB2Dizzy
lbl___vt__20zNPCGoalBossSB2Dizzy:
	.incbin "baserom.dol", 0x29789C, 0x34
.global lbl___vt__20zNPCGoalBossSB2Taunt
lbl___vt__20zNPCGoalBossSB2Taunt:
	.incbin "baserom.dol", 0x2978D0, 0x34
.global lbl___vt__19zNPCGoalBossSB2Idle
lbl___vt__19zNPCGoalBossSB2Idle:
	.incbin "baserom.dol", 0x297904, 0x34
.global lbl___vt__20zNPCGoalBossSB2Intro
lbl___vt__20zNPCGoalBossSB2Intro:
	.incbin "baserom.dol", 0x297938, 0x34
.global lbl___vt__9zNPCB_SB2
lbl___vt__9zNPCB_SB2:
	.incbin "baserom.dol", 0x29796C, 0xDC
.global lbl_sBone_1
lbl_sBone_1:
	.incbin "baserom.dol", 0x297A48, 0x78
.global lbl_sNFComment
lbl_sNFComment:
	.incbin "baserom.dol", 0x297AC0, 0x128
.global lbl__1220
lbl__1220:
	.incbin "baserom.dol", 0x297BE8, 0x28
.global lbl__2886
lbl__2886:
	.incbin "baserom.dol", 0x297C10, 0x1C
.global lbl___vt__20zNPCGoalBossPatFudge
lbl___vt__20zNPCGoalBossPatFudge:
	.incbin "baserom.dol", 0x297C2C, 0x34
.global lbl___vt__19zNPCGoalBossPatSpin
lbl___vt__19zNPCGoalBossPatSpin:
	.incbin "baserom.dol", 0x297C60, 0x34
.global lbl___vt__20zNPCGoalBossPatSpawn
lbl___vt__20zNPCGoalBossPatSpawn:
	.incbin "baserom.dol", 0x297C94, 0x34
.global lbl___vt__21zNPCGoalBossPatFreeze
lbl___vt__21zNPCGoalBossPatFreeze:
	.incbin "baserom.dol", 0x297CC8, 0x34
.global lbl___vt__20zNPCGoalBossPatSmack
lbl___vt__20zNPCGoalBossPatSmack:
	.incbin "baserom.dol", 0x297CFC, 0x34
.global lbl___vt__18zNPCGoalBossPatRun
lbl___vt__18zNPCGoalBossPatRun:
	.incbin "baserom.dol", 0x297D30, 0x34
.global lbl___vt__19zNPCGoalBossPatSpit
lbl___vt__19zNPCGoalBossPatSpit:
	.incbin "baserom.dol", 0x297D64, 0x34
.global lbl___vt__18zNPCGoalBossPatHit
lbl___vt__18zNPCGoalBossPatHit:
	.incbin "baserom.dol", 0x297D98, 0x34
.global lbl___vt__20zNPCGoalBossPatTaunt
lbl___vt__20zNPCGoalBossPatTaunt:
	.incbin "baserom.dol", 0x297DCC, 0x34
.global lbl___vt__19zNPCGoalBossPatIdle
lbl___vt__19zNPCGoalBossPatIdle:
	.incbin "baserom.dol", 0x297E00, 0x34
.global lbl___vt__12zNPCBPatrick
lbl___vt__12zNPCBPatrick:
	.incbin "baserom.dol", 0x297E34, 0xDC
.global lbl_beam_launch_effect__34_unnamed_zNPCTypeBossPlankton_cpp_
lbl_beam_launch_effect__34_unnamed_zNPCTypeBossPlankton_cpp_:
	.incbin "baserom.dol", 0x297F10, 0xC0
.global lbl__2021
lbl__2021:
	.incbin "baserom.dol", 0x297FD0, 0x34
.global lbl__2049
lbl__2049:
	.incbin "baserom.dol", 0x298004, 0x3C
.global lbl___vt__21zNPCGoalBPlanktonBomb
lbl___vt__21zNPCGoalBPlanktonBomb:
	.incbin "baserom.dol", 0x298040, 0x34
.global lbl___vt__23zNPCGoalBPlanktonMissle
lbl___vt__23zNPCGoalBPlanktonMissle:
	.incbin "baserom.dol", 0x298074, 0x34
.global lbl___vt__21zNPCGoalBPlanktonWall
lbl___vt__21zNPCGoalBPlanktonWall:
	.incbin "baserom.dol", 0x2980A8, 0x34
.global lbl___vt__21zNPCGoalBPlanktonBeam
lbl___vt__21zNPCGoalBPlanktonBeam:
	.incbin "baserom.dol", 0x2980DC, 0x34
.global lbl___vt__22zNPCGoalBPlanktonDizzy
lbl___vt__22zNPCGoalBPlanktonDizzy:
	.incbin "baserom.dol", 0x298110, 0x34
.global lbl___vt__21zNPCGoalBPlanktonFall
lbl___vt__21zNPCGoalBPlanktonFall:
	.incbin "baserom.dol", 0x298144, 0x34
.global lbl___vt__21zNPCGoalBPlanktonStun
lbl___vt__21zNPCGoalBPlanktonStun:
	.incbin "baserom.dol", 0x298178, 0x34
.global lbl___vt__21zNPCGoalBPlanktonMove
lbl___vt__21zNPCGoalBPlanktonMove:
	.incbin "baserom.dol", 0x2981AC, 0x34
.global lbl___vt__22zNPCGoalBPlanktonTaunt
lbl___vt__22zNPCGoalBPlanktonTaunt:
	.incbin "baserom.dol", 0x2981E0, 0x34
.global lbl___vt__21zNPCGoalBPlanktonHunt
lbl___vt__21zNPCGoalBPlanktonHunt:
	.incbin "baserom.dol", 0x298214, 0x34
.global lbl___vt__22zNPCGoalBPlanktonEvade
lbl___vt__22zNPCGoalBPlanktonEvade:
	.incbin "baserom.dol", 0x298248, 0x34
.global lbl___vt__22zNPCGoalBPlanktonFlank
lbl___vt__22zNPCGoalBPlanktonFlank:
	.incbin "baserom.dol", 0x29827C, 0x34
.global lbl___vt__23zNPCGoalBPlanktonAmbush
lbl___vt__23zNPCGoalBPlanktonAmbush:
	.incbin "baserom.dol", 0x2982B0, 0x34
.global lbl___vt__23zNPCGoalBPlanktonAttack
lbl___vt__23zNPCGoalBPlanktonAttack:
	.incbin "baserom.dol", 0x2982E4, 0x34
.global lbl___vt__21zNPCGoalBPlanktonIdle
lbl___vt__21zNPCGoalBPlanktonIdle:
	.incbin "baserom.dol", 0x298318, 0x34
.global lbl___vt__13zNPCBPlankton
lbl___vt__13zNPCBPlankton:
	.incbin "baserom.dol", 0x29834C, 0xDC
.global lbl___vt__6taxiCB
lbl___vt__6taxiCB:
	.incbin "baserom.dol", 0x298428, 0x18
.global lbl_boss_cam__30_unnamed_zNPCTypeDutchman_cpp_
lbl_boss_cam__30_unnamed_zNPCTypeDutchman_cpp_:
	.incbin "baserom.dol", 0x298440, 0x64
.global lbl__2074_1
lbl__2074_1:
	.incbin "baserom.dol", 0x2984A4, 0x30
.global lbl___vt__21zNPCGoalDutchmanDeath
lbl___vt__21zNPCGoalDutchmanDeath:
	.incbin "baserom.dol", 0x2984D4, 0x34
.global lbl___vt__22zNPCGoalDutchmanDamage
lbl___vt__22zNPCGoalDutchmanDamage:
	.incbin "baserom.dol", 0x298508, 0x34
.global lbl___vt__22zNPCGoalDutchmanCaught
lbl___vt__22zNPCGoalDutchmanCaught:
	.incbin "baserom.dol", 0x29853C, 0x34
.global lbl___vt__25zNPCGoalDutchmanPostFlame
lbl___vt__25zNPCGoalDutchmanPostFlame:
	.incbin "baserom.dol", 0x298570, 0x34
.global lbl___vt__21zNPCGoalDutchmanFlame
lbl___vt__21zNPCGoalDutchmanFlame:
	.incbin "baserom.dol", 0x2985A4, 0x34
.global lbl___vt__20zNPCGoalDutchmanBeam
lbl___vt__20zNPCGoalDutchmanBeam:
	.incbin "baserom.dol", 0x2985D8, 0x34
.global lbl___vt__24zNPCGoalDutchmanReappear
lbl___vt__24zNPCGoalDutchmanReappear:
	.incbin "baserom.dol", 0x29860C, 0x34
.global lbl___vt__24zNPCGoalDutchmanTeleport
lbl___vt__24zNPCGoalDutchmanTeleport:
	.incbin "baserom.dol", 0x298640, 0x34
.global lbl___vt__25zNPCGoalDutchmanDisappear
lbl___vt__25zNPCGoalDutchmanDisappear:
	.incbin "baserom.dol", 0x298674, 0x34
.global lbl___vt__20zNPCGoalDutchmanIdle
lbl___vt__20zNPCGoalDutchmanIdle:
	.incbin "baserom.dol", 0x2986A8, 0x34
.global lbl___vt__24zNPCGoalDutchmanInitiate
lbl___vt__24zNPCGoalDutchmanInitiate:
	.incbin "baserom.dol", 0x2986DC, 0x34
.global lbl___vt__19zNPCGoalDutchmanNil
lbl___vt__19zNPCGoalDutchmanNil:
	.incbin "baserom.dol", 0x298710, 0x34
.global lbl___vt__12zNPCDutchman
lbl___vt__12zNPCDutchman:
	.incbin "baserom.dol", 0x298744, 0xCC
.global lbl_groups__24_unnamed_xPtankPool_cpp_
lbl_groups__24_unnamed_xPtankPool_cpp_:
	.incbin "baserom.dol", 0x298810, 0x38
.global lbl__650_1
lbl__650_1:
	.incbin "baserom.dol", 0x298848, 0x38
.global lbl__921_4
lbl__921_4:
	.incbin "baserom.dol", 0x298880, 0x20
.global lbl__944_3
lbl__944_3:
	.incbin "baserom.dol", 0x2988A0, 0x20
.global lbl_g_npar_info
lbl_g_npar_info:
	.incbin "baserom.dol", 0x2988C0, 0xC0
.global lbl_zanyArray$1485
lbl_zanyArray$1485:
	.incbin "baserom.dol", 0x298980, 0x28
.global lbl_g_strz_glyphmodel
lbl_g_strz_glyphmodel:
	.incbin "baserom.dol", 0x2989A8, 0x28
.global lbl_g_cnt_activeGlyphs
lbl_g_cnt_activeGlyphs:
	.incbin "baserom.dol", 0x2989D0, 0x28
.global lbl__896_2
lbl__896_2:
	.incbin "baserom.dol", 0x2989F8, 0x28
.global lbl_g_hazard_rawModel
lbl_g_hazard_rawModel:
	.incbin "baserom.dol", 0x298A20, 0xF0
.global lbl_g_hash_hazanim
lbl_g_hash_hazanim:
	.incbin "baserom.dol", 0x298B10, 0xC
.global lbl_g_strz_hazanim
lbl_g_strz_hazanim:
	.incbin "baserom.dol", 0x298B1C, 0xC
.global lbl_g_haz_uvAnimQue
lbl_g_haz_uvAnimQue:
	.incbin "baserom.dol", 0x298B28, 0xA8
.global lbl_g_funfrag_choices
lbl_g_funfrag_choices:
	.incbin "baserom.dol", 0x298BD0, 0x20
.global lbl_g_data_hazshrap
lbl_g_data_hazshrap:
	.incbin "baserom.dol", 0x298BF0, 0x28
.global lbl_g_rast_hazshad
lbl_g_rast_hazshad:
	.incbin "baserom.dol", 0x298C18, 0xF0
.global lbl__1425_1
lbl__1425_1:
	.incbin "baserom.dol", 0x298D08, 0x6C
.global lbl__1581
lbl__1581:
	.incbin "baserom.dol", 0x298D74, 0x6C
.global lbl__1948
lbl__1948:
	.incbin "baserom.dol", 0x298DE0, 0x6C
.global lbl__2020
lbl__2020:
	.incbin "baserom.dol", 0x298E4C, 0x4C
.global lbl___vt__18zNPCGoalJellyBirth
lbl___vt__18zNPCGoalJellyBirth:
	.incbin "baserom.dol", 0x298E98, 0x34
.global lbl___vt__19zNPCGoalJellyAttack
lbl___vt__19zNPCGoalJellyAttack:
	.incbin "baserom.dol", 0x298ECC, 0x34
.global lbl___vt__19zNPCGoalJellyBumped
lbl___vt__19zNPCGoalJellyBumped:
	.incbin "baserom.dol", 0x298F00, 0x40E4
.global lbl_802A0004
lbl_802A0004:
	.incbin "baserom.dol", 0x29CFE4, 0x19F4
.global lbl_g_cutmap
lbl_g_cutmap:
	.incbin "baserom.dol", 0x29E9D8, 0x120
.global lbl_vec_offset$1889
lbl_vec_offset$1889:
	.incbin "baserom.dol", 0x29EAF8, 0xC
.global lbl_g_idx_handbone$1923
lbl_g_idx_handbone$1923:
	.incbin "baserom.dol", 0x29EB04, 0x18
.global lbl___vt__9XCSNNosey
lbl___vt__9XCSNNosey:
	.incbin "baserom.dol", 0x29EB1C, 0x10
.global lbl___vt__11NCINBeNosey
lbl___vt__11NCINBeNosey:
	.incbin "baserom.dol", 0x29EB2C, 0x14
.global lbl___vt__Q24xhud11text_widget
lbl___vt__Q24xhud11text_widget:
	.incbin "baserom.dol", 0x29EB40, 0x28
.global lbl_comboReward
lbl_comboReward:
	.incbin "baserom.dol", 0x29EB68, 0x380
.global lbl__925_2
lbl__925_2:
	.incbin "baserom.dol", 0x29EEE8, 0x2C
.global lbl_TrackNums
lbl_TrackNums:
	.incbin "baserom.dol", 0x29EF14, 0x20
.global lbl_LogoData
lbl_LogoData:
	.incbin "baserom.dol", 0x29EF34, 0x3A0C
.global lbl_ytable
lbl_ytable:
	.incbin "baserom.dol", 0x2A2940, 0x420
.global lbl_ytable_x4
lbl_ytable_x4:
	.incbin "baserom.dol", 0x2A2D60, 0x420
.global lbl_clamp_ytable
lbl_clamp_ytable:
	.incbin "baserom.dol", 0x2A3180, 0x420
.global lbl_clamptable
lbl_clamptable:
	.incbin "baserom.dol", 0x2A35A0, 0xC20
.global lbl_clamp_a4
lbl_clamp_a4:
	.incbin "baserom.dol", 0x2A41C0, 0x420
.global lbl_clamp_r
lbl_clamp_r:
	.incbin "baserom.dol", 0x2A45E0, 0x400
.global lbl_802A7A00
lbl_802A7A00:
	.incbin "baserom.dol", 0x2A49E0, 0x820
.global lbl_clamp_g
lbl_clamp_g:
	.incbin "baserom.dol", 0x2A5200, 0x400
.global lbl_802A8620
lbl_802A8620:
	.incbin "baserom.dol", 0x2A5600, 0x820
.global lbl_clamp_b
lbl_clamp_b:
	.incbin "baserom.dol", 0x2A5E20, 0x400
.global lbl_802A9240
lbl_802A9240:
	.incbin "baserom.dol", 0x2A6220, 0x820
.global lbl_clamp_rh
lbl_clamp_rh:
	.incbin "baserom.dol", 0x2A6A40, 0xC20
.global lbl_clamp_gh
lbl_clamp_gh:
	.incbin "baserom.dol", 0x2A7660, 0xC20
.global lbl_clamp_bh
lbl_clamp_bh:
	.incbin "baserom.dol", 0x2A8280, 0xC20
.global lbl_clamp_rr
lbl_clamp_rr:
	.incbin "baserom.dol", 0x2A8EA0, 0xC20
.global lbl_clamp_gg
lbl_clamp_gg:
	.incbin "baserom.dol", 0x2A9AC0, 0xC20
.global lbl_clamp_bb
lbl_clamp_bb:
	.incbin "baserom.dol", 0x2AA6E0, 0xC20
.global lbl_mono16
lbl_mono16:
	.incbin "baserom.dol", 0x2AB300, 0x400
.global lbl_mono16x2
lbl_mono16x2:
	.incbin "baserom.dol", 0x2AB700, 0x400
.global lbl_mono32
lbl_mono32:
	.incbin "baserom.dol", 0x2ABB00, 0x400
.global lbl_S
lbl_S:
	.incbin "baserom.dol", 0x2ABF00, 0x44
.global lbl_802AEF64
lbl_802AEF64:
	.incbin "baserom.dol", 0x2ABF44, 0x4
.global lbl_802AEF68
lbl_802AEF68:
	.incbin "baserom.dol", 0x2ABF48, 0x18
.global lbl_YUVTables
lbl_YUVTables:
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
.global lbl_RGBshift
lbl_RGBshift:
	.incbin "baserom.dol", 0x2ACF60, 0x40
.global lbl_blits32
lbl_blits32:
	.incbin "baserom.dol", 0x2ACFA0, 0x80
.global lbl_blits32a
lbl_blits32a:
	.incbin "baserom.dol", 0x2AD020, 0x80
.global lbl_blits16
lbl_blits16:
	.incbin "baserom.dol", 0x2AD0A0, 0x80
.global lbl_blits16a4
lbl_blits16a4:
	.incbin "baserom.dol", 0x2AD120, 0x80
.global lbl_blitsyuy2
lbl_blitsyuy2:
	.incbin "baserom.dol", 0x2AD1A0, 0x80
.global lbl_rlelens
lbl_rlelens:
	.incbin "baserom.dol", 0x2AD220, 0x10
.global lbl_bandtopfreq
lbl_bandtopfreq:
	.incbin "baserom.dol", 0x2AD230, 0x68
.global lbl_invertbins
lbl_invertbins:
	.incbin "baserom.dol", 0x2AD298, 0xC8
.global lbl_huff4decodes
lbl_huff4decodes:
	.incbin "baserom.dol", 0x2AD360, 0x160
.global lbl___AXSrcCycles
lbl___AXSrcCycles:
	.incbin "baserom.dol", 0x2AD4C0, 0xE0
.global lbl___AXCompressorTable
lbl___AXCompressorTable:
	.incbin "baserom.dol", 0x2AD5A0, 0x1A40
.global lbl_axDspSlave
lbl_axDspSlave:
	.incbin "baserom.dol", 0x2AEFE0, 0x1F08
.global lbl_ResetFunctionInfo
lbl_ResetFunctionInfo:
	.incbin "baserom.dol", 0x2B0EE8, 0x18
.global lbl_CardData
lbl_CardData:
	.incbin "baserom.dol", 0x2B0F00, 0x160
.global lbl_SectorSizeTable
lbl_SectorSizeTable:
	.incbin "baserom.dol", 0x2B1060, 0x20
.global lbl_LatencyTable
lbl_LatencyTable:
	.incbin "baserom.dol", 0x2B1080, 0x20
.global lbl__9
lbl__9:
	.incbin "baserom.dol", 0x2B10A0, 0x18
.global lbl__1_5
lbl__1_5:
	.incbin "baserom.dol", 0x2B10B8, 0x80
.global lbl__266
lbl__266:
	.incbin "baserom.dol", 0x2B1138, 0x140
.global lbl__119
lbl__119:
	.incbin "baserom.dol", 0x2B1278, 0xC8
.global lbl__140
lbl__140:
	.incbin "baserom.dol", 0x2B1340, 0x38
.global lbl__239_1
lbl__239_1:
	.incbin "baserom.dol", 0x2B1378, 0x34
.global lbl__265
lbl__265:
	.incbin "baserom.dol", 0x2B13AC, 0x30
.global lbl__271_1
lbl__271_1:
	.incbin "baserom.dol", 0x2B13DC, 0x74
.global lbl__18
lbl__18:
	.incbin "baserom.dol", 0x2B1450, 0xC
.global lbl__24
lbl__24:
	.incbin "baserom.dol", 0x2B145C, 0x34
.global lbl__344
lbl__344:
	.incbin "baserom.dol", 0x2B1490, 0x90
.global lbl__907_4
lbl__907_4:
	.incbin "baserom.dol", 0x2B1520, 0x34
.global lbl__1011_2
lbl__1011_2:
	.incbin "baserom.dol", 0x2B1554, 0x34
.global lbl_ErrorTable
lbl_ErrorTable:
	.incbin "baserom.dol", 0x2B1588, 0x48
.global lbl__38
lbl__38:
	.incbin "baserom.dol", 0x2B15D0, 0x190
.global lbl__1_8
lbl__1_8:
	.incbin "baserom.dol", 0x2B1760, 0x16C
.global lbl_GXTexRegionAddrTable
lbl_GXTexRegionAddrTable:
	.incbin "baserom.dol", 0x2B18CC, 0xC0
.global lbl_GXResetFuncInfo
lbl_GXResetFuncInfo:
	.incbin "baserom.dol", 0x2B198C, 0x14
.global lbl__176
lbl__176:
	.incbin "baserom.dol", 0x2B19A0, 0x68
.global lbl__498
lbl__498:
	.incbin "baserom.dol", 0x2B1A08, 0x44
.global lbl__525
lbl__525:
	.incbin "baserom.dol", 0x2B1A4C, 0x44
.global lbl__820_3
lbl__820_3:
	.incbin "baserom.dol", 0x2B1A90, 0x1C
.global lbl__819_2
lbl__819_2:
	.incbin "baserom.dol", 0x2B1AAC, 0x54
.global lbl_GXNtsc480IntDf
lbl_GXNtsc480IntDf:
	.incbin "baserom.dol", 0x2B1B00, 0x3C
.global lbl_GXMpal480IntDf
lbl_GXMpal480IntDf:
	.incbin "baserom.dol", 0x2B1B3C, 0x3C
.global lbl_GXPal528IntDf
lbl_GXPal528IntDf:
	.incbin "baserom.dol", 0x2B1B78, 0x3C
.global lbl_GXEurgb60Hz480IntDf
lbl_GXEurgb60Hz480IntDf:
	.incbin "baserom.dol", 0x2B1BB4, 0x3C
.global lbl__145
lbl__145:
	.incbin "baserom.dol", 0x2B1BF0, 0x20
.global lbl__104
lbl__104:
	.incbin "baserom.dol", 0x2B1C10, 0xF4
.global lbl__145_1
lbl__145_1:
	.incbin "baserom.dol", 0x2B1D04, 0xF4
.global lbl__224
lbl__224:
	.incbin "baserom.dol", 0x2B1DF8, 0x40
.global lbl_TEVCOpTableST0
lbl_TEVCOpTableST0:
	.incbin "baserom.dol", 0x2B1E38, 0x50
.global lbl_c2r$364
lbl_c2r$364:
	.incbin "baserom.dol", 0x2B1E88, 0x28
.global lbl_p2f$362
lbl_p2f$362:
	.incbin "baserom.dol", 0x2B1EB0, 0x20
.global lbl__281
lbl__281:
	.incbin "baserom.dol", 0x2B1ED0, 0x5C
.global lbl__280
lbl__280:
	.incbin "baserom.dol", 0x2B1F2C, 0x94
.global lbl__1_9
lbl__1_9:
	.incbin "baserom.dol", 0x2B1FC0, 0x1F8
.global lbl_DSPInitCode
lbl_DSPInitCode:
	.incbin "baserom.dol", 0x2B21B8, 0x80
.global lbl__63
lbl__63:
	.incbin "baserom.dol", 0x2B2238, 0x230
.global lbl__61
lbl__61:
	.incbin "baserom.dol", 0x2B2468, 0x1B4
.global lbl__76
lbl__76:
	.incbin "baserom.dol", 0x2B261C, 0x24
.global lbl__13
lbl__13:
	.incbin "baserom.dol", 0x2B2640, 0x2DC
.global lbl__87_2
lbl__87_2:
	.incbin "baserom.dol", 0x2B291C, 0x44
.global lbl_HankakuToCode
lbl_HankakuToCode:
	.incbin "baserom.dol", 0x2B2960, 0x180
.global lbl_Zenkaku2Code
lbl_Zenkaku2Code:
	.incbin "baserom.dol", 0x2B2AE0, 0x990
.global lbl_InterruptPrioTable
lbl_InterruptPrioTable:
	.incbin "baserom.dol", 0x2B3470, 0x30
.global lbl_ResetFunctionInfo_1
lbl_ResetFunctionInfo_1:
	.incbin "baserom.dol", 0x2B34A0, 0x10
.global lbl_YearDays
lbl_YearDays:
	.incbin "baserom.dol", 0x2B34B0, 0x30
.global lbl_LeapYearDays
lbl_LeapYearDays:
	.incbin "baserom.dol", 0x2B34E0, 0x78
.global lbl_ResetFunctionInfo_2
lbl_ResetFunctionInfo_2:
	.incbin "baserom.dol", 0x2B3558, 0x10
.global lbl__1_11
lbl__1_11:
	.incbin "baserom.dol", 0x2B3568, 0x44
.global lbl_Si
lbl_Si:
	.incbin "baserom.dol", 0x2B35AC, 0x14
.global lbl_Type_1
lbl_Type_1:
	.incbin "baserom.dol", 0x2B35C0, 0xC0
.global lbl_XYNTSC
lbl_XYNTSC:
	.incbin "baserom.dol", 0x2B3680, 0x98
.global lbl__1_12
lbl__1_12:
	.incbin "baserom.dol", 0x2B3718, 0x1F4
.global lbl__97_2
lbl__97_2:
	.incbin "baserom.dol", 0x2B390C, 0x1C0
.global lbl__736
lbl__736:
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
.global lbl_gTRKDispatchTable
lbl_gTRKDispatchTable:
	.incbin "baserom.dol", 0x2B4548, 0x88
.global lbl__879_2
lbl__879_2:
	.incbin "baserom.dol", 0x2B45D0, 0x1C
.global lbl__975_3
lbl__975_3:
	.incbin "baserom.dol", 0x2B45EC, 0x1C
.global lbl_gTRKRestoreFlags
lbl_gTRKRestoreFlags:
	.incbin "baserom.dol", 0x2B4608, 0xC
.global lbl_gTRKExceptionStatus
lbl_gTRKExceptionStatus:
	.incbin "baserom.dol", 0x2B4614, 0x10
.global lbl_gTRKStepStatus
lbl_gTRKStepStatus:
	.incbin "baserom.dol", 0x2B4624, 0x14
.global lbl_TRK_ISR_OFFSETS
lbl_TRK_ISR_OFFSETS:
	.incbin "baserom.dol", 0x2B4638, 0x40
.global lbl_gDBCommTable
lbl_gDBCommTable:
	.incbin "baserom.dol", 0x2B4678, 0x20
.global lbl_MatFXInfo
lbl_MatFXInfo:
	.incbin "baserom.dol", 0x2B4698, 0xC
.global lbl__928_1
lbl__928_1:
	.incbin "baserom.dol", 0x2B46A4, 0x1C
.global lbl_defaultCB
lbl_defaultCB:
	.incbin "baserom.dol", 0x2B46C0, 0x10
.global lbl__rpSkinGlobals
lbl__rpSkinGlobals:
	.incbin "baserom.dol", 0x2B46D0, 0x40
.global lbl_atomicTKList
lbl_atomicTKList:
	.incbin "baserom.dol", 0x2B4710, 0x18
.global lbl_clumpTKList
lbl_clumpTKList:
	.incbin "baserom.dol", 0x2B4728, 0x18
.global lbl_geometryTKList
lbl_geometryTKList:
	.incbin "baserom.dol", 0x2B4740, 0x18
.global lbl_lightTKList
lbl_lightTKList:
	.incbin "baserom.dol", 0x2B4758, 0x18
.global lbl_materialTKList
lbl_materialTKList:
	.incbin "baserom.dol", 0x2B4770, 0x18
.global lbl_defaultSurfaceProperties
lbl_defaultSurfaceProperties:
	.incbin "baserom.dol", 0x2B4788, 0x10
.global lbl_MeshopStatic
lbl_MeshopStatic:
	.incbin "baserom.dol", 0x2B4798, 0x18
.global lbl_sectorTKList
lbl_sectorTKList:
	.incbin "baserom.dol", 0x2B47B0, 0x18
.global lbl_worldTKList
lbl_worldTKList:
	.incbin "baserom.dol", 0x2B47C8, 0x34
.global lbl_nodeGameCubeAtomicAllInOneCSL$487
lbl_nodeGameCubeAtomicAllInOneCSL$487:
	.incbin "baserom.dol", 0x2B47FC, 0x68
.global lbl_nodeGameCubeWorldSectorAllInOneCSL$357
lbl_nodeGameCubeWorldSectorAllInOneCSL$357:
	.incbin "baserom.dol", 0x2B4864, 0x44
.global lbl__486
lbl__486:
	.incbin "baserom.dol", 0x2B48A8, 0x2C
.global lbl__485_1
lbl__485_1:
	.incbin "baserom.dol", 0x2B48D4, 0x2C
.global lbl__484
lbl__484:
	.incbin "baserom.dol", 0x2B4900, 0x2C
.global lbl__683_3
lbl__683_3:
	.incbin "baserom.dol", 0x2B492C, 0x2C
.global lbl__682_3
lbl__682_3:
	.incbin "baserom.dol", 0x2B4958, 0x2C
.global lbl__681_3
lbl__681_3:
	.incbin "baserom.dol", 0x2B4984, 0x2C
.global lbl__680_4
lbl__680_4:
	.incbin "baserom.dol", 0x2B49B0, 0x2C
.global lbl__679_3
lbl__679_3:
	.incbin "baserom.dol", 0x2B49DC, 0x2C
.global lbl__345_1
lbl__345_1:
	.incbin "baserom.dol", 0x2B4A08, 0x20
.global lbl__421
lbl__421:
	.incbin "baserom.dol", 0x2B4A28, 0x58
.global lbl__827_1
lbl__827_1:
	.incbin "baserom.dol", 0x2B4A80, 0x58
.global lbl__347_4
lbl__347_4:
	.incbin "baserom.dol", 0x2B4AD8, 0x30
.global lbl__441_13
lbl__441_13:
	.incbin "baserom.dol", 0x2B4B08, 0x30
.global lbl__384_2
lbl__384_2:
	.incbin "baserom.dol", 0x2B4B38, 0x30
.global lbl__303
lbl__303:
	.incbin "baserom.dol", 0x2B4B68, 0x44
.global lbl__413
lbl__413:
	.incbin "baserom.dol", 0x2B4BAC, 0x6C
.global lbl__69_2
lbl__69_2:
	.incbin "baserom.dol", 0x2B4C18, 0x70
.global lbl__587_1
lbl__587_1:
	.incbin "baserom.dol", 0x2B4C88, 0x20
.global lbl_cameraTKList
lbl_cameraTKList:
	.incbin "baserom.dol", 0x2B4CA8, 0x18
.global lbl__549
lbl__549:
	.incbin "baserom.dol", 0x2B4CC0, 0x28
.global lbl_engineTKList
lbl_engineTKList:
	.incbin "baserom.dol", 0x2B4CE8, 0x18
.global lbl_frameTKList
lbl_frameTKList:
	.incbin "baserom.dol", 0x2B4D00, 0x18
.global lbl_imageTKList
lbl_imageTKList:
	.incbin "baserom.dol", 0x2B4D18, 0x18
.global lbl_rasterTKList
lbl_rasterTKList:
	.incbin "baserom.dol", 0x2B4D30, 0x18
.global lbl_textureTKList
lbl_textureTKList:
	.incbin "baserom.dol", 0x2B4D48, 0x18
.global lbl_texDictTKList
lbl_texDictTKList:
	.incbin "baserom.dol", 0x2B4D60, 0x18
.global lbl__rwDlPrimConvTbl
lbl__rwDlPrimConvTbl:
	.incbin "baserom.dol", 0x2B4D78, 0x1C
.global lbl_projVector$276
lbl_projVector$276:
	.incbin "baserom.dol", 0x2B4D94, 0x1C
.global lbl_posMatrix$277
lbl_posMatrix$277:
	.incbin "baserom.dol", 0x2B4DB0, 0x30
.global lbl__397
lbl__397:
	.incbin "baserom.dol", 0x2B4DE0, 0x28
.global lbl__555_3
lbl__555_3:
	.incbin "baserom.dol", 0x2B4E08, 0x44
.global lbl__556_2
lbl__556_2:
	.incbin "baserom.dol", 0x2B4E4C, 0x74
.global lbl__627_3
lbl__627_3:
	.incbin "baserom.dol", 0x2B4EC0, 0x44
.global lbl__628_3
lbl__628_3:
	.incbin "baserom.dol", 0x2B4F04, 0x74
.global lbl__719_3
lbl__719_3:
	.incbin "baserom.dol", 0x2B4F78, 0x74
.global lbl__1033_4
lbl__1033_4:
	.incbin "baserom.dol", 0x2B4FEC, 0x74
.global lbl__RwDlVideoModes
lbl__RwDlVideoModes:
	.incbin "baserom.dol", 0x2B5060, 0x8C
.global lbl__494_1
lbl__494_1:
	.incbin "baserom.dol", 0x2B50EC, 0x50
.global lbl_projVector$515
lbl_projVector$515:
	.incbin "baserom.dol", 0x2B513C, 0x1C
.global lbl_rwDlDriverDevice$633
lbl_rwDlDriverDevice$633:
	.incbin "baserom.dol", 0x2B5158, 0x38
.global lbl__667_2
lbl__667_2:
	.incbin "baserom.dol", 0x2B5190, 0x78
.global lbl__313
lbl__313:
	.incbin "baserom.dol", 0x2B5208, 0x74
.global lbl__348_5
lbl__348_5:
	.incbin "baserom.dol", 0x2B527C, 0x74
.global lbl__444_2
lbl__444_2:
	.incbin "baserom.dol", 0x2B52F0, 0x74
.global lbl__514_1
lbl__514_1:
	.incbin "baserom.dol", 0x2B5364, 0x74
.global lbl__618_6
lbl__618_6:
	.incbin "baserom.dol", 0x2B53D8, 0x74
.global lbl__617_5
lbl__617_5:
	.incbin "baserom.dol", 0x2B544C, 0x170
.global lbl__827_2
lbl__827_2:
	.incbin "baserom.dol", 0x2B55BC, 0x84
.global lbl__936_1
lbl__936_1:
	.incbin "baserom.dol", 0x2B5640, 0x28
.global lbl__RwDlFogConvTable
lbl__RwDlFogConvTable:
	.incbin "baserom.dol", 0x2B5668, 0x10
.global lbl__RwDlBlendConvTable
lbl__RwDlBlendConvTable:
	.incbin "baserom.dol", 0x2B5678, 0x30
.global lbl__329
lbl__329:
	.incbin "baserom.dol", 0x2B56A8, 0x54
.global lbl__664_2
lbl__664_2:
	.incbin "baserom.dol", 0x2B56FC, 0x54
.global lbl_projVector$276_1
lbl_projVector$276_1:
	.incbin "baserom.dol", 0x2B5750, 0x1C
.global lbl_posMatrix$277_1
lbl_posMatrix$277_1:
	.incbin "baserom.dol", 0x2B576C, 0x30
.global lbl__439_2
lbl__439_2:
	.incbin "baserom.dol", 0x2B579C, 0x34
.global lbl_projVector$455
lbl_projVector$455:
	.incbin "baserom.dol", 0x2B57D0, 0x1C
.global lbl_posMatrix$456
lbl_posMatrix$456:
	.incbin "baserom.dol", 0x2B57EC, 0x30
.global lbl__617_6
lbl__617_6:
	.incbin "baserom.dol", 0x2B581C, 0x74
.global lbl__RwDlFilterModeConvTable
lbl__RwDlFilterModeConvTable:
	.incbin "baserom.dol", 0x2B5890, 0x38
.global lbl__RwDlAddressConvTable
lbl__RwDlAddressConvTable:
	.incbin "baserom.dol", 0x2B58C8, 0x14
.global lbl__RwDlTextureCache
lbl__RwDlTextureCache:
	.incbin "baserom.dol", 0x2B58DC, 0x24
.global lbl__rwDlPrimConvTbl_1
lbl__rwDlPrimConvTbl_1:
	.incbin "baserom.dol", 0x2B5900, 0x2C
.global lbl_nodeImmInstanceCSL$282
lbl_nodeImmInstanceCSL$282:
	.incbin "baserom.dol", 0x2B592C, 0x54
.global lbl_nodeDlSubmitNoLightCSL$661
lbl_nodeDlSubmitNoLightCSL$661:
	.incbin "baserom.dol", 0x2B5980, 0x40
