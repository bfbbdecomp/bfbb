INIT_O_FILES :=                                     \
    $(OBJ_DIR)/asm/init.o

EXTAB_O_FILES :=                                    \
    $(OBJ_DIR)/asm/extab.o

EXTABINDEX_O_FILES :=                               \
    $(OBJ_DIR)/asm/extabindex.o

TEXT_O_FILES :=                                     \
    $(OBJ_DIR)/asm/Core/x/xAnim.o                   \
    $(OBJ_DIR)/src/Core/x/xBase.o                   \
    $(OBJ_DIR)/asm/Core/x/xbinio.o                  \
    $(OBJ_DIR)/asm/Core/x/xBound.o                  \
    $(OBJ_DIR)/asm/Core/x/xCamera.o                 \
    $(OBJ_DIR)/asm/Core/x/xClimate.o                \
    $(OBJ_DIR)/asm/Core/x/xCollide.o                \
    $(OBJ_DIR)/asm/Core/x/xCollideFast.o            \
    $(OBJ_DIR)/asm/Core/x/xColor.o                  \
    $(OBJ_DIR)/src/Core/x/xCounter.o                \
    $(OBJ_DIR)/asm/Core/x/xCutscene.o               \
    $(OBJ_DIR)/asm/Core/x/xDebug.o                  \
    $(OBJ_DIR)/asm/Core/x/xEnt.o                    \
    $(OBJ_DIR)/asm/Core/x/xEntDrive.o               \
    $(OBJ_DIR)/asm/Core/x/xEntMotion.o              \
    $(OBJ_DIR)/asm/Core/x/xEnv.o                    \
    $(OBJ_DIR)/asm/Core/x/xEvent.o                  \
    $(OBJ_DIR)/asm/Core/x/xFFX.o                    \
    $(OBJ_DIR)/asm/Core/x/xFog.o                    \
    $(OBJ_DIR)/asm/Core/x/xFont.o                   \
    $(OBJ_DIR)/asm/Core/x/xFX.o                     \
    $(OBJ_DIR)/asm/Core/x/xGroup.o                  \
    $(OBJ_DIR)/asm/Core/x/xhipio.o                  \
    $(OBJ_DIR)/asm/Core/x/xHud.o                    \
    $(OBJ_DIR)/asm/Core/x/xHudFontMeter.o           \
    $(OBJ_DIR)/asm/Core/x/xHudMeter.o               \
    $(OBJ_DIR)/asm/Core/x/xHudModel.o               \
    $(OBJ_DIR)/asm/Core/x/xHudUnitMeter.o           \
    $(OBJ_DIR)/asm/Core/x/xIni.o                    \
    $(OBJ_DIR)/asm/Core/x/xMath.o                   \
    $(OBJ_DIR)/asm/Core/x/xMath2.o                  \
    $(OBJ_DIR)/asm/Core/x/xMath3.o                  \
    $(OBJ_DIR)/asm/Core/x/xMemMgr.o                 \
    $(OBJ_DIR)/asm/Core/x/xModel.o                  \
    $(OBJ_DIR)/asm/Core/x/xMorph.o                  \
    $(OBJ_DIR)/asm/Core/x/xMovePoint.o              \
    $(OBJ_DIR)/asm/Core/x/xordarray.o               \
    $(OBJ_DIR)/asm/Core/x/xPad.o                    \
    $(OBJ_DIR)/asm/Core/x/xPar.o                    \
    $(OBJ_DIR)/asm/Core/x/xParCmd.o                 \
    $(OBJ_DIR)/asm/Core/x/xParGroup.o               \
    $(OBJ_DIR)/asm/Core/x/xParMgr.o                 \
    $(OBJ_DIR)/asm/Core/x/xPartition.o              \
    $(OBJ_DIR)/asm/Core/x/xpkrsvc.o                 \
    $(OBJ_DIR)/asm/Core/x/xQuickCull.o              \
    $(OBJ_DIR)/asm/Core/x/xsavegame.o               \
    $(OBJ_DIR)/asm/Core/x/xScene.o                  \
    $(OBJ_DIR)/asm/Core/x/xScrFx.o                  \
    $(OBJ_DIR)/asm/Core/x/xserializer.o             \
    $(OBJ_DIR)/asm/Core/x/xSFX.o                    \
    $(OBJ_DIR)/asm/Core/x/xShadow.o                 \
    $(OBJ_DIR)/asm/Core/x/xSnd.o                    \
    $(OBJ_DIR)/asm/Core/x/xSpline.o                 \
    $(OBJ_DIR)/asm/Core/x/xstransvc.o               \
    $(OBJ_DIR)/asm/Core/x/xString.o                 \
    $(OBJ_DIR)/asm/Core/x/xSurface.o                \
    $(OBJ_DIR)/asm/Core/x/xTimer.o                  \
    $(OBJ_DIR)/asm/Core/x/xTRC.o                    \
    $(OBJ_DIR)/asm/Core/x/xutil.o                   \
    $(OBJ_DIR)/asm/Core/x/xVec3.o                   \
    $(OBJ_DIR)/asm/Game/zActionLine.o               \
    $(OBJ_DIR)/asm/Game/zAnimList.o                 \
    $(OBJ_DIR)/asm/Game/zAssetTypes.o               \
    $(OBJ_DIR)/asm/Game/zCamera.o                   \
    $(OBJ_DIR)/asm/Game/zConditional.o              \
    $(OBJ_DIR)/asm/Game/zCutsceneMgr.o              \
    $(OBJ_DIR)/asm/Game/zDispatcher.o               \
    $(OBJ_DIR)/asm/Game/zEGenerator.o               \
    $(OBJ_DIR)/asm/Game/zEnt.o                      \
    $(OBJ_DIR)/asm/Game/zEntButton.o                \
    $(OBJ_DIR)/asm/Game/zEntCruiseBubble.o          \
    $(OBJ_DIR)/asm/Game/zEntDestructObj.o           \
    $(OBJ_DIR)/asm/Game/zEntHangable.o              \
    $(OBJ_DIR)/asm/Game/zEntPickup.o                \
    $(OBJ_DIR)/asm/Game/zEntPlayer.o                \
    $(OBJ_DIR)/asm/Game/zEntSimpleObj.o             \
    $(OBJ_DIR)/asm/Game/zEntTrigger.o               \
    $(OBJ_DIR)/asm/Game/zEnv.o                      \
    $(OBJ_DIR)/src/Game/zEvent.o                    \
    $(OBJ_DIR)/asm/Game/zFeet.o                     \
    $(OBJ_DIR)/asm/Game/zFMV.o                      \
    $(OBJ_DIR)/asm/Game/zFX.o                       \
    $(OBJ_DIR)/asm/Game/zGame.o                     \
    $(OBJ_DIR)/asm/Game/zGameExtras.o               \
    $(OBJ_DIR)/asm/Game/zGameState.o                \
    $(OBJ_DIR)/asm/Game/zGust.o                     \
    $(OBJ_DIR)/asm/Game/zHud.o                      \
    $(OBJ_DIR)/asm/Game/zLasso.o                    \
    $(OBJ_DIR)/asm/Game/zLight.o                    \
    $(OBJ_DIR)/asm/Game/zLightEffect.o              \
    $(OBJ_DIR)/asm/Game/zLightning.o                \
    $(OBJ_DIR)/asm/Game/zLOD.o                      \
    $(OBJ_DIR)/asm/Game/zMain.o                     \
    $(OBJ_DIR)/asm/Game/zMenu.o                     \
    $(OBJ_DIR)/asm/Game/zMovePoint.o                \
    $(OBJ_DIR)/asm/Game/zMusic.o                    \
    $(OBJ_DIR)/asm/Game/zParCmd.o                   \
    $(OBJ_DIR)/asm/Game/zParEmitter.o               \
    $(OBJ_DIR)/asm/Game/zPendulum.o                 \
    $(OBJ_DIR)/asm/Game/zPickupTable.o              \
    $(OBJ_DIR)/asm/Game/zPlatform.o                 \
    $(OBJ_DIR)/asm/Game/zPortal.o                   \
    $(OBJ_DIR)/asm/Game/zRenderState.o              \
    $(OBJ_DIR)/asm/Game/zRumble.o                   \
    $(OBJ_DIR)/asm/Game/zSaveLoad.o                 \
    $(OBJ_DIR)/asm/Game/zScene.o                    \
    $(OBJ_DIR)/asm/Game/zScript.o                   \
    $(OBJ_DIR)/asm/Game/zSurface.o                  \
    $(OBJ_DIR)/asm/Game/zThrown.o                   \
    $(OBJ_DIR)/asm/Game/zUI.o                       \
    $(OBJ_DIR)/asm/Game/zUIFont.o                   \
    $(OBJ_DIR)/asm/Game/zVar.o                      \
    $(OBJ_DIR)/asm/Game/zVolume.o                   \
    $(OBJ_DIR)/asm/Core/p2/iAnim.o                  \
    $(OBJ_DIR)/asm/Core/p2/iAnimSKB.o               \
    $(OBJ_DIR)/asm/Core/x/iCamera.o                 \
    $(OBJ_DIR)/asm/Core/p2/iCollide.o               \
    $(OBJ_DIR)/src/Core/p2/iCollideFast.o           \
    $(OBJ_DIR)/src/Core/p2/iDraw.o                  \
    $(OBJ_DIR)/asm/Core/p2/iEnv.o                   \
    $(OBJ_DIR)/asm/Core/p2/iFile.o                  \
    $(OBJ_DIR)/asm/Core/p2/iFMV.o                   \
    $(OBJ_DIR)/asm/Core/p2/iFX.o                    \
    $(OBJ_DIR)/asm/Core/p2/iLight.o                 \
    $(OBJ_DIR)/src/Core/p2/iMath.o                  \
    $(OBJ_DIR)/asm/Core/p2/iMath3.o                 \
    $(OBJ_DIR)/asm/Core/p2/iMemMgr.o                \
    $(OBJ_DIR)/asm/Core/p2/iMix.o                   \
    $(OBJ_DIR)/asm/Core/p2/iModel.o                 \
    $(OBJ_DIR)/asm/Core/p2/iMorph.o                 \
    $(OBJ_DIR)/asm/Core/p2/iPad.o                   \
    $(OBJ_DIR)/asm/Core/p2/iParMgr.o                \
    $(OBJ_DIR)/asm/Core/p2/isavegame.o              \
    $(OBJ_DIR)/asm/Core/p2/iScrFX.o                 \
    $(OBJ_DIR)/asm/Core/p2/iSnd.o                   \
    $(OBJ_DIR)/asm/Core/p2/iSystem.o                \
    $(OBJ_DIR)/asm/Core/p2/iTime.o                  \
    $(OBJ_DIR)/asm/Core/p2/ngcrad3d.o               \
    $(OBJ_DIR)/asm/Game/zNPCGoals.o                 \
    $(OBJ_DIR)/asm/Game/zNPCGoalCommon.o            \
    $(OBJ_DIR)/asm/Game/zNPCGoalStd.o               \
    $(OBJ_DIR)/asm/Game/zNPCGoalRobo.o              \
    $(OBJ_DIR)/asm/Game/zNPCGoalTiki.o              \
    $(OBJ_DIR)/asm/Game/zNPCMessenger.o             \
    $(OBJ_DIR)/asm/Game/zNPCMgr.o                   \
    $(OBJ_DIR)/asm/Game/zNPCTypes.o                 \
    $(OBJ_DIR)/asm/Game/zNPCTypeCommon.o            \
    $(OBJ_DIR)/asm/Game/zNPCTypeRobot.o             \
    $(OBJ_DIR)/asm/Game/zNPCTypeVillager.o          \
    $(OBJ_DIR)/asm/Game/zNPCTypeAmbient.o           \
    $(OBJ_DIR)/asm/Game/zNPCTypeTiki.o              \
    $(OBJ_DIR)/asm/Core/x/xBehaveMgr.o              \
    $(OBJ_DIR)/asm/Core/x/xBehaviour.o              \
    $(OBJ_DIR)/asm/Core/x/xBehaveGoalSimple.o       \
    $(OBJ_DIR)/asm/Core/x/xSkyDome.o                \
    $(OBJ_DIR)/asm/Core/x/xRMemData.o               \
    $(OBJ_DIR)/asm/Core/x/xFactory.o                \
    $(OBJ_DIR)/asm/Core/x/xNPCBasic.o               \
    $(OBJ_DIR)/asm/Game/zEntPlayerBungeeState.o     \
    $(OBJ_DIR)/asm/Game/zCollGeom.o                 \
    $(OBJ_DIR)/asm/Core/x/xParSys.o                 \
    $(OBJ_DIR)/asm/Core/x/xParEmitter.o             \
    $(OBJ_DIR)/asm/Core/x/xVolume.o                 \
    $(OBJ_DIR)/asm/Core/x/xParEmitterType.o         \
    $(OBJ_DIR)/asm/Core/x/xRenderState.o            \
    $(OBJ_DIR)/asm/Game/zEntPlayerOOBState.o        \
    $(OBJ_DIR)/asm/Core/x/xClumpColl.o              \
    $(OBJ_DIR)/asm/Core/x/xEntBoulder.o             \
    $(OBJ_DIR)/asm/Core/x/xGrid.o                   \
    $(OBJ_DIR)/asm/Core/x/xJSP.o                    \
    $(OBJ_DIR)/asm/Core/x/xLightKit.o               \
    $(OBJ_DIR)/asm/Game/zCamMarker.o                \
    $(OBJ_DIR)/asm/Game/zGoo.o                      \
    $(OBJ_DIR)/asm/Game/zGrid.o                     \
    $(OBJ_DIR)/asm/Game/zNPCGoalScript.o            \
    $(OBJ_DIR)/asm/Game/zNPCSndTable.o              \
    $(OBJ_DIR)/asm/Game/zNPCSndLists.o              \
    $(OBJ_DIR)/asm/Game/zNPCTypeDuplotron.o         \
    $(OBJ_DIR)/asm/Core/x/xModelBucket.o            \
    $(OBJ_DIR)/asm/Game/zShrapnel.o                 \
    $(OBJ_DIR)/asm/Game/zNPCGoalDuplotron.o         \
    $(OBJ_DIR)/asm/Game/zNPCSpawner.o               \
    $(OBJ_DIR)/asm/Game/zEntTeleportBox.o           \
    $(OBJ_DIR)/asm/Game/zBusStop.o                  \
    $(OBJ_DIR)/asm/Game/zNPCSupport.o               \
    $(OBJ_DIR)/asm/Game/zTalkBox.o                  \
    $(OBJ_DIR)/asm/Game/zTextBox.o                  \
    $(OBJ_DIR)/asm/Game/zTaskBox.o                  \
    $(OBJ_DIR)/asm/Core/p2/iCutscene.o              \
    $(OBJ_DIR)/asm/Game/zNPCTypeTest.o              \
    $(OBJ_DIR)/asm/Game/zNPCTypeSubBoss.o           \
    $(OBJ_DIR)/asm/Game/zNPCTypeBoss.o              \
    $(OBJ_DIR)/asm/Game/zNPCGoalVillager.o          \
    $(OBJ_DIR)/asm/Game/zNPCGoalSubBoss.o           \
    $(OBJ_DIR)/asm/Core/x/xShadowSimple.o           \
    $(OBJ_DIR)/asm/Core/x/xUpdateCull.o             \
    $(OBJ_DIR)/asm/Game/zDiscoFloor.o               \
    $(OBJ_DIR)/asm/Game/zNPCTypeBossSandy.o         \
    $(OBJ_DIR)/asm/Game/zNPCTypeKingJelly.o         \
    $(OBJ_DIR)/asm/Game/zNPCGoalBoss.o              \
    $(OBJ_DIR)/asm/Game/zNPCTypePrawn.o             \
    $(OBJ_DIR)/asm/Game/zNPCTypeBossSB1.o           \
    $(OBJ_DIR)/asm/Game/zNPCTypeBossSB2.o           \
    $(OBJ_DIR)/asm/Core/x/xJaw.o                    \
    $(OBJ_DIR)/asm/Game/zNPCTypeBossPatrick.o       \
    $(OBJ_DIR)/asm/Game/zNPCTypeBossPlankton.o      \
    $(OBJ_DIR)/asm/Game/zParPTank.o                 \
    $(OBJ_DIR)/asm/Game/zTaxi.o                     \
    $(OBJ_DIR)/asm/Game/zNPCTypeDutchman.o          \
    $(OBJ_DIR)/asm/Game/zCameraFly.o                \
    $(OBJ_DIR)/asm/Core/x/xCurveAsset.o             \
    $(OBJ_DIR)/asm/Core/x/xDecal.o                  \
    $(OBJ_DIR)/asm/Core/x/xLaserBolt.o              \
    $(OBJ_DIR)/asm/Game/zCameraTweak.o              \
    $(OBJ_DIR)/asm/Core/x/xPtankPool.o              \
    $(OBJ_DIR)/asm/Core/p2/iTRC.o                   \
    $(OBJ_DIR)/asm/Game/zNPCSupplement.o            \
    $(OBJ_DIR)/asm/Game/zNPCGlyph.o                 \
    $(OBJ_DIR)/asm/Game/zNPCHazard.o                \
    $(OBJ_DIR)/asm/Game/zNPCGoalAmbient.o           \
    $(OBJ_DIR)/asm/Game/zNPCFXCinematic.o           \
    $(OBJ_DIR)/asm/Core/x/xHudText.o                \
    $(OBJ_DIR)/asm/Game/zCombo.o                    \
    $(OBJ_DIR)/asm/Core/x/xCM.o                     \
    $(OBJ_DIR)/asm/bink/bink.o                      \
    $(OBJ_DIR)/asm/dolphin/dolphin.o                \
    $(OBJ_DIR)/asm/CodeWarrior/MSL_C.o              \
    $(OBJ_DIR)/asm/CodeWarrior/Runtime.o            \
    $(OBJ_DIR)/asm/ODEGdev/OdemuExi2.o              \
    $(OBJ_DIR)/asm/rwsdk/rwsdk.o

CTORS_O_FILES :=                                    \
    $(OBJ_DIR)/asm/ctors.o

DTORS_O_FILES :=                                    \
    $(OBJ_DIR)/asm/dtors.o

RODATA_O_FILES :=                                   \
    $(OBJ_DIR)/asm/rodata.o

DATA_O_FILES :=                                     \
    $(OBJ_DIR)/asm/data.o

BSS_O_FILES :=                                      \
    $(OBJ_DIR)/asm/bss.o

SDATA_O_FILES :=                                    \
    $(OBJ_DIR)/asm/sdata.o

SBSS_O_FILES :=                                     \
    $(OBJ_DIR)/asm/sbss.o

SDATA2_O_FILES :=                                   \
    $(OBJ_DIR)/asm/sdata2.o

SBSS2_O_FILES :=                                    \
    $(OBJ_DIR)/asm/sbss2.o
