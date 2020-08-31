.section .sdata  # 0x803CA900 - 0x803CB160
.global lbl_g_loadlock
lbl_g_loadlock:
	.incbin "baserom.dol", 0x2B59C0, 0x8
.global lbl_xcam_do_collis
lbl_xcam_do_collis:
	.incbin "baserom.dol", 0x2B59C8, 0x4
.global lbl_xcam_collis_radius
lbl_xcam_collis_radius:
	.incbin "baserom.dol", 0x2B59CC, 0x4
.global lbl_xcam_collis_stiffness
lbl_xcam_collis_stiffness:
	.incbin "baserom.dol", 0x2B59D0, 0x8
.global lbl_snow_life
lbl_snow_life:
	.incbin "baserom.dol", 0x2B59D8, 0x8
.global lbl_nsn_angle
lbl_nsn_angle:
	.incbin "baserom.dol", 0x2B59E0, 0x8
.global lbl_dbg_idx
lbl_dbg_idx:
	.incbin "baserom.dol", 0x2B59E8, 0x8
.global lbl_format_tags__19_unnamed_xFont_cpp_
lbl_format_tags__19_unnamed_xFont_cpp_:
	.incbin "baserom.dol", 0x2B59F0, 0x4
.global lbl_format_tags_size__19_unnamed_xFont_cpp_
lbl_format_tags_size__19_unnamed_xFont_cpp_:
	.incbin "baserom.dol", 0x2B59F4, 0x4
.global lbl_EnvMapShininess
lbl_EnvMapShininess:
	.incbin "baserom.dol", 0x2B59F8, 0x4
.global lbl_BFX
lbl_BFX:
	.incbin "baserom.dol", 0x2B59FC, 0x4
.global lbl_xFXanimUVRotMat0
lbl_xFXanimUVRotMat0:
	.incbin "baserom.dol", 0x2B5A00, 0x8
.global lbl_xFXanimUVRotMat1
lbl_xFXanimUVRotMat1:
	.incbin "baserom.dol", 0x2B5A08, 0x8
.global lbl_xFXanimUVTrans
lbl_xFXanimUVTrans:
	.incbin "baserom.dol", 0x2B5A10, 0x8
.global lbl_xFXanimUVScale
lbl_xFXanimUVScale:
	.incbin "baserom.dol", 0x2B5A18, 0x8
.global lbl_xFXanimUV2PRotMat0
lbl_xFXanimUV2PRotMat0:
	.incbin "baserom.dol", 0x2B5A20, 0x8
.global lbl_xFXanimUV2PRotMat1
lbl_xFXanimUV2PRotMat1:
	.incbin "baserom.dol", 0x2B5A28, 0x8
.global lbl_xFXanimUV2PTrans
lbl_xFXanimUV2PTrans:
	.incbin "baserom.dol", 0x2B5A30, 0x8
.global lbl_xFXanimUV2PScale
lbl_xFXanimUV2PScale:
	.incbin "baserom.dol", 0x2B5A38, 0x8
.global lbl_tweak_anim_time_delta__Q24xhud27_unnamed_xHudUnitMeter_cpp_
lbl_tweak_anim_time_delta__Q24xhud27_unnamed_xHudUnitMeter_cpp_:
	.incbin "baserom.dol", 0x2B5A40, 0x8
.global lbl_sLetterBoxAlpha
lbl_sLetterBoxAlpha:
	.incbin "baserom.dol", 0x2B5A48, 0x4
.global lbl_sFullScreenGlareIntensity
lbl_sFullScreenGlareIntensity:
	.incbin "baserom.dol", 0x2B5A4C, 0x4
.global lbl_sFullScreenGlareColor
lbl_sFullScreenGlareColor:
	.incbin "baserom.dol", 0x2B5A50, 0x4
.global lbl_indices$1171
lbl_indices$1171:
	.incbin "baserom.dol", 0x2B5A54, 0xC
.global lbl_s_managedEnvSFX
lbl_s_managedEnvSFX:
	.incbin "baserom.dol", 0x2B5A60, 0x8
.global lbl_ShadowStrength
lbl_ShadowStrength:
	.incbin "baserom.dol", 0x2B5A68, 0x4
.global lbl_rscale
lbl_rscale:
	.incbin "baserom.dol", 0x2B5A6C, 0x4
.global lbl_g_crc_needinit
lbl_g_crc_needinit:
	.incbin "baserom.dol", 0x2B5A70, 0x8
.global lbl_jsp_shadow_hack_end_textures
lbl_jsp_shadow_hack_end_textures:
	.incbin "baserom.dol", 0x2B5A78, 0x4
.global lbl_effectFuncList
lbl_effectFuncList:
	.incbin "baserom.dol", 0x2B5A7C, 0xC
.global lbl_zcam_pad_pyaw_scale
lbl_zcam_pad_pyaw_scale:
	.incbin "baserom.dol", 0x2B5A88, 0x4
.global lbl_zcam_pad_pitch_scale
lbl_zcam_pad_pitch_scale:
	.incbin "baserom.dol", 0x2B5A8C, 0x4
.global lbl_zcam_near_d
lbl_zcam_near_d:
	.incbin "baserom.dol", 0x2B5A90, 0x4
.global lbl_zcam_near_h
lbl_zcam_near_h:
	.incbin "baserom.dol", 0x2B5A94, 0x4
.global lbl_zcam_near_pitch
lbl_zcam_near_pitch:
	.incbin "baserom.dol", 0x2B5A98, 0x4
.global lbl_zcam_far_d
lbl_zcam_far_d:
	.incbin "baserom.dol", 0x2B5A9C, 0x4
.global lbl_zcam_far_h
lbl_zcam_far_h:
	.incbin "baserom.dol", 0x2B5AA0, 0x4
.global lbl_zcam_far_pitch
lbl_zcam_far_pitch:
	.incbin "baserom.dol", 0x2B5AA4, 0x4
.global lbl_zcam_wall_d
lbl_zcam_wall_d:
	.incbin "baserom.dol", 0x2B5AA8, 0x4
.global lbl_zcam_wall_h
lbl_zcam_wall_h:
	.incbin "baserom.dol", 0x2B5AAC, 0x4
.global lbl_zcam_wall_pitch
lbl_zcam_wall_pitch:
	.incbin "baserom.dol", 0x2B5AB0, 0x4
.global lbl_zcam_above_d
lbl_zcam_above_d:
	.incbin "baserom.dol", 0x2B5AB4, 0x4
.global lbl_zcam_above_h
lbl_zcam_above_h:
	.incbin "baserom.dol", 0x2B5AB8, 0x4
.global lbl_zcam_above_pitch
lbl_zcam_above_pitch:
	.incbin "baserom.dol", 0x2B5ABC, 0x4
.global lbl_zcam_below_d
lbl_zcam_below_d:
	.incbin "baserom.dol", 0x2B5AC0, 0x4
.global lbl_zcam_below_h
lbl_zcam_below_h:
	.incbin "baserom.dol", 0x2B5AC4, 0x4
.global lbl_zcam_below_pitch
lbl_zcam_below_pitch:
	.incbin "baserom.dol", 0x2B5AC8, 0x4
.global lbl_zcam_highbounce_d
lbl_zcam_highbounce_d:
	.incbin "baserom.dol", 0x2B5ACC, 0x4
.global lbl_zcam_highbounce_h
lbl_zcam_highbounce_h:
	.incbin "baserom.dol", 0x2B5AD0, 0x4
.global lbl_zcam_highbounce_pitch
lbl_zcam_highbounce_pitch:
	.incbin "baserom.dol", 0x2B5AD4, 0x4
.global lbl_zcam_overrot_min
lbl_zcam_overrot_min:
	.incbin "baserom.dol", 0x2B5AD8, 0x4
.global lbl_zcam_overrot_mid
lbl_zcam_overrot_mid:
	.incbin "baserom.dol", 0x2B5ADC, 0x4
.global lbl_zcam_overrot_max
lbl_zcam_overrot_max:
	.incbin "baserom.dol", 0x2B5AE0, 0x4
.global lbl_zcam_overrot_rate
lbl_zcam_overrot_rate:
	.incbin "baserom.dol", 0x2B5AE4, 0x4
.global lbl_zcam_overrot_tstart
lbl_zcam_overrot_tstart:
	.incbin "baserom.dol", 0x2B5AE8, 0x4
.global lbl_zcam_overrot_tend
lbl_zcam_overrot_tend:
	.incbin "baserom.dol", 0x2B5AEC, 0x4
.global lbl_zcam_overrot_velmin
lbl_zcam_overrot_velmin:
	.incbin "baserom.dol", 0x2B5AF0, 0x4
.global lbl_zcam_overrot_velmax
lbl_zcam_overrot_velmax:
	.incbin "baserom.dol", 0x2B5AF4, 0x4
.global lbl_zcam_overrot_tmanual
lbl_zcam_overrot_tmanual:
	.incbin "baserom.dol", 0x2B5AF8, 0x4
.global lbl_zcam_mintgtheight
lbl_zcam_mintgtheight:
	.incbin "baserom.dol", 0x2B5AFC, 0x4
.global lbl_input_enabled__21_unnamed_zCamera_cpp_
lbl_input_enabled__21_unnamed_zCamera_cpp_:
	.incbin "baserom.dol", 0x2B5B00, 0x4
.global lbl_rewardMove
lbl_rewardMove:
	.incbin "baserom.dol", 0x2B5B04, 0x4
.global lbl_rewardMoveSpeed
lbl_rewardMoveSpeed:
	.incbin "baserom.dol", 0x2B5B08, 0x4
.global lbl_rewardZoomSpeed
lbl_rewardZoomSpeed:
	.incbin "baserom.dol", 0x2B5B0C, 0x4
.global lbl_rewardZoomAmount
lbl_rewardZoomAmount:
	.incbin "baserom.dol", 0x2B5B10, 0x4
.global lbl_rewardTiltTime
lbl_rewardTiltTime:
	.incbin "baserom.dol", 0x2B5B14, 0x4
.global lbl_rewardTiltAmount
lbl_rewardTiltAmount:
	.incbin "baserom.dol", 0x2B5B18, 0x8
.global lbl_g_zdsp_depot
lbl_g_zdsp_depot:
	.incbin "baserom.dol", 0x2B5B20, 0x8
.global lbl_sRedMultiplier
lbl_sRedMultiplier:
	.incbin "baserom.dol", 0x2B5B28, 0x4
.global lbl_sGreenMultiplier
lbl_sGreenMultiplier:
	.incbin "baserom.dol", 0x2B5B2C, 0x4
.global lbl_sBlueMultiplier
lbl_sBlueMultiplier:
	.incbin "baserom.dol", 0x2B5B30, 0x4
.global lbl_sColorMultiplier
lbl_sColorMultiplier:
	.incbin "baserom.dol", 0x2B5B34, 0x4
.global lbl_sColorMultiplierSign
lbl_sColorMultiplierSign:
	.incbin "baserom.dol", 0x2B5B38, 0x8
.global lbl_current_tweak__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_
lbl_current_tweak__Q213cruise_bubble30_unnamed_zEntCruiseBubble_cpp_:
	.incbin "baserom.dol", 0x2B5B40, 0x8
.global lbl_SPARKLE_MAX_RATE
lbl_SPARKLE_MAX_RATE:
	.incbin "baserom.dol", 0x2B5B48, 0x4
.global lbl_gEnableRewardsQueue
lbl_gEnableRewardsQueue:
	.incbin "baserom.dol", 0x2B5B4C, 0x4
.global lbl_sSpatulaGrabbedLife
lbl_sSpatulaGrabbedLife:
	.incbin "baserom.dol", 0x2B5B50, 0x4
.global lbl_sUnderwearFade
lbl_sUnderwearFade:
	.incbin "baserom.dol", 0x2B5B54, 0x4
.global lbl_CATCH_CAPSULE_RAD
lbl_CATCH_CAPSULE_RAD:
	.incbin "baserom.dol", 0x2B5B58, 0x4
.global lbl_CATCH_CAPSULE_BIAS
lbl_CATCH_CAPSULE_BIAS:
	.incbin "baserom.dol", 0x2B5B5C, 0x4
.global lbl_minVelmag
lbl_minVelmag:
	.incbin "baserom.dol", 0x2B5B60, 0x4
.global lbl_maxVelmag
lbl_maxVelmag:
	.incbin "baserom.dol", 0x2B5B64, 0x4
.global lbl_surfSlickness
lbl_surfSlickness:
	.incbin "baserom.dol", 0x2B5B68, 0x4
.global lbl_surfFriction
lbl_surfFriction:
	.incbin "baserom.dol", 0x2B5B6C, 0x4
.global lbl_lastSlickness
lbl_lastSlickness:
	.incbin "baserom.dol", 0x2B5B70, 0x4
.global lbl_surfSlideStart
lbl_surfSlideStart:
	.incbin "baserom.dol", 0x2B5B74, 0x4
.global lbl_surfSlideStop
lbl_surfSlideStop:
	.incbin "baserom.dol", 0x2B5B78, 0x4
.global lbl_surfPeakRatio
lbl_surfPeakRatio:
	.incbin "baserom.dol", 0x2B5B7C, 0x4
.global lbl_surfAccelWalk
lbl_surfAccelWalk:
	.incbin "baserom.dol", 0x2B5B80, 0x4
.global lbl_surfAccelRun
lbl_surfAccelRun:
	.incbin "baserom.dol", 0x2B5B84, 0x4
.global lbl_surfDecelIdle
lbl_surfDecelIdle:
	.incbin "baserom.dol", 0x2B5B88, 0x4
.global lbl_surfDecelSkid
lbl_surfDecelSkid:
	.incbin "baserom.dol", 0x2B5B8C, 0x4
.global lbl_update_dt
lbl_update_dt:
	.incbin "baserom.dol", 0x2B5B90, 0x4
.global lbl_last_update_dt
lbl_last_update_dt:
	.incbin "baserom.dol", 0x2B5B94, 0x4
.global lbl_default_player_radius
lbl_default_player_radius:
	.incbin "baserom.dol", 0x2B5B98, 0x4
.global lbl_lastgCurrentPlayer
lbl_lastgCurrentPlayer:
	.incbin "baserom.dol", 0x2B5B9C, 0x4
.global lbl_player_hit_anim
lbl_player_hit_anim:
	.incbin "baserom.dol", 0x2B5BA0, 0x4
.global lbl_player_dead_anim
lbl_player_dead_anim:
	.incbin "baserom.dol", 0x2B5BA4, 0x4
.global lbl_sBubbleBowlLastWindupTime
lbl_sBubbleBowlLastWindupTime:
	.incbin "baserom.dol", 0x2B5BA8, 0x4
.global lbl_sBubbleBowlMultiplier
lbl_sBubbleBowlMultiplier:
	.incbin "baserom.dol", 0x2B5BAC, 0x4
.global lbl_sPlayerNPC_KnockBackTime
lbl_sPlayerNPC_KnockBackTime:
	.incbin "baserom.dol", 0x2B5BB0, 0x4
.global lbl_sPlayerNPC_KnockBackVel
lbl_sPlayerNPC_KnockBackVel:
	.incbin "baserom.dol", 0x2B5BB4, 0x4
.global lbl_counter_text$930
lbl_counter_text$930:
	.incbin "baserom.dol", 0x2B5BB8, 0x8
.global lbl_bubblehit_vel_scale
lbl_bubblehit_vel_scale:
	.incbin "baserom.dol", 0x2B5BC0, 0x8
.global lbl_gPendingPlayer
lbl_gPendingPlayer:
	.incbin "baserom.dol", 0x2B5BC8, 0x4
.global lbl_startPressed
lbl_startPressed:
	.incbin "baserom.dol", 0x2B5BCC, 0x4
.global lbl_black
lbl_black:
	.incbin "baserom.dol", 0x2B5BD0, 0x4
.global lbl_clear
lbl_clear:
	.incbin "baserom.dol", 0x2B5BD4, 0x4
.global lbl_soaklevels
lbl_soaklevels:
	.incbin "baserom.dol", 0x2B5BD8, 0x4
.global lbl_soaktime
lbl_soaktime:
	.incbin "baserom.dol", 0x2B5BDC, 0x4
.global lbl_sPreviousFrames$989
lbl_sPreviousFrames$989:
	.incbin "baserom.dol", 0x2B5BE0, 0x8
.global lbl_bgID
lbl_bgID:
	.incbin "baserom.dol", 0x2B5BE8, 0x4
.global lbl_bgu2
lbl_bgu2:
	.incbin "baserom.dol", 0x2B5BEC, 0x4
.global lbl_bgv2
lbl_bgv2:
	.incbin "baserom.dol", 0x2B5BF0, 0x4
.global lbl_bgr
lbl_bgr:
	.incbin "baserom.dol", 0x2B5BF4, 0x1
.global lbl_bgg
lbl_bgg:
	.incbin "baserom.dol", 0x2B5BF5, 0x1
.global lbl_bgb
lbl_bgb:
	.incbin "baserom.dol", 0x2B5BF6, 0x1
.global lbl_bga
lbl_bga:
	.incbin "baserom.dol", 0x2B5BF7, 0x1
.global lbl_choices$1273
lbl_choices$1273:
	.incbin "baserom.dol", 0x2B5BF8, 0x8
.global lbl_gGameState
lbl_gGameState:
	.incbin "baserom.dol", 0x2B5C00, 0x4
.global lbl_sPauseState_DispatchTable
lbl_sPauseState_DispatchTable:
	.incbin "baserom.dol", 0x2B5C04, 0x8
.global lbl_sOptionsState_DispatchTable
lbl_sOptionsState_DispatchTable:
	.incbin "baserom.dol", 0x2B5C0C, 0x4
.global lbl_sTitleState_DispatchTable
lbl_sTitleState_DispatchTable:
	.incbin "baserom.dol", 0x2B5C10, 0x8
.global lbl_sPauseState_DoDispatchTable
lbl_sPauseState_DoDispatchTable:
	.incbin "baserom.dol", 0x2B5C18, 0x8
.global lbl_sOptionsState_DoDispatchTable
lbl_sOptionsState_DoDispatchTable:
	.incbin "baserom.dol", 0x2B5C20, 0x4
.global lbl_sTitleState_DoDispatchTable
lbl_sTitleState_DoDispatchTable:
	.incbin "baserom.dol", 0x2B5C24, 0xC
.global lbl_last_paused__Q24zhud18_unnamed_zHud_cpp_
lbl_last_paused__Q24zhud18_unnamed_zHud_cpp_:
	.incbin "baserom.dol", 0x2B5C30, 0x8
.global lbl_negativeHondaX
lbl_negativeHondaX:
	.incbin "baserom.dol", 0x2B5C38, 0x8
.global lbl_sLFuncJerkFreq
lbl_sLFuncJerkFreq:
	.incbin "baserom.dol", 0x2B5C40, 0x4
.global lbl_sLFuncShift
lbl_sLFuncShift:
	.incbin "baserom.dol", 0x2B5C44, 0x4
.global lbl_sLFuncMaxPStep
lbl_sLFuncMaxPStep:
	.incbin "baserom.dol", 0x2B5C48, 0x4
.global lbl_sLFuncMinPStep
lbl_sLFuncMinPStep:
	.incbin "baserom.dol", 0x2B5C4C, 0x4
.global lbl_sLFuncMinScale
lbl_sLFuncMinScale:
	.incbin "baserom.dol", 0x2B5C50, 0x4
.global lbl_sLFuncMaxScale
lbl_sLFuncMaxScale:
	.incbin "baserom.dol", 0x2B5C54, 0x4
.global lbl_sLFuncScalePerLength
lbl_sLFuncScalePerLength:
	.incbin "baserom.dol", 0x2B5C58, 0x4
.global lbl_sLFuncMinSpan
lbl_sLFuncMinSpan:
	.incbin "baserom.dol", 0x2B5C5C, 0x4
.global lbl_sLFuncSpanPerLength
lbl_sLFuncSpanPerLength:
	.incbin "baserom.dol", 0x2B5C60, 0x4
.global lbl_sLFuncSlopeRange
lbl_sLFuncSlopeRange:
	.incbin "baserom.dol", 0x2B5C64, 0x4
.global lbl_sLFuncUVSpeed
lbl_sLFuncUVSpeed:
	.incbin "baserom.dol", 0x2B5C68, 0x8
.global lbl_xglobals
lbl_xglobals:
	.incbin "baserom.dol", 0x2B5C70, 0x4
.global lbl_sShowMenuOnBoot
lbl_sShowMenuOnBoot:
	.incbin "baserom.dol", 0x2B5C74, 0x4
.global lbl_gSkipTimeCutscene
lbl_gSkipTimeCutscene:
	.incbin "baserom.dol", 0x2B5C78, 0x4
.global lbl_gSkipTimeFlythrough
lbl_gSkipTimeFlythrough:
	.incbin "baserom.dol", 0x2B5C7C, 0x4
.global lbl_sFirstBoot
lbl_sFirstBoot:
	.incbin "baserom.dol", 0x2B5C80, 0x4
.global lbl_time_elapsed
lbl_time_elapsed:
	.incbin "baserom.dol", 0x2B5C84, 0x4
.global lbl_holdTmr
lbl_holdTmr:
	.incbin "baserom.dol", 0x2B5C88, 0x8
.global lbl_sMusicLastEnum
lbl_sMusicLastEnum:
	.incbin "baserom.dol", 0x2B5C90, 0x8
.global lbl_sMusicTimer
lbl_sMusicTimer:
	.incbin "baserom.dol", 0x2B5C98, 0x8
.global lbl_ptranstbl_size
lbl_ptranstbl_size:
	.incbin "baserom.dol", 0x2B5CA0, 0x8
.global lbl_time_elapsed_1
lbl_time_elapsed_1:
	.incbin "baserom.dol", 0x2B5CA8, 0x4
.global lbl_currentCard
lbl_currentCard:
	.incbin "baserom.dol", 0x2B5CAC, 0x4
.global lbl_currentGame
lbl_currentGame:
	.incbin "baserom.dol", 0x2B5CB0, 0x4
.global lbl_dontPoll
lbl_dontPoll:
	.incbin "baserom.dol", 0x2B5CB4, 0x4
.global lbl_autoSaveCard
lbl_autoSaveCard:
	.incbin "baserom.dol", 0x2B5CB8, 0x8
.global lbl_sMemDepthSceneStart
lbl_sMemDepthSceneStart:
	.incbin "baserom.dol", 0x2B5CC0, 0x4
.global lbl_sMemDepthJustHIPStart
lbl_sMemDepthJustHIPStart:
	.incbin "baserom.dol", 0x2B5CC4, 0x4
.global lbl_scobj_size
lbl_scobj_size:
	.incbin "baserom.dol", 0x2B5CC8, 0x4
.global lbl_nidbps
lbl_nidbps:
	.incbin "baserom.dol", 0x2B5CCC, 0x4
.global lbl_sMapper
lbl_sMapper:
	.incbin "baserom.dol", 0x2B5CD0, 0xC
.global lbl_c_fruit
lbl_c_fruit:
	.incbin "baserom.dol", 0x2B5CDC, 0x4
.global lbl_patsock_text_buffer
lbl_patsock_text_buffer:
	.incbin "baserom.dol", 0x2B5CE0, 0x8
.global lbl_patsock_prev_world
lbl_patsock_prev_world:
	.incbin "baserom.dol", 0x2B5CE8, 0x4
.global lbl_patsock_prev_count
lbl_patsock_prev_count:
	.incbin "baserom.dol", 0x2B5CEC, 0x4
.global lbl_giAnimScratch
lbl_giAnimScratch:
	.incbin "baserom.dol", 0x2B5CF0, 0x8
.global lbl_sCameraNearClip
lbl_sCameraNearClip:
	.incbin "baserom.dol", 0x2B5CF8, 0x4
.global lbl_sCameraFarClip
lbl_sCameraFarClip:
	.incbin "baserom.dol", 0x2B5CFC, 0x4
.global lbl_Width_scale
lbl_Width_scale:
	.incbin "baserom.dol", 0x2B5D00, 0x4
.global lbl_Height_scale
lbl_Height_scale:
	.incbin "baserom.dol", 0x2B5D04, 0x4
.global lbl_mFirstFrame__4iFMV
lbl_mFirstFrame__4iFMV:
	.incbin "baserom.dol", 0x2B5D08, 0x8
.global lbl_bad_val
lbl_bad_val:
	.incbin "baserom.dol", 0x2B5D10, 0x4
.global lbl_test_alloc_val
lbl_test_alloc_val:
	.incbin "baserom.dol", 0x2B5D14, 0x4
.global lbl_rwID_DOLPHINDEVICEMODULE
lbl_rwID_DOLPHINDEVICEMODULE:
	.incbin "baserom.dol", 0x2B5D18, 0x8
.global lbl_g_ang_yankDir
lbl_g_ang_yankDir:
	.incbin "baserom.dol", 0x2B5D20, 0x8
.global lbl_g_tmr_talkless
lbl_g_tmr_talkless:
	.incbin "baserom.dol", 0x2B5D28, 0x8
.global lbl_g_hash_ttsanim
lbl_g_hash_ttsanim:
	.incbin "baserom.dol", 0x2B5D30, 0x8
.global lbl_g_strz_ttsanim
lbl_g_strz_ttsanim:
	.incbin "baserom.dol", 0x2B5D38, 0x8
.global lbl_g_hash_nytlytanim
lbl_g_hash_nytlytanim:
	.incbin "baserom.dol", 0x2B5D40, 0x8
.global lbl_g_strz_nytlytanim
lbl_g_strz_nytlytanim:
	.incbin "baserom.dol", 0x2B5D48, 0x8
.global lbl_g_hash_flotanim
lbl_g_hash_flotanim:
	.incbin "baserom.dol", 0x2B5D50, 0x8
.global lbl_g_strz_flotanim
lbl_g_strz_flotanim:
	.incbin "baserom.dol", 0x2B5D58, 0x8
.global lbl_g_hash_shieldanim
lbl_g_hash_shieldanim:
	.incbin "baserom.dol", 0x2B5D60, 0x8
.global lbl_g_strz_shieldanim
lbl_g_strz_shieldanim:
	.incbin "baserom.dol", 0x2B5D68, 0x8
.global lbl_uv_slice_discoLight__11zNPCFodBzzt
lbl_uv_slice_discoLight__11zNPCFodBzzt:
	.incbin "baserom.dol", 0x2B5D70, 0x8
.global lbl_g_needMusician
lbl_g_needMusician:
	.incbin "baserom.dol", 0x2B5D78, 0x4
.global lbl_uv_deathcone__10zNPCSleepy
lbl_uv_deathcone__10zNPCSleepy:
	.incbin "baserom.dol", 0x2B5D7C, 0x8
.global lbl_uv_nightlight__10zNPCSleepy
lbl_uv_nightlight__10zNPCSleepy:
	.incbin "baserom.dol", 0x2B5D84, 0x8
.global lbl_uv_slice_nightlight__10zNPCSleepy
lbl_uv_slice_nightlight__10zNPCSleepy:
	.incbin "baserom.dol", 0x2B5D8C, 0x8
.global lbl_uv_slice_deathcone__10zNPCSleepy
lbl_uv_slice_deathcone__10zNPCSleepy:
	.incbin "baserom.dol", 0x2B5D94, 0x8
.global lbl_rgba_beg$3329
lbl_rgba_beg$3329:
	.incbin "baserom.dol", 0x2B5D9C, 0x4
.global lbl_rgba_end$3330
lbl_rgba_end$3330:
	.incbin "baserom.dol", 0x2B5DA0, 0x4
.global lbl_uv_top$3442
lbl_uv_top$3442:
	.incbin "baserom.dol", 0x2B5DA4, 0x8
.global lbl_uv_bot$3443
lbl_uv_bot$3443:
	.incbin "baserom.dol", 0x2B5DAC, 0xC
.global lbl_g_hash_platanim
lbl_g_hash_platanim:
	.incbin "baserom.dol", 0x2B5DB8, 0x8
.global lbl_g_strz_platanim
lbl_g_strz_platanim:
	.incbin "baserom.dol", 0x2B5DC0, 0x8
.global lbl_g_vilg_ds2_playernear
lbl_g_vilg_ds2_playernear:
	.incbin "baserom.dol", 0x2B5DC8, 0x4
.global lbl_g_rad_cowercheck
lbl_g_rad_cowercheck:
	.incbin "baserom.dol", 0x2B5DCC, 0x4
.global lbl_alf_currBubBud__15zNPCBubbleBuddy
lbl_alf_currBubBud__15zNPCBubbleBuddy:
	.incbin "baserom.dol", 0x2B5DD0, 0x8
.global lbl_g_hash_tikianim
lbl_g_hash_tikianim:
	.incbin "baserom.dol", 0x2B5DD8, 0x8
.global lbl_g_strz_tikianim
lbl_g_strz_tikianim:
	.incbin "baserom.dol", 0x2B5DE0, 0x8
.global lbl_whichTikiToAnimate
lbl_whichTikiToAnimate:
	.incbin "baserom.dol", 0x2B5DE8, 0x4
.global lbl_sLoveyIconDist
lbl_sLoveyIconDist:
	.incbin "baserom.dol", 0x2B5DEC, 0x4
.global lbl_sLoveyIconOffset
lbl_sLoveyIconOffset:
	.incbin "baserom.dol", 0x2B5DF0, 0x4
.global lbl_timeSinceLastExplode
lbl_timeSinceLastExplode:
	.incbin "baserom.dol", 0x2B5DF4, 0x4
.global lbl_g_tmr_talkytiki
lbl_g_tmr_talkytiki:
	.incbin "baserom.dol", 0x2B5DF8, 0x8
.global lbl_xClumpColl_FilterFlags
lbl_xClumpColl_FilterFlags:
	.incbin "baserom.dol", 0x2B5E00, 0x8
.global lbl_sBubbleStreakID
lbl_sBubbleStreakID:
	.incbin "baserom.dol", 0x2B5E08, 0x8
.global lbl_idx_steam$1151
lbl_idx_steam$1151:
	.incbin "baserom.dol", 0x2B5E10, 0x8
.global lbl_g_hash_uiwidgets
lbl_g_hash_uiwidgets:
	.incbin "baserom.dol", 0x2B5E18, 0x4
.global lbl_g_strz_uiwidgets
lbl_g_strz_uiwidgets:
	.incbin "baserom.dol", 0x2B5E1C, 0x4
.global lbl_acc_thrust__8Firework
lbl_acc_thrust__8Firework:
	.incbin "baserom.dol", 0x2B5E20, 0x4
.global lbl_acc_gravity__8Firework
lbl_acc_gravity__8Firework:
	.incbin "baserom.dol", 0x2B5E24, 0x4
.global lbl_new_tags_size__22_unnamed_zTalkBox_cpp_
lbl_new_tags_size__22_unnamed_zTalkBox_cpp_:
	.incbin "baserom.dol", 0x2B5E28, 0x4
.global lbl_music_fade__22_unnamed_zTalkBox_cpp_
lbl_music_fade__22_unnamed_zTalkBox_cpp_:
	.incbin "baserom.dol", 0x2B5E2C, 0x4
.global lbl_music_fade_delay__22_unnamed_zTalkBox_cpp_
lbl_music_fade_delay__22_unnamed_zTalkBox_cpp_:
	.incbin "baserom.dol", 0x2B5E30, 0x8
.global lbl_new_tags_size__22_unnamed_zTextBox_cpp_
lbl_new_tags_size__22_unnamed_zTextBox_cpp_:
	.incbin "baserom.dol", 0x2B5E38, 0x8
.global lbl_sUseBossCam
lbl_sUseBossCam:
	.incbin "baserom.dol", 0x2B5E40, 0x1
.global lbl_sWasUsingBossCam
lbl_sWasUsingBossCam:
	.incbin "baserom.dol", 0x2B5E41, 0x3
.global lbl_sPCHeightDiff
lbl_sPCHeightDiff:
	.incbin "baserom.dol", 0x2B5E44, 0x4
.global lbl_sHeadPopOffFactor
lbl_sHeadPopOffFactor:
	.incbin "baserom.dol", 0x2B5E48, 0x4
.global lbl_sLeftFootBones
lbl_sLeftFootBones:
	.incbin "baserom.dol", 0x2B5E4C, 0x8
.global lbl_sRightFootBones
lbl_sRightFootBones:
	.incbin "baserom.dol", 0x2B5E54, 0xC
.global lbl_last_hit_at$2858
lbl_last_hit_at$2858:
	.incbin "baserom.dol", 0x2B5E60, 0x8
.global lbl_sUseBossCam_1
lbl_sUseBossCam_1:
	.incbin "baserom.dol", 0x2B5E68, 0x8
.global lbl_sAnswer
lbl_sAnswer:
	.incbin "baserom.dol", 0x2B5E70, 0x8
.global lbl_mFirstFrame__7ROMFont
lbl_mFirstFrame__7ROMFont:
	.incbin "baserom.dol", 0x2B5E78, 0x1
.global lbl_mResetEnabled__11ResetButton
lbl_mResetEnabled__11ResetButton:
	.incbin "baserom.dol", 0x2B5E79, 0x7
.global lbl_g_doNPARCull
lbl_g_doNPARCull:
	.incbin "baserom.dol", 0x2B5E80, 0x8
.global lbl_comboMaxTime
lbl_comboMaxTime:
	.incbin "baserom.dol", 0x2B5E88, 0x4
.global lbl_comboDisplayTime
lbl_comboDisplayTime:
	.incbin "baserom.dol", 0x2B5E8C, 0x4
.global lbl_dtscale
lbl_dtscale:
	.incbin "baserom.dol", 0x2B5E90, 0x4
.global lbl_credits_time
lbl_credits_time:
	.incbin "baserom.dol", 0x2B5E94, 0x4
.global lbl_starttime.189
lbl_starttime.189:
	.incbin "baserom.dol", 0x2B5E98, 0x4
.global lbl_803CADDC
lbl_803CADDC:
	.incbin "baserom.dol", 0x2B5E9C, 0x4
.global lbl_usermalloc
lbl_usermalloc:
	.incbin "baserom.dol", 0x2B5EA0, 0x4
.global lbl_userfree
lbl_userfree:
	.incbin "baserom.dol", 0x2B5EA4, 0x4
.global lbl_userarammalloc
lbl_userarammalloc:
	.incbin "baserom.dol", 0x2B5EA8, 0x4
.global lbl_useraramfree
lbl_useraramfree:
	.incbin "baserom.dol", 0x2B5EAC, 0x4
.global lbl_sysopen
lbl_sysopen:
	.incbin "baserom.dol", 0x2B5EB0, 0x4
.global lbl_sndopen
lbl_sndopen:
	.incbin "baserom.dol", 0x2B5EB4, 0x4
.global lbl_numopensounds
lbl_numopensounds:
	.incbin "baserom.dol", 0x2B5EB8, 0x4
.global lbl_cb_bink_IO
lbl_cb_bink_IO:
	.incbin "baserom.dol", 0x2B5EBC, 0x4
.global lbl_cb_bink_sound
lbl_cb_bink_sound:
	.incbin "baserom.dol", 0x2B5EC0, 0x4
.global lbl_ForceRate
lbl_ForceRate:
	.incbin "baserom.dol", 0x2B5EC4, 0x4
.global lbl_IOBufferSize
lbl_IOBufferSize:
	.incbin "baserom.dol", 0x2B5EC8, 0x4
.global lbl_Simulate
lbl_Simulate:
	.incbin "baserom.dol", 0x2B5ECC, 0x4
.global lbl_TotTracks
lbl_TotTracks:
	.incbin "baserom.dol", 0x2B5ED0, 0x4
.global lbl_UserOpen
lbl_UserOpen:
	.incbin "baserom.dol", 0x2B5ED4, 0x4
.global lbl_whichyuv
lbl_whichyuv:
	.incbin "baserom.dol", 0x2B5ED8, 0x4
.global lbl_rgb_layout
lbl_rgb_layout:
	.incbin "baserom.dol", 0x2B5EDC, 0x4
.global lbl_z2hsize
lbl_z2hsize:
	.incbin "baserom.dol", 0x2B5EE0, 0x4
.global lbl_z2hbuf1
lbl_z2hbuf1:
	.incbin "baserom.dol", 0x2B5EE4, 0x4
.global lbl_z2hbuf2
lbl_z2hbuf2:
	.incbin "baserom.dol", 0x2B5EE8, 0x4
.global lbl_donetables
lbl_donetables:
	.incbin "baserom.dol", 0x2B5EEC, 0x4
.global lbl_pushtot
lbl_pushtot:
	.incbin "baserom.dol", 0x2B5EF0, 0x4
.global lbl_pushcur
lbl_pushcur:
	.incbin "baserom.dol", 0x2B5EF4, 0x4
.global lbl_pushptr
lbl_pushptr:
	.incbin "baserom.dol", 0x2B5EF8, 0x4
.global lbl_pushamt
lbl_pushamt:
	.incbin "baserom.dol", 0x2B5EFC, 0x4
.global lbl_cursize
lbl_cursize:
	.incbin "baserom.dol", 0x2B5F00, 0x8
.global lbl___AIVersion
lbl___AIVersion:
	.incbin "baserom.dol", 0x2B5F08, 0x8
.global lbl___ARVersion
lbl___ARVersion:
	.incbin "baserom.dol", 0x2B5F10, 0x8
.global lbl___ARQVersion
lbl___ARQVersion:
	.incbin "baserom.dol", 0x2B5F18, 0x8
.global lbl___AXVersion
lbl___AXVersion:
	.incbin "baserom.dol", 0x2B5F20, 0x8
.global lbl_axDspSlaveLength
lbl_axDspSlaveLength:
	.incbin "baserom.dol", 0x2B5F28, 0x8
.global lbl___CARDVersion
lbl___CARDVersion:
	.incbin "baserom.dol", 0x2B5F30, 0x8
.global lbl_next
lbl_next:
	.incbin "baserom.dol", 0x2B5F38, 0x8
.global lbl___CARDVendorID
lbl___CARDVendorID:
	.incbin "baserom.dol", 0x2B5F40, 0x2
.global lbl___CARDPermMask
lbl___CARDPermMask:
	.incbin "baserom.dol", 0x2B5F42, 0x6
.global lbl___DSPVersion
lbl___DSPVersion:
	.incbin "baserom.dol", 0x2B5F48, 0x8
.global lbl_FirstRead
lbl_FirstRead:
	.incbin "baserom.dol", 0x2B5F50, 0x8
.global lbl__118
lbl__118:
	.incbin "baserom.dol", 0x2B5F58, 0x8
.global lbl___DVDVersion
lbl___DVDVersion:
	.incbin "baserom.dol", 0x2B5F60, 0x4
.global lbl_autoInvalidation
lbl_autoInvalidation:
	.incbin "baserom.dol", 0x2B5F64, 0x4
.global lbl_checkOptionalCommand
lbl_checkOptionalCommand:
	.incbin "baserom.dol", 0x2B5F68, 0x4
.global lbl__23
lbl__23:
	.incbin "baserom.dol", 0x2B5F6C, 0x8
.global lbl_DmaCommand
lbl_DmaCommand:
	.incbin "baserom.dol", 0x2B5F74, 0x4
.global lbl__37
lbl__37:
	.incbin "baserom.dol", 0x2B5F78, 0x4
.global lbl__42
lbl__42:
	.incbin "baserom.dol", 0x2B5F7C, 0x4
.global lbl__43
lbl__43:
	.incbin "baserom.dol", 0x2B5F80, 0x8
.global lbl___EXIVersion
lbl___EXIVersion:
	.incbin "baserom.dol", 0x2B5F88, 0x8
.global lbl___GXVersion
lbl___GXVersion:
	.incbin "baserom.dol", 0x2B5F90, 0x8
.global lbl_tbl1$263
lbl_tbl1$263:
	.incbin "baserom.dol", 0x2B5F98, 0x4
.global lbl_tbl2$264
lbl_tbl2$264:
	.incbin "baserom.dol", 0x2B5F9C, 0x4
.global lbl_tbl3$265
lbl_tbl3$265:
	.incbin "baserom.dol", 0x2B5FA0, 0x8
.global lbl_GXTexMode0Ids
lbl_GXTexMode0Ids:
	.incbin "baserom.dol", 0x2B5FA8, 0x8
.global lbl_GXTexMode1Ids
lbl_GXTexMode1Ids:
	.incbin "baserom.dol", 0x2B5FB0, 0x8
.global lbl_GXTexImage0Ids
lbl_GXTexImage0Ids:
	.incbin "baserom.dol", 0x2B5FB8, 0x8
.global lbl_GXTexImage1Ids
lbl_GXTexImage1Ids:
	.incbin "baserom.dol", 0x2B5FC0, 0x8
.global lbl_GXTexImage2Ids
lbl_GXTexImage2Ids:
	.incbin "baserom.dol", 0x2B5FC8, 0x8
.global lbl_GXTexImage3Ids
lbl_GXTexImage3Ids:
	.incbin "baserom.dol", 0x2B5FD0, 0x8
.global lbl_GXTexTlutIds
lbl_GXTexTlutIds:
	.incbin "baserom.dol", 0x2B5FD8, 0x8
.global lbl_GX2HWFiltConv
lbl_GX2HWFiltConv:
	.incbin "baserom.dol", 0x2B5FE0, 0x8
.global lbl_Unit01
lbl_Unit01:
	.incbin "baserom.dol", 0x2B5FE8, 0x8
.global lbl___OSVersion
lbl___OSVersion:
	.incbin "baserom.dol", 0x2B5FF0, 0x4
.global lbl__97_1
lbl__97_1:
	.incbin "baserom.dol", 0x2B5FF4, 0x8
.global lbl__144_1
lbl__144_1:
	.incbin "baserom.dol", 0x2B5FFC, 0x4
.global lbl_803CAF40
lbl_803CAF40:
	.incbin "baserom.dol", 0x2B6000, 0x8
.global lbl___OSArenaLo
lbl___OSArenaLo:
	.incbin "baserom.dol", 0x2B6008, 0x8
.global lbl___OSFpscrEnableBits
lbl___OSFpscrEnableBits:
	.incbin "baserom.dol", 0x2B6010, 0x4
.global lbl__76_1
lbl__76_1:
	.incbin "baserom.dol", 0x2B6014, 0x4
.global lbl_fontEncode$80
lbl_fontEncode$80:
	.incbin "baserom.dol", 0x2B6018, 0x8
.global lbl_SwitchThreadCallback
lbl_SwitchThreadCallback:
	.incbin "baserom.dol", 0x2B6020, 0x8
.global lbl___PADVersion
lbl___PADVersion:
	.incbin "baserom.dol", 0x2B6028, 0x4
.global lbl_ResettingChan
lbl_ResettingChan:
	.incbin "baserom.dol", 0x2B602C, 0x4
.global lbl_XPatchBits
lbl_XPatchBits:
	.incbin "baserom.dol", 0x2B6030, 0x4
.global lbl_AnalogMode
lbl_AnalogMode:
	.incbin "baserom.dol", 0x2B6034, 0x4
.global lbl_Spec
lbl_Spec:
	.incbin "baserom.dol", 0x2B6038, 0x4
.global lbl_MakeStatus
lbl_MakeStatus:
	.incbin "baserom.dol", 0x2B603C, 0x4
.global lbl_CmdReadOrigin
lbl_CmdReadOrigin:
	.incbin "baserom.dol", 0x2B6040, 0x4
.global lbl_CmdCalibrate
lbl_CmdCalibrate:
	.incbin "baserom.dol", 0x2B6044, 0x4
.global lbl___SIVersion
lbl___SIVersion:
	.incbin "baserom.dol", 0x2B6048, 0x8
.global lbl___VIVersion
lbl___VIVersion:
	.incbin "baserom.dol", 0x2B6050, 0x4
.global lbl__534
lbl__534:
	.incbin "baserom.dol", 0x2B6054, 0xC
.global lbl_803CAFA0
lbl_803CAFA0:
	.incbin "baserom.dol", 0x2B6060, 0x8
.global lbl_803CAFA8
lbl_803CAFA8:
	.incbin "baserom.dol", 0x2B6068, 0x8
.global lbl_803CAFB0
lbl_803CAFB0:
	.incbin "baserom.dol", 0x2B6070, 0x4
.global lbl_803CAFB4
lbl_803CAFB4:
	.incbin "baserom.dol", 0x2B6074, 0x4
.global lbl_803CAFB8
lbl_803CAFB8:
	.incbin "baserom.dol", 0x2B6078, 0x4
.global lbl_803CAFBC
lbl_803CAFBC:
	.incbin "baserom.dol", 0x2B607C, 0x4
.global lbl_803CAFC0
lbl_803CAFC0:
	.incbin "baserom.dol", 0x2B6080, 0x8
.global lbl_803CAFC8
lbl_803CAFC8:
	.incbin "baserom.dol", 0x2B6088, 0x8
.global lbl_803CAFD0
lbl_803CAFD0:
	.incbin "baserom.dol", 0x2B6090, 0x8
.global lbl_803CAFD8
lbl_803CAFD8:
	.incbin "baserom.dol", 0x2B6098, 0x8
.global lbl_803CAFE0
lbl_803CAFE0:
	.incbin "baserom.dol", 0x2B60A0, 0x10
.global lbl_803CAFF0
lbl_803CAFF0:
	.incbin "baserom.dol", 0x2B60B0, 0x4
.global lbl_803CAFF4
lbl_803CAFF4:
	.incbin "baserom.dol", 0x2B60B4, 0x4
.global lbl_803CAFF8
lbl_803CAFF8:
	.incbin "baserom.dol", 0x2B60B8, 0x18
.global lbl_SendCount
lbl_SendCount:
	.incbin "baserom.dol", 0x2B60D0, 0x8
.global lbl__rpHAnimHierarchyFreeListBlockSize
lbl__rpHAnimHierarchyFreeListBlockSize:
	.incbin "baserom.dol", 0x2B60D8, 0x4
.global lbl__rpHAnimHierarchyFreeListPreallocBlocks
lbl__rpHAnimHierarchyFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B60DC, 0x4
.global lbl__rpMultiTextureModule
lbl__rpMultiTextureModule:
	.incbin "baserom.dol", 0x2B60E0, 0x8
.global lbl__rpMatFXMaterialDataFreeListBlockSize
lbl__rpMatFXMaterialDataFreeListBlockSize:
	.incbin "baserom.dol", 0x2B60E8, 0x4
.global lbl__rpMatFXMaterialDataFreeListPreallocBlocks
lbl__rpMatFXMaterialDataFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B60EC, 0x4
.global lbl__rwPNumber1
lbl__rwPNumber1:
	.incbin "baserom.dol", 0x2B60F0, 0x4
.global lbl__rwConst
lbl__rwConst:
	.incbin "baserom.dol", 0x2B60F4, 0x4
.global lbl__rpSkinFreeListBlockSize
lbl__rpSkinFreeListBlockSize:
	.incbin "baserom.dol", 0x2B60F8, 0x4
.global lbl__rpSkinFreeListPreallocBlocks
lbl__rpSkinFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B60FC, 0x4
.global lbl__rpAtomicFreeListBlockSize
lbl__rpAtomicFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6100, 0x4
.global lbl__rpAtomicFreeListPreallocBlocks
lbl__rpAtomicFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B6104, 0x4
.global lbl__rpClumpFreeListBlockSize
lbl__rpClumpFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6108, 0x4
.global lbl__rpClumpFreeListPreallocBlocks
lbl__rpClumpFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B610C, 0x4
.global lbl__rpLightFreeListBlockSize
lbl__rpLightFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6110, 0x4
.global lbl__rpLightFreeListPreallocBlocks
lbl__rpLightFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B6114, 0x4
.global lbl__rpMaterialFreeListBlockSize
lbl__rpMaterialFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6118, 0x4
.global lbl__rpMaterialFreeListPreallocBlocks
lbl__rpMaterialFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B611C, 0x4
.global lbl_MeshStatic
lbl_MeshStatic:
	.incbin "baserom.dol", 0x2B6120, 0x8
.global lbl__rpTieFreeListBlockSize
lbl__rpTieFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6128, 0x4
.global lbl__rpTieFreeListPreallocBlocks
lbl__rpTieFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B612C, 0x4
.global lbl__rpLightTieFreeListBlockSize
lbl__rpLightTieFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6130, 0x4
.global lbl__rpLightTieFreeListPreallocBlocks
lbl__rpLightTieFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B6134, 0x4
.global lbl__RwDlPreInstanceOptimize
lbl__RwDlPreInstanceOptimize:
	.incbin "baserom.dol", 0x2B6138, 0x8
.global lbl_vtxFmtTypeConvTable$278
lbl_vtxFmtTypeConvTable$278:
	.incbin "baserom.dol", 0x2B6140, 0x8
.global lbl_vtxFmtSizeConvTable$279
lbl_vtxFmtSizeConvTable$279:
	.incbin "baserom.dol", 0x2B6148, 0x8
.global lbl__55
lbl__55:
	.incbin "baserom.dol", 0x2B6150, 0x8
.global lbl__rwMatrixFreeListBlockSize
lbl__rwMatrixFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6158, 0x4
.global lbl__rwMatrixFreeListPreallocBlocks
lbl__rwMatrixFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B615C, 0x4
.global lbl_FreeListsEnabled
lbl_FreeListsEnabled:
	.incbin "baserom.dol", 0x2B6160, 0x8
.global lbl__rwStreamFreeListBlockSize
lbl__rwStreamFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6168, 0x4
.global lbl__rwStreamFreeListPreallocBlocks
lbl__rwStreamFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B616C, 0x4
.global lbl__90_2
lbl__90_2:
	.incbin "baserom.dol", 0x2B6170, 0x4
.global lbl__91_2
lbl__91_2:
	.incbin "baserom.dol", 0x2B6174, 0x4
.global lbl__92_3
lbl__92_3:
	.incbin "baserom.dol", 0x2B6178, 0x8
.global lbl__rwPluginRegFreeListBlockSize
lbl__rwPluginRegFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6180, 0x4
.global lbl__rwPluginRegListPreallocBlocks
lbl__rwPluginRegListPreallocBlocks:
	.incbin "baserom.dol", 0x2B6184, 0x4
.global lbl__rwCameraFreeListBlockSize
lbl__rwCameraFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6188, 0x4
.global lbl__rwCameraFreeListPreallocBlocks
lbl__rwCameraFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B618C, 0x4
.global lbl__rwFrameFreeListBlockSize
lbl__rwFrameFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6190, 0x4
.global lbl__rwFrameFreeListPreallocBlocks
lbl__rwFrameFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B6194, 0x4
.global lbl__rwImageFreeListBlockSize
lbl__rwImageFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6198, 0x4
.global lbl__rwImageFreeListPreallocBlocks
lbl__rwImageFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B619C, 0x4
.global lbl__rwImageFormatFreeListPreallocBlocks
lbl__rwImageFormatFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B61A0, 0x8
.global lbl__rwRasterFreeListBlockSize
lbl__rwRasterFreeListBlockSize:
	.incbin "baserom.dol", 0x2B61A8, 0x4
.global lbl__rwRasterFreeListPreallocBlocks
lbl__rwRasterFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B61AC, 0x4
.global lbl__250
lbl__250:
	.incbin "baserom.dol", 0x2B61B0, 0x4
.global lbl__753_2
lbl__753_2:
	.incbin "baserom.dol", 0x2B61B4, 0x8
.global lbl__rwTextureFreeListBlockSize
lbl__rwTextureFreeListBlockSize:
	.incbin "baserom.dol", 0x2B61BC, 0x4
.global lbl__rwTextureFreeListPreallocBlocks
lbl__rwTextureFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B61C0, 0x4
.global lbl__rwTexDictionaryFreeListBlockSize
lbl__rwTexDictionaryFreeListBlockSize:
	.incbin "baserom.dol", 0x2B61C4, 0x4
.global lbl__rwTexDictionaryFreeListPreallocBlocks
lbl__rwTexDictionaryFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B61C8, 0x8
.global lbl_MaxDepth
lbl_MaxDepth:
	.incbin "baserom.dol", 0x2B61D0, 0x8
.global lbl__RwDlFSAATop
lbl__RwDlFSAATop:
	.incbin "baserom.dol", 0x2B61D8, 0x4
.global lbl__RwDlFifoSize
lbl__RwDlFifoSize:
	.incbin "baserom.dol", 0x2B61DC, 0x4
.global lbl__RwDlFirstFrame
lbl__RwDlFirstFrame:
	.incbin "baserom.dol", 0x2B61E0, 0x4
.global lbl__RwDlLatency
lbl__RwDlLatency:
	.incbin "baserom.dol", 0x2B61E4, 0x4
.global lbl__RwDlRetraceCount
lbl__RwDlRetraceCount:
	.incbin "baserom.dol", 0x2B61E8, 0x1
.global lbl__RwDlRetraceMinCount
lbl__RwDlRetraceMinCount:
	.incbin "baserom.dol", 0x2B61E9, 0x7
.global lbl__RwDlTokenCurrent
lbl__RwDlTokenCurrent:
	.incbin "baserom.dol", 0x2B61F0, 0x8
.global lbl__rxHeapInitialSize
lbl__rxHeapInitialSize:
	.incbin "baserom.dol", 0x2B61F8, 0x4
.global lbl__rxPipelineMaxNodes
lbl__rxPipelineMaxNodes:
	.incbin "baserom.dol", 0x2B61FC, 0x4
.global lbl__rxPipesFreeListBlockSize
lbl__rxPipesFreeListBlockSize:
	.incbin "baserom.dol", 0x2B6200, 0x4
.global lbl__rxPipesFreeListPreallocBlocks
lbl__rxPipesFreeListPreallocBlocks:
	.incbin "baserom.dol", 0x2B6204, 0x4
.global lbl_gMemoryLimits
lbl_gMemoryLimits:
	.incbin "baserom.dol", 0x2B6208, 0x18
