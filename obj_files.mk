INIT_O_FILES :=                                     \
    asm/init.o

EXTAB_O_FILES :=                                    \
    asm/extab.o

EXTABINDEX_O_FILES :=                               \
    asm/extabindex.o

TEXT_O_FILES :=                                     \
    asm/Core/x/xAnim.o                              \
    asm/Core/x/xBase.o                              \
    asm/Core/x/xbinio.o                             \
    asm/Core/x/xBound.o                             \
    asm/Core/x/xCamera.o                            \
    asm/Core/x/xClimate.o                           \
    asm/Core/x/xCollide.o                           \
    asm/Core/x/xCollideFast.o                       \
    asm/Core/x/xCounter.o                           \
    asm/Core/x/xCutscene.o                          \
    asm/Core/x/xDebug.o                             \
    asm/Core/x/xEnt.o                               \
    asm/Core/x/xEntDrive.o                          \
    asm/Core/x/xEntMotion.o                         \
    asm/Core/x/xEnv.o                               \
    asm/Core/x/xEvent.o                             \
    asm/Core/x/xFFX.o                               \
    asm/Core/x/xFog.o                               \
    asm/Core/x/xFont.o                              \
    asm/Core/x/xFX.o                                \
    asm/Core/x/xGroup.o                             \
    asm/Core/x/xhipio.o                             \
    asm/Core/x/xHud.o                               \
    asm/Core/x/xHudFontMeter.o                      \
    asm/Core/x/xHudMeter.o                          \
    asm/Core/x/xHudModel.o                          \
    asm/Core/x/xHudUnitMeter.o                      \
    asm/Core/x/xIni.o                               \
    asm/Core/x/xMath.o                              \
    asm/Core/x/xMath3.o                             \
    asm/Core/x/xMemMgr.o                            \
    asm/Core/x/xModel.o                             \
    asm/Core/x/xMorph.o                             \
    asm/Core/x/xMovePoint.o                         \
    asm/Core/x/xordarray.o                          \
    asm/Core/x/xPad.o                               \
    asm/Core/x/xPar.o                               \
    asm/Core/x/xParCmd.o                            \
    asm/Core/x/xParGroup.o                          \
    asm/Core/x/xParMgr.o                            \
    asm/Core/x/xPartition.o                         \
    asm/Core/x/xpkrsvc.o                            \
    asm/Core/x/xQuickCull.o                         \
    asm/Core/x/xsavegame.o                          \
    asm/Core/x/xScene.o                             \
    asm/Core/x/xScrFx.o                             \
    asm/Core/x/xserializer.o                        \
    asm/Core/x/xSFX.o                               \
    asm/Core/x/xShadow.o                            \
    asm/Core/x/xSnd.o                               \
    asm/Core/x/xSpline.o                            \
    asm/Core/x/xstransvc.o                          \
    asm/Core/x/xString.o                            \
    asm/Core/x/xSurface.o                           \
    asm/Core/x/xTimer.o                             \
    asm/Core/x/xTRC.o                               \
    asm/Core/x/xutil.o                              \
    asm/Core/x/xVec3.o                              \
    asm/Game/zActionLine.o                          \
    asm/Game/zAnimList.o                            \
    asm/Game/zAssetTypes.o                          \
    asm/Game/zCamera.o                              \
    asm/Game/zConditional.o                         \
    asm/Game/zCutsceneMgr.o                         \
    asm/Game/zDispatcher.o                          \
    asm/Game/zEGenerator.o                          \
    asm/Game/zEnt.o                                 \
    asm/Game/zEntButton.o                           \
    asm/Game/zEntCruiseBubble.o                     \
    asm/Game/zEntDestructObj.o                      \
    asm/Game/zEntHangable.o                         \
    asm/Game/zEntPickup.o                           \
    asm/Game/zEntPlayer.o                           \
    asm/Game/zEntSimpleObj.o                        \
    asm/Game/zEntTrigger.o                          \
    asm/Game/zEnv.o                                 \
    asm/Game/zEvent.o                               \
    asm/Game/zFeet.o                                \
    asm/Game/zFMV.o                                 \
    asm/Game/zFX.o                                  \
    asm/Game/zGame.o                                \
    asm/Game/zGameExtras.o                          \
    asm/Game/zGameState.o                           \
    asm/Game/zGust.o                                \
    asm/Game/zHud.o                                 \
    asm/Game/zLasso.o                               \
    asm/Game/zLight.o                               \
    asm/Game/zLightEffect.o                         \
    asm/Game/zLightning.o                           \
    asm/Game/zLOD.o                                 \
    asm/Game/zMain.o                                \
    asm/Game/zMenu.o                                \
    asm/Game/zMovePoint.o                           \
    asm/Game/zMusic.o                               \
    asm/Game/zParCmd.o                              \
    asm/Game/zParEmitter.o                          \
    asm/Game/zPendulum.o                            \
    asm/Game/zPickupTable.o                         \
    asm/Game/zPlatform.o                            \
    asm/Game/zPortal.o                              \
    asm/Game/zRenderState.o                         \
    asm/Game/zRumble.o                              \
    asm/Game/zSaveLoad.o                            \
    asm/Game/zScene.o                               \
    asm/Game/zScript.o                              \
    asm/Game/zSurface.o                             \
    asm/Game/zThrown.o                              \
    asm/Game/zUI.o                                  \
    asm/Game/zUIFont.o                              \
    asm/Game/zVar.o                                 \
    asm/Core/p2/iAnim.o                             \
    asm/Core/p2/iAnimSKB.o                          \
    asm/Core/x/iCamera.o                            \
    asm/Core/p2/iCollide.o                          \
    src/Core/p2/iCollideFast.o                      \
    src/Core/p2/iDraw.o                             \
    asm/Core/p2/iEnv.o                              \
    asm/Core/p2/iFile.o                             \
    asm/Core/p2/iFMV.o                              \
    asm/Core/p2/iFX.o                               \
    asm/Core/p2/iLight.o                            \
    asm/Core/p2/iMath.o                             \
    asm/Core/p2/iMath3.o                            \
    asm/Core/p2/iMemMgr.o                           \
    asm/Core/p2/iMix.o                              \
    asm/Core/p2/iModel.o                            \
    asm/Core/p2/iMorph.o                            \
    asm/Core/p2/iPad.o                              \
    asm/Core/p2/iParMgr.o                           \
    asm/Core/p2/isavegame.o                         \
    asm/Core/p2/iScrFX.o                            \
    asm/Core/p2/iSnd.o                              \
    asm/Core/p2/iSystem.o                           \
    asm/Core/p2/iTime.o                             \
    asm/Core/p2/ngcrad3d.o                          \
    asm/Game/zNPCGoals.o                            \
    asm/Game/zNPCGoalCommon.o                       \
    asm/Game/zNPCGoalStd.o                          \
    asm/Game/zNPCGoalRobo.o                         \
    asm/Game/zNPCGoalTiki.o                         \
    asm/Game/zNPCMessenger.o                        \
    asm/Game/zNPCMgr.o                              \
    asm/Game/zNPCTypes.o                            \
    asm/Game/zNPCTypeCommon.o                       \
    asm/Game/zNPCTypeRobot.o                        \
    asm/Game/zNPCTypeVillager.o                     \
    asm/Game/zNPCTypeAmbient.o                      \
    asm/Game/zNPCTypeTiki.o                         \
    asm/Core/x/xBehaveMgr.o                         \
    asm/Core/x/xBehaviour.o                         \
    asm/Core/x/xBehaveGoalSimple.o                  \
    asm/Core/x/xSkyDome.o                           \
    asm/Core/x/xRMemData.o                          \
    asm/Core/x/xFactory.o                           \
    asm/Core/x/xNPCBasic.o                          \
    asm/Game/zEntPlayerBungeeState.o                \
    asm/Game/zCollGeom.o                            \
    asm/Core/x/xParSys.o                            \
    asm/Core/x/xParEmitter.o                        \
    asm/Core/x/xVolume.o                            \
    asm/Core/x/xParEmitterType.o                    \
    asm/Core/x/xRenderState.o                       \
    asm/Game/zEntPlayerOOBState.o                   \
    asm/Core/x/xClumpColl.o                         \
    asm/Core/x/xEntBoulder.o                        \
    asm/Core/x/xGrid.o                              \
    asm/Core/x/xJSP.o                               \
    asm/Core/x/xLightKit.o                          \
    asm/Game/zCamMarker.o                           \
    asm/Game/zGoo.o                                 \
    asm/Game/zGrid.o                                \
    asm/Game/zNPCGoalScript.o                       \
    asm/Game/zNPCSndTable.o                         \
    asm/Game/zNPCTypeDuplotron.o                    \
    asm/Core/x/xModelBucket.o                       \
    asm/Game/zShrapnel.o                            \
    asm/Game/zNPCGoalDuplotron.o                    \
    asm/Game/zNPCSpawner.o                          \
    asm/Game/zEntTeleportBox.o                      \
    asm/Game/zBusStop.o                             \
    asm/Game/zNPCSupport.o                          \
    asm/Game/zTalkBox.o                             \
    asm/Game/zTextBox.o                             \
    asm/Game/zTaskBox.o                             \
    asm/Core/p2/iCutscene.o                         \
    asm/Game/zNPCTypeTest.o                         \
    asm/Game/zNPCTypeSubBoss.o                      \
    asm/Game/zNPCTypeBoss.o                         \
    asm/Game/zNPCGoalVillager.o                     \
    asm/Game/zNPCGoalSubBoss.o                      \
    asm/Core/x/xShadowSimple.o                      \
    asm/Core/x/xUpdateCull.o                        \
    asm/Game/zDiscoFloor.o                          \
    asm/Game/zNPCTypeBossSandy.o                    \
    asm/Game/zNPCTypeKingJelly.o                    \
    asm/Game/zNPCGoalBoss.o                         \
    asm/Game/zNPCTypePrawn.o                        \
    asm/Game/zNPCTypeBossSB1.o                      \
    asm/Game/zNPCTypeBossSB2.o                      \
    asm/Core/x/xJaw.o                               \
    asm/Game/zNPCTypeBossPatrick.o                  \
    asm/Game/zNPCTypeBossPlankton.o                 \
    asm/Game/zParPTank.o                            \
    asm/Game/zTaxi.o                                \
    asm/Game/zNPCTypeDutchman.o                     \
    asm/Game/zCameraFly.o                           \
    asm/Core/x/xCurveAsset.o                        \
    asm/Core/x/xDecal.o                             \
    asm/Core/x/xLaserBolt.o                         \
    asm/Game/zCameraTweak.o                         \
    asm/Core/x/xPtankPool.o                         \
    asm/Core/p2/iTRC.o                              \
    asm/Game/zNPCSupplement.o                       \
    asm/Game/zNPCGlyph.o                            \
    asm/Game/zNPCHazard.o                           \
    asm/Game/zNPCGoalAmbient.o                      \
    asm/Game/zNPCFXCinematic.o                      \
    asm/Core/x/xHudText.o                           \
    asm/Game/zCombo.o                               \
    asm/bink/bink.o                                 \
    asm/dolphin/dolphin.o                           \
    asm/CodeWarrior/MSL_C.o                         \
    asm/CodeWarrior/Runtime.o                       \
    asm/ODEGdev/OdemuExi2.o                         \
    asm/rwsdk/rwsdk.o

CTORS_O_FILES :=                                    \
    asm/ctors.o

DTORS_O_FILES :=                                    \
    asm/dtors.o

RODATA_O_FILES :=                                   \
    asm/rodata.o

DATA_O_FILES :=                                     \
    asm/data.o

BSS_O_FILES :=                                      \
    asm/bss.o

SDATA_O_FILES :=                                    \
    asm/sdata.o

SBSS_O_FILES :=                                     \
    asm/sbss.o

SDATA2_O_FILES :=                                   \
    asm/sdata2.o

SBSS2_O_FILES :=                                    \
    asm/sbss2.o
