#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import sys
from pathlib import Path
from typing import Any, Dict, List

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
DEFAULT_VERSION = 0
VERSIONS = [
    "GQPE78",  # 0
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-1"
config.compilers_tag = "20240706"
config.dtk_tag = "v1.4.1"
config.objdiff_tag = "v2.7.1"
config.sjiswrap_tag = "v1.2.0"
config.wibo_tag = "0.6.11"

# Project
config.shift_jis = False
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
    "-I include",
    f"-I build/{config.version}/include",
    f"--defsym BUILD_VERSION={version_num}",
    f"--defsym VERSION_{config.version}",
]
config.ldflags = [
    "-fp hardware",
    "-nodefaults",
]
if args.debug:
    config.ldflags.append("-g")  # Or -gdwarf-2 for Wii linkers
if args.map:
    config.ldflags.append("-mapunused")
    # config.ldflags.append("-listclosure") # For Wii linkers

# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = []

# Optional numeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = 65  # Battle for Bikini Bottom

# Base flags, common to most GC/Wii games.
# Generally leave untouched, with overrides added below.
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hardware",
    "-Cpp_exceptions off",
    "-W err",
    # "-W all",
    "-O4,p",
    "-inline auto",
    '-pragma "cats off"',
    '-pragma "warn_notinlined off"',
    "-maxerrors 1",
    "-nosyspath",
    "-RTTI off",
    "-fp_contract on",
    "-str reuse",
    "-multibyte",  # For Wii compilers, replace with `-enc SJIS`
    "-i include",
    f"-i build/{config.version}/include",
    f"-DBUILD_VERSION={version_num}",
    f"-DVERSION_{config.version}",
]

# Debug flags
if args.debug:
    # Or -sym dwarf-2 for Wii compilers
    cflags_base.extend(["-sym on", "-DDEBUG=1"])
else:
    cflags_base.append("-DNDEBUG=1")

# Metrowerks library flags
cflags_runtime = [
    *cflags_base,
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-gccinc",
    "-common off",
    "-inline auto",
]

# REL flags
cflags_rel = [
    *cflags_base,
    "-sdata 0",
    "-sdata2 0",
]

# Game-specific flags
cflags_bfbb = [
    *cflags_base,
    "-common on",
    "-char unsigned",
    "-str reuse,pool,readonly",
    "-use_lmw_stmw on",
    '-pragma "cpp_extensions on"',
    "-inline off",
    "-gccinc",
    "-i include/bink",
    "-i include/PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Include",
    "-i include/PowerPC_EABI_Support/MSL/MSL_C++/MSL_Common/Include",
    "-i include/inline",
    "-i include/rwsdk",
    "-i src/SB/Core/gc",
    "-i src/SB/Core/x",
    "-i src/SB/Game",
    "-DGAMECUBE",
]

config.linker_version = "GC/2.0p1"


# Helper function for Dolphin libraries
def DolphinLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": objects,
    }


# Helper function for RenderWare libraries
def RenderWareLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3.2",
        "cflags": cflags_base,
        "progress_category": "sdk",
        "objects": objects,
    }


# Helper function for REL script objects
def Rel(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "GC/1.3.2",
        "cflags": cflags_rel,
        "progress_category": "game",
        "objects": objects,
    }


Matching = True                   # Object matches and should be linked
NonMatching = False               # Object does not match and should not be linked
Equivalent = config.non_matching  # Object should be linked when configured with --non-matching


# Object is only matching for specific versions
def MatchingFor(*versions):
    return config.version in versions


config.warn_missing_config = True
config.warn_missing_source = False
config.libs = [
    {
        "lib": "SB",
        "mw_version": config.linker_version,
        "cflags": cflags_bfbb,
        "progress_category": "game",
        "objects": [
            Object(NonMatching, "SB/Core/x/xAnim.cpp", extra_cflags=["-sym on"]),
            Object(Matching, "SB/Core/x/xBase.cpp"),
            Object(Matching, "SB/Core/x/xbinio.cpp"),
            Object(NonMatching, "SB/Core/x/xBound.cpp"),
            Object(NonMatching, "SB/Core/x/xCamera.cpp"),
            Object(NonMatching, "SB/Core/x/xClimate.cpp"),
            Object(NonMatching, "SB/Core/x/xCollide.cpp"),
            Object(Matching, "SB/Core/x/xCollideFast.cpp"),
            Object(Matching, "SB/Core/x/xColor.cpp"),
            Object(Matching, "SB/Core/x/xCounter.cpp"),
            Object(NonMatching, "SB/Core/x/xCutscene.cpp"),
            Object(NonMatching, "SB/Core/x/xDebug.cpp"),
            Object(Equivalent, "SB/Core/x/xEnt.cpp", extra_cflags=["-sym on"]),
            Object(Equivalent, "SB/Core/x/xEntDrive.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Core/x/xEntMotion.cpp"),
            Object(Matching, "SB/Core/x/xEnv.cpp"),
            Object(Matching, "SB/Core/x/xEvent.cpp"),
            Object(NonMatching, "SB/Core/x/xFFX.cpp"),
            Object(Matching, "SB/Core/x/xFog.cpp"),
            Object(NonMatching, "SB/Core/x/xFont.cpp"),
            Object(NonMatching, "SB/Core/x/xFX.cpp"),
            Object(Matching, "SB/Core/x/xGroup.cpp"),
            Object(Matching, "SB/Core/x/xhipio.cpp"),
            Object(NonMatching, "SB/Core/x/xHud.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Core/x/xHudFontMeter.cpp"),
            Object(NonMatching, "SB/Core/x/xHudMeter.cpp"),
            Object(Equivalent, "SB/Core/x/xHudModel.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Core/x/xHudUnitMeter.cpp"),
            Object(Matching, "SB/Core/x/xIni.cpp"),
            Object(NonMatching, "SB/Core/x/xMath.cpp"),
            Object(Matching, "SB/Core/x/xMath2.cpp"),
            Object(NonMatching, "SB/Core/x/xMath3.cpp"),
            Object(NonMatching, "SB/Core/x/xMemMgr.cpp"),
            Object(NonMatching, "SB/Core/x/xModel.cpp"),
            Object(NonMatching, "SB/Core/x/xMorph.cpp"),
            Object(NonMatching, "SB/Core/x/xMovePoint.cpp"),
            Object(NonMatching, "SB/Core/x/xordarray.cpp"),
            Object(NonMatching, "SB/Core/x/xPad.cpp"),
            Object(NonMatching, "SB/Core/x/xPar.cpp"),
            Object(NonMatching, "SB/Core/x/xParCmd.cpp"),
            Object(NonMatching, "SB/Core/x/xParGroup.cpp"),
            Object(Matching, "SB/Core/x/xParMgr.cpp"),
            Object(NonMatching, "SB/Core/x/xPartition.cpp"),
            Object(NonMatching, "SB/Core/x/xpkrsvc.cpp"),
            Object(NonMatching, "SB/Core/x/xQuickCull.cpp"),
            Object(Matching, "SB/Core/x/xsavegame.cpp"),
            Object(NonMatching, "SB/Core/x/xScene.cpp"),
            Object(NonMatching, "SB/Core/x/xScrFx.cpp"),
            Object(NonMatching, "SB/Core/x/xserializer.cpp"),
            Object(NonMatching, "SB/Core/x/xSFX.cpp"),
            Object(NonMatching, "SB/Core/x/xShadow.cpp"),
            Object(NonMatching, "SB/Core/x/xSnd.cpp"),
            Object(NonMatching, "SB/Core/x/xSpline.cpp"),
            Object(Equivalent, "SB/Core/x/xstransvc.cpp"),
            Object(NonMatching, "SB/Core/x/xString.cpp"),
            Object(Matching, "SB/Core/x/xSurface.cpp"),
            Object(NonMatching, "SB/Core/x/xTimer.cpp"),
            Object(NonMatching, "SB/Core/x/xTRC.cpp"),
            Object(Matching, "SB/Core/x/xutil.cpp"),
            Object(Matching, "SB/Core/x/xVec3.cpp"),
            Object(NonMatching, "SB/Game/zActionLine.cpp"),
            Object(Equivalent, "SB/Game/zAnimList.cpp"),
            Object(NonMatching, "SB/Game/zAssetTypes.cpp"),
            Object(NonMatching, "SB/Game/zCamera.cpp"),
            Object(Matching, "SB/Game/zConditional.cpp"),
            Object(NonMatching, "SB/Game/zCutsceneMgr.cpp"),
            Object(NonMatching, "SB/Game/zDispatcher.cpp"),
            Object(NonMatching, "SB/Game/zEGenerator.cpp"),
            Object(Equivalent, "SB/Game/zEnt.cpp"),
            Object(Equivalent, "SB/Game/zEntButton.cpp"),
            Object(NonMatching, "SB/Game/zEntCruiseBubble.cpp"),
            Object(NonMatching, "SB/Game/zEntDestructObj.cpp"),
            Object(NonMatching, "SB/Game/zEntHangable.cpp"),
            Object(NonMatching, "SB/Game/zEntPickup.cpp"),
            Object(NonMatching, "SB/Game/zEntPlayer.cpp"),
            Object(NonMatching, "SB/Game/zEntSimpleObj.cpp"),
            Object(Matching, "SB/Game/zEntTrigger.cpp", extra_cflags=["-sym on"]),
            Object(Matching, "SB/Game/zEnv.cpp"),
            Object(Matching, "SB/Game/zEvent.cpp"),
            Object(Matching, "SB/Game/zFeet.cpp"),
            Object(Matching, "SB/Game/zFMV.cpp"),
            Object(NonMatching, "SB/Game/zFX.cpp"),
            Object(NonMatching, "SB/Game/zGame.cpp"),
            Object(Equivalent, "SB/Game/zGameExtras.cpp"),
            Object(Equivalent, "SB/Game/zGameState.cpp"),
            Object(NonMatching, "SB/Game/zGust.cpp"),
            Object(NonMatching, "SB/Game/zHud.cpp"),
            Object(NonMatching, "SB/Game/zLasso.cpp"),
            Object(NonMatching, "SB/Game/zLight.cpp"),
            Object(Matching, "SB/Game/zLightEffect.cpp"),
            Object(NonMatching, "SB/Game/zLightning.cpp"),
            Object(NonMatching, "SB/Game/zLOD.cpp"),
            Object(NonMatching, "SB/Game/zMain.cpp"),
            Object(Equivalent, "SB/Game/zMenu.cpp"),
            Object(NonMatching, "SB/Game/zMovePoint.cpp"),
            Object(NonMatching, "SB/Game/zMusic.cpp"),
            Object(Equivalent, "SB/Game/zParCmd.cpp"),
            Object(Matching, "SB/Game/zParEmitter.cpp"),
            Object(Matching, "SB/Game/zPendulum.cpp"),
            Object(Matching, "SB/Game/zPickupTable.cpp"),
            Object(NonMatching, "SB/Game/zPlatform.cpp"),
            Object(Matching, "SB/Game/zPortal.cpp"),
            Object(Matching, "SB/Game/zRenderState.cpp"),
            Object(Equivalent, "SB/Game/zRumble.cpp"),
            Object(Equivalent, "SB/Game/zSaveLoad.cpp"),
            Object(NonMatching, "SB/Game/zScene.cpp"),
            Object(Matching, "SB/Game/zScript.cpp"),
            Object(NonMatching, "SB/Game/zSurface.cpp"),
            Object(NonMatching, "SB/Game/zThrown.cpp"),
            Object(NonMatching, "SB/Game/zUI.cpp"),
            Object(NonMatching, "SB/Game/zUIFont.cpp"),
            Object(NonMatching, "SB/Game/zVar.cpp"),
            Object(NonMatching, "SB/Game/zVolume.cpp"),
            Object(Equivalent, "SB/Core/gc/iAnim.cpp"),
            Object(NonMatching, "SB/Core/gc/iAnimSKB.cpp"),
            Object(NonMatching, "SB/Core/x/iCamera.cpp"),
            Object(NonMatching, "SB/Core/gc/iCollide.cpp"),
            Object(Matching, "SB/Core/gc/iCollideFast.cpp"),
            Object(Matching, "SB/Core/gc/iDraw.cpp"),
            Object(Equivalent, "SB/Core/gc/iEnv.cpp"),
            Object(NonMatching, "SB/Core/gc/iFile.cpp"),
            Object(Equivalent, "SB/Core/gc/iFMV.cpp"),
            Object(NonMatching, "SB/Core/gc/iFX.cpp"),
            Object(Matching, "SB/Core/gc/iLight.cpp"),
            Object(Matching, "SB/Core/gc/iMath.cpp"),
            Object(NonMatching, "SB/Core/gc/iMath3.cpp"),
            Object(NonMatching, "SB/Core/gc/iMemMgr.cpp"),
            Object(NonMatching, "SB/Core/gc/iMix.c"),
            Object(NonMatching, "SB/Core/gc/iModel.cpp"),
            Object(NonMatching, "SB/Core/gc/iMorph.cpp"),
            Object(Equivalent, "SB/Core/gc/iPad.cpp"),
            Object(NonMatching, "SB/Core/gc/iParMgr.cpp"),
            Object(NonMatching, "SB/Core/gc/isavegame.cpp"),
            Object(NonMatching, "SB/Core/gc/iScrFX.cpp"),
            Object(NonMatching, "SB/Core/gc/iSnd.cpp"),
            Object(NonMatching, "SB/Core/gc/iSystem.cpp"),
            Object(Matching, "SB/Core/gc/iTime.cpp"),
            Object(NonMatching, "SB/Core/gc/ngcrad3d.c"),
            Object(Matching, "SB/Game/zNPCGoals.cpp"),
            Object(NonMatching, "SB/Game/zNPCGoalCommon.cpp"), # wrong function order
            Object(NonMatching, "SB/Game/zNPCGoalStd.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zNPCGoalRobo.cpp"),
            Object(Matching, "SB/Game/zNPCGoalTiki.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zNPCMessenger.cpp"),
            Object(NonMatching, "SB/Game/zNPCMgr.cpp"),
            Object(Matching, "SB/Game/zNPCTypes.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeCommon.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeRobot.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeVillager.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeAmbient.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeTiki.cpp"),
            Object(NonMatching, "SB/Core/x/xBehaveMgr.cpp"),
            Object(NonMatching, "SB/Core/x/xBehaviour.cpp"), # breaks build (weak functions)
            Object(NonMatching, "SB/Core/x/xBehaveGoalSimple.cpp"), # breaks build (weak functions)
            Object(NonMatching, "SB/Core/x/xSkyDome.cpp"),
            Object(Matching, "SB/Core/x/xRMemData.cpp", extra_cflags=["-sym on"]),
            Object(Matching, "SB/Core/x/xFactory.cpp"),
            Object(NonMatching, "SB/Core/x/xNPCBasic.cpp"),
            Object(NonMatching, "SB/Game/zEntPlayerBungeeState.cpp"),
            Object(NonMatching, "SB/Game/zCollGeom.cpp"),
            Object(NonMatching, "SB/Core/x/xParSys.cpp"),
            Object(NonMatching, "SB/Core/x/xParEmitter.cpp"),
            Object(Matching, "SB/Core/x/xVolume.cpp"),
            Object(NonMatching, "SB/Core/x/xParEmitterType.cpp"),
            Object(Matching, "SB/Core/x/xRenderState.cpp"),
            Object(NonMatching, "SB/Game/zEntPlayerOOBState.cpp"),
            Object(NonMatching, "SB/Core/x/xClumpColl.cpp"),
            Object(NonMatching, "SB/Core/x/xEntBoulder.cpp"),
            Object(NonMatching, "SB/Core/x/xGrid.cpp"),
            Object(NonMatching, "SB/Core/x/xJSP.cpp"),
            Object(Matching, "SB/Core/x/xLightKit.cpp"),
            Object(Matching, "SB/Game/zCamMarker.cpp"),
            Object(NonMatching, "SB/Game/zGoo.cpp"),
            Object(NonMatching, "SB/Game/zGrid.cpp"),
            Object(Matching, "SB/Game/zNPCGoalScript.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zNPCSndTable.cpp"),
            Object(NonMatching, "SB/Game/zNPCSndLists.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeDuplotron.cpp"),
            Object(NonMatching, "SB/Core/x/xModelBucket.cpp"),
            Object(NonMatching, "SB/Game/zShrapnel.cpp"),
            Object(Matching, "SB/Game/zNPCGoalDuplotron.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zNPCSpawner.cpp"),
            Object(NonMatching, "SB/Game/zEntTeleportBox.cpp"),
            Object(Matching, "SB/Game/zBusStop.cpp"),
            Object(NonMatching, "SB/Game/zNPCSupport.cpp"),
            Object(NonMatching, "SB/Game/zTalkBox.cpp"),
            Object(NonMatching, "SB/Game/zTextBox.cpp"),
            Object(NonMatching, "SB/Game/zTaskBox.cpp"),
            Object(Matching, "SB/Core/gc/iCutscene.cpp"),
            Object(Matching, "SB/Game/zNPCTypeTest.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeSubBoss.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeBoss.cpp"),
            Object(NonMatching, "SB/Game/zNPCGoalVillager.cpp", extra_cflags=["-sym on"]),
            Object(Matching, "SB/Game/zNPCGoalSubBoss.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Core/x/xShadowSimple.cpp"),
            Object(NonMatching, "SB/Core/x/xUpdateCull.cpp"),
            Object(NonMatching, "SB/Game/zDiscoFloor.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeBossSandy.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeKingJelly.cpp"),
            Object(Matching, "SB/Game/zNPCGoalBoss.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypePrawn.cpp"),
            Object(Equivalent, "SB/Game/zNPCTypeBossSB1.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeBossSB2.cpp"),
            Object(Matching, "SB/Core/x/xJaw.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeBossPatrick.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeBossPlankton.cpp"),
            Object(NonMatching, "SB/Game/zParPTank.cpp"),
            Object(Equivalent, "SB/Game/zTaxi.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeDutchman.cpp"),
            Object(Matching, "SB/Game/zCameraFly.cpp"),
            Object(Matching, "SB/Core/x/xCurveAsset.cpp"),
            Object(NonMatching, "SB/Core/x/xDecal.cpp"),
            Object(NonMatching, "SB/Core/x/xLaserBolt.cpp"),
            Object(NonMatching, "SB/Game/zCameraTweak.cpp"),
            Object(NonMatching, "SB/Core/x/xPtankPool.cpp"),
            Object(NonMatching, "SB/Core/gc/iTRC.cpp"),
            Object(NonMatching, "SB/Game/zNPCSupplement.cpp"),
            Object(NonMatching, "SB/Game/zNPCGlyph.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zNPCHazard.cpp"),
            Object(NonMatching, "SB/Game/zNPCGoalAmbient.cpp"),
            Object(NonMatching, "SB/Game/zNPCFXCinematic.cpp"),
            Object(Equivalent, "SB/Core/x/xHudText.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zCombo.cpp"),
            Object(NonMatching, "SB/Core/x/xCM.cpp"),
        ],
    },
    {
        "lib": "binkngc",
        "mw_version": "GC/1.3.2",
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "bink/src/sdk/decode/ngc/binkngc.c"),
            Object(NonMatching, "bink/src/sdk/decode/ngc/ngcsnd.c"),
            Object(NonMatching, "bink/src/sdk/decode/binkread.c"),
            Object(NonMatching, "bink/src/sdk/decode/ngc/ngcfile.c"),
            Object(NonMatching, "bink/src/sdk/decode/yuv.cpp"),
            Object(NonMatching, "bink/src/sdk/decode/binkacd.c"),
            Object(NonMatching, "bink/shared/time/radcb.c"),
            Object(NonMatching, "bink/src/sdk/decode/expand.c"),
            Object(NonMatching, "bink/src/sdk/popmal.c"),
            Object(NonMatching, "bink/src/sdk/decode/ngc/ngcrgb.c"),
            Object(NonMatching, "bink/src/sdk/decode/ngc/ngcyuy2.c"),
            Object(NonMatching, "bink/src/sdk/varbits.c"),
            Object(NonMatching, "bink/src/sdk/fft.c"),
            Object(NonMatching, "bink/src/sdk/dct.c"),
            Object(NonMatching, "bink/src/sdk/bitplane.c"),
        ],
    },
    DolphinLib(
        "ai",
        [
            Object(NonMatching, "dolphin/ai/src/ai.c"),
        ],
    ),
    DolphinLib(
        "amcstubs",
        [
            Object(NonMatching, "dolphin/amcstubs/src/AmcExi2Stubs.c"),
        ],
    ),
    DolphinLib(
        "ar",
        [
            Object(NonMatching, "dolphin/ar/src/ar.c"),
            Object(NonMatching, "dolphin/ar/src/arq.c"),
        ],
    ),
    DolphinLib(
        "ax",
        [
            Object(NonMatching, "dolphin/ax/src/AX.c"),
            Object(NonMatching, "dolphin/ax/src/AXAlloc.c"),
            Object(NonMatching, "dolphin/ax/src/AXAux.c"),
            Object(NonMatching, "dolphin/ax/src/AXCL.c"),
            Object(NonMatching, "dolphin/ax/src/AXOut.c"),
            Object(NonMatching, "dolphin/ax/src/AXSPB.c"),
            Object(NonMatching, "dolphin/ax/src/AXVPB.c"),
            Object(NonMatching, "dolphin/ax/src/AXComp.c"),
            Object(NonMatching, "dolphin/ax/src/DSPCode.c"),
            Object(NonMatching, "dolphin/ax/src/AXProf.c"),
        ],
    ),
    DolphinLib(
        "base",
        [
            Object(NonMatching, "dolphin/base/src/PPCArch.c"),
        ],
    ),
    DolphinLib(
        "card",
        [
            Object(NonMatching, "dolphin/card/src/CARDBios.c"),
            Object(NonMatching, "dolphin/card/src/CARDUnlock.c"),
            Object(NonMatching, "dolphin/card/src/CARDRdwr.c"),
            Object(NonMatching, "dolphin/card/src/CARDBlock.c"),
            Object(NonMatching, "dolphin/card/src/CARDDir.c"),
            Object(NonMatching, "dolphin/card/src/CARDCheck.c"),
            Object(NonMatching, "dolphin/card/src/CARDMount.c"),
            Object(NonMatching, "dolphin/card/src/CARDFormat.c"),
            Object(NonMatching, "dolphin/card/src/CARDOpen.c"),
            Object(NonMatching, "dolphin/card/src/CARDCreate.c"),
            Object(NonMatching, "dolphin/card/src/CARDRead.c"),
            Object(NonMatching, "dolphin/card/src/CARDWrite.c"),
            Object(NonMatching, "dolphin/card/src/CARDDelete.c"),
            Object(NonMatching, "dolphin/card/src/CARDStat.c"),
            Object(NonMatching, "dolphin/card/src/CARDStatEx.c"),
            Object(NonMatching, "dolphin/card/src/CARDNet.c"),
        ],
    ),
    DolphinLib(
        "db",
        [
            Object(NonMatching, "dolphin/db/src/db.c"),
        ],
    ),
    DolphinLib(
        "dsp",
        [
            Object(NonMatching, "dolphin/dsp/src/dsp.c"),
            Object(NonMatching, "dolphin/dsp/src/dsp_debug.c"),
            Object(NonMatching, "dolphin/dsp/src/dsp_task.c"),
        ],
    ),
    DolphinLib(
        "dvd",
        [
            Object(NonMatching, "dolphin/dvd/src/dvdlow.c"),
            Object(NonMatching, "dolphin/dvd/src/dvdfs.c"),
            Object(NonMatching, "dolphin/dvd/src/dvd.c"),
            Object(NonMatching, "dolphin/dvd/src/dvdqueue.c"),
            Object(NonMatching, "dolphin/dvd/src/dvderror.c"),
            Object(NonMatching, "dolphin/dvd/src/dvdidutils.c"),
            Object(NonMatching, "dolphin/dvd/src/dvdFatal.c"),
            Object(NonMatching, "dolphin/dvd/src/emu_level2/fstload.c"),
        ],
    ),
    DolphinLib(
        "exi",
        [
            Object(NonMatching, "dolphin/exi/src/EXIBios.c"),
            Object(NonMatching, "dolphin/exi/src/EXIUart.c"),
        ],
    ),
    DolphinLib(
        "gx",
        [
            Object(NonMatching, "dolphin/gx/src/GXInit.c"),
            Object(NonMatching, "dolphin/gx/src/GXFifo.c"),
            Object(NonMatching, "dolphin/gx/src/GXAttr.c"),
            Object(NonMatching, "dolphin/gx/src/GXMisc.c"),
            Object(NonMatching, "dolphin/gx/src/GXGeometry.c"),
            Object(NonMatching, "dolphin/gx/src/GXFrameBuf.c"),
            Object(NonMatching, "dolphin/gx/src/GXLight.c"),
            Object(NonMatching, "dolphin/gx/src/GXTexture.c"),
            Object(NonMatching, "dolphin/gx/src/GXBump.c"),
            Object(NonMatching, "dolphin/gx/src/GXTev.c"),
            Object(NonMatching, "dolphin/gx/src/GXPixel.c"),
            Object(NonMatching, "dolphin/gx/src/GXDisplayList.c"),
            Object(NonMatching, "dolphin/gx/src/GXTransform.c"),
            Object(NonMatching, "dolphin/gx/src/GXPerf.c"),
        ],
    ),
    DolphinLib(
        "mtx",
        [
            Object(NonMatching, "dolphin/mtx/src/mtx.c"),
            Object(NonMatching, "dolphin/mtx/src/mtx44.c"),
        ],
    ),
    DolphinLib(
        "odenotstub",
        [
            Object(NonMatching, "dolphin/odenotstub/src/odenotstub.c"),
        ],
    ),
    DolphinLib(
        "os",
        [
            Object(NonMatching, "dolphin/os/src/OS.c"),
            Object(NonMatching, "dolphin/os/src/OSAlarm.c"),
            Object(NonMatching, "dolphin/os/src/OSAlloc.c"),
            Object(NonMatching, "dolphin/os/src/OSArena.c"),
            Object(NonMatching, "dolphin/os/src/OSAudioSystem.c"),
            Object(NonMatching, "dolphin/os/src/OSCache.c"),
            Object(NonMatching, "dolphin/os/src/OSContext.c"),
            Object(NonMatching, "dolphin/os/src/OSError.c"),
            Object(NonMatching, "dolphin/os/src/OSFont.c"),
            Object(NonMatching, "dolphin/os/src/OSInterrupt.c"),
            Object(NonMatching, "dolphin/os/src/OSLink.c"),
            Object(NonMatching, "dolphin/os/src/OSMemory.c"),
            Object(NonMatching, "dolphin/os/src/OSMutex.c"),
            Object(NonMatching, "dolphin/os/src/OSReboot.c"),
            Object(NonMatching, "dolphin/os/src/OSReset.c"),
            Object(NonMatching, "dolphin/os/src/OSResetSW.c"),
            Object(NonMatching, "dolphin/os/src/OSRtc.c"),
            Object(NonMatching, "dolphin/os/src/OSSync.c"),
            Object(NonMatching, "dolphin/os/src/OSThread.c"),
            Object(NonMatching, "dolphin/os/src/OSTime.c"),
            Object(NonMatching, "dolphin/os/src/init/__start.c"),
            Object(NonMatching, "dolphin/os/src/init/__ppc_eabi_init.cpp"),
        ],
    ),
    DolphinLib(
        "pad",
        [
            Object(NonMatching, "dolphin/pad/src/Padclamp.c"),
            Object(NonMatching, "dolphin/pad/src/Pad.c"),
        ],
    ),
    DolphinLib(
        "si",
        [
            Object(NonMatching, "dolphin/si/src/SIBios.c"),
            Object(NonMatching, "dolphin/si/src/SISamplingRate.c"),
        ],
    ),
    DolphinLib(
        "vi",
        [
            Object(NonMatching, "dolphin/vi/src/vi.c"),
        ],
    ),
    {
        "lib": "Runtime.PPCEABI.H",
        "mw_version": config.linker_version,
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/__mem.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/abort_exit.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/alloc.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/errno.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/ansi_files.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Src/ansi_fp.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/arith.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/buffer_io.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/char_io.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/SRC/critical_regions.gamecube.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/ctype.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/locale.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/direct_io.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/file_io.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/FILE_POS.C"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/mbstring.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/mem.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/mem_funcs.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/misc_io.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/printf.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/qsort.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/rand.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/scanf.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/signal.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/string.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/float.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/strtold.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/strtoul.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Src/uart_console_io.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/wchar_io.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_acos.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_asin.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_atan2.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_exp.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_fmod.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_pow.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_rem_pio2.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_cos.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_rem_pio2.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_sin.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_tan.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_atan.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ceil.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_copysign.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_cos.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_floor.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_frexp.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_modf.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_sin.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_tan.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_acos.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_asin.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_atan2.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_exp.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_fmod.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_pow.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/PPC_EABI/SRC/math_ppc.c"),
            Object(NonMatching, "PowerPC_EABI_Support/MSL/MSL_C/MSL_Common/Src/extras.c"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/__va_arg.c"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/global_destructor_chain.c"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/CPlusLibPPC.cp"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/New.cp"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/NMWException.cp"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/runtime.c"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/__init_cpp_exceptions.cpp"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/Gecko_ExceptionPPC.cp"),
            Object(NonMatching, "PowerPC_EABI_Support/Runtime/Src/GCN_mem_alloc.c"),
        ],
    },
    {
        "lib": "TRK_Minnow_Dolphin",
        "mw_version": "GC/1.3.2",
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/mainloop.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/nubevent.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/nubinit.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/msg.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/msgbuf.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/serpoll.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/usr_put.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/dispatch.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/msghndlr.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/support.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/mutex_TRK.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/notify.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/ppc/Generic/flush_cache.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/mem_TRK.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/ppc/Export/targsupp.s"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/ppc/Generic/__exception.s"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/ppc/Generic/mpc_7xx_603e.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Portable/main_TRK.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Os/dolphin/dolphin_trk_glue.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Os/dolphin/targcont.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/Os/dolphin/target_options.c"),
            Object(NonMatching, "TRK_MINNOW_DOLPHIN/MetroTRK/Export/mslsupp.c"),
        ],
    },
    {
        "lib": "OdemuExi2",
        "mw_version": "GC/1.3.2",
        "cflags": cflags_runtime,
        "progress_category": "sdk",
        "objects": [
            Object(NonMatching, "OdemuExi2/DebuggerDriver.c"),
        ],
    },
    RenderWareLib(
        "rpcollis",
        [
            Object(NonMatching, "rwsdk/plugin/collis/ctgeom.c"),
            Object(NonMatching, "rwsdk/plugin/collis/ctworld.c"),
            Object(NonMatching, "rwsdk/plugin/collis/ctbsp.c"),
            Object(NonMatching, "rwsdk/plugin/collis/rpcollis.c"),
        ],
    ),
    RenderWareLib(
        "rphanim",
        [
            Object(NonMatching, "rwsdk/plugin/hanim/stdkey.c"),
            Object(NonMatching, "rwsdk/plugin/hanim/rphanim.c"),
        ],
    ),
    RenderWareLib(
        "rpmatfx",
        [
            Object(NonMatching, "rwsdk/plugin/matfx/gcn/effectPipesGcn.c"),
            Object(NonMatching, "rwsdk/plugin/matfx/gcn/multiTexGcnData.c"),
            Object(NonMatching, "rwsdk/plugin/matfx/gcn/multiTexGcnPipe.c"),
            Object(NonMatching, "rwsdk/plugin/matfx/gcn/multiTexGcn.c"),
            Object(NonMatching, "rwsdk/plugin/matfx/multiTex.c"),
            Object(NonMatching, "rwsdk/plugin/matfx/multiTexEffect.c"),
            Object(NonMatching, "rwsdk/plugin/matfx/rpmatfx.c"),
        ],
    ),
    RenderWareLib(
        "rpptank",
        [
            Object(NonMatching, "rwsdk/plugin/ptank/rpptank.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcncallbacks.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcnrender.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcntransforms.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_nc_ppm.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_cc_ppm.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_nc_cs_nr.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_cc_cs_nr.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_nc_pps_nr.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_cc_pps_nr.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_nc_cs_ppr.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_cc_cs_ppr.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_nc_pps_ppr.c"),
            Object(NonMatching, "rwsdk/plugin/ptank/gcn/ptankgcn_cc_pps_ppr.c"),
        ],
    ),
    RenderWareLib(
        "rpskinmatfx",
        [
            Object(NonMatching, "rwsdk/plugin/skin2/bsplit.c"),
            Object(NonMatching, "rwsdk/plugin/skin2/rpskin.c"),
            Object(NonMatching, "rwsdk/plugin/skin2/gcn/skingcn.c"),
            Object(NonMatching, "rwsdk/plugin/skin2/gcn/skinstream.c"),
            Object(NonMatching, "rwsdk/plugin/skin2/gcn/instance/instanceskin.c"),
            Object(NonMatching, "rwsdk/plugin/skin2/gcn/skinmatrixblend.c"),
            Object(NonMatching, "rwsdk/plugin/skin2/gcn/skingcnasm.c"),
            Object(NonMatching, "rwsdk/plugin/skin2/gcn/skingcng.c"),
        ],
    ),
    RenderWareLib(
        "rpusrdat",
        [
            Object(NonMatching, "rwsdk/plugin/userdata/rpusrdat.c"),
        ],
    ),
    RenderWareLib(
        "rpworld",
        [
            Object(NonMatching, "rwsdk/world/babinwor.c"),
            Object(NonMatching, "rwsdk/world/baclump.c"),
            Object(NonMatching, "rwsdk/world/bageomet.c"),
            Object(NonMatching, "rwsdk/world/balight.c"),
            Object(NonMatching, "rwsdk/world/bamateri.c"),
            Object(NonMatching, "rwsdk/world/bamatlst.c"),
            Object(NonMatching, "rwsdk/world/bamesh.c"),
            Object(NonMatching, "rwsdk/world/bameshop.c"),
            Object(NonMatching, "rwsdk/world/basector.c"),
            Object(NonMatching, "rwsdk/world/baworld.c"),
            Object(NonMatching, "rwsdk/world/baworobj.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/bapipew.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/gcpipe.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/vtxfmt.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/wrldpipe.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/nodeGameCubeAtomicAllInOne.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/nodeGameCubeWorldSectorAllInOne.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/gclights.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/gcmorph.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/native.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/setup.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/geomcond.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/geominst.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/ibuffer.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/instancegeom.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/instanceworld.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/itools.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/vbuffer.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/vtools.c"),
            Object(NonMatching, "rwsdk/world/pipe/p2/gcn/instance/vtxdesc.c"),
        ],
    ),
    RenderWareLib(
        "rtanim",
        [
            Object(NonMatching, "rwsdk/tool/anim/rtanim.c"),
        ],
    ),
    RenderWareLib(
        "rtintsec",
        [
            Object(NonMatching, "rwsdk/tool/intsec/rtintsec.c"),
        ],
    ),
    RenderWareLib(
        "rtslerp",
        [
            Object(NonMatching, "rwsdk/tool/slerp/rtslerp.c"),
        ],
    ),
    RenderWareLib(
        "rwcore",
        [
            Object(NonMatching, "rwsdk/src/plcore/babinary.c"),
            Object(NonMatching, "rwsdk/src/plcore/bacolor.c"),
            Object(NonMatching, "rwsdk/src/plcore/baerr.c"),
            Object(NonMatching, "rwsdk/src/plcore/bafsys.c"),
            Object(NonMatching, "rwsdk/src/plcore/baimmedi.c"),
            Object(NonMatching, "rwsdk/src/plcore/bamatrix.c"),
            Object(NonMatching, "rwsdk/src/plcore/bamemory.c"),
            Object(NonMatching, "rwsdk/src/plcore/baresour.c"),
            Object(NonMatching, "rwsdk/src/plcore/bastream.c"),
            Object(NonMatching, "rwsdk/src/plcore/batkbin.c"),
            Object(NonMatching, "rwsdk/src/plcore/batkreg.c"),
            Object(NonMatching, "rwsdk/src/plcore/bavector.c"),
            Object(NonMatching, "rwsdk/src/plcore/resmem.c"),
            Object(NonMatching, "rwsdk/src/plcore/rwstring.c"),
            Object(NonMatching, "rwsdk/os/gcn/osintf.c"),
            Object(NonMatching, "rwsdk/src/babbox.c"),
            Object(NonMatching, "rwsdk/src/babincam.c"),
            Object(NonMatching, "rwsdk/src/babinfrm.c"),
            Object(NonMatching, "rwsdk/src/babintex.c"),
            Object(NonMatching, "rwsdk/src/bacamera.c"),
            Object(NonMatching, "rwsdk/src/badevice.c"),
            Object(NonMatching, "rwsdk/src/baframe.c"),
            Object(NonMatching, "rwsdk/src/baimage.c"),
            Object(NonMatching, "rwsdk/src/baimras.c"),
            Object(NonMatching, "rwsdk/src/baraster.c"),
            Object(NonMatching, "rwsdk/src/baresamp.c"),
            Object(NonMatching, "rwsdk/src/basync.c"),
            Object(NonMatching, "rwsdk/src/batextur.c"),
            Object(NonMatching, "rwsdk/src/batypehf.c"),
            Object(NonMatching, "rwsdk/driver/common/palquant.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dl2drend.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dlconvrt.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dldevice.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dlraster.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dlrendst.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dlsprite.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dltexdic.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dltextur.c"),
            Object(NonMatching, "rwsdk/driver/gcn/dltoken.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/baim3d.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/bapipe.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/p2altmdl.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/p2core.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/p2define.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/p2dep.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/p2heap.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/p2renderstate.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/p2resort.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/gcn/im3dpipe.c"),
            Object(NonMatching, "rwsdk/src/pipe/p2/gcn/nodeDolphinSubmitNoLight.c"),
        ],
    ),
]


# Optional callback to adjust link order. This can be used to add, remove, or reorder objects.
# This is called once per module, with the module ID and the current link order.
#
# For example, this adds "dummy.c" to the end of the DOL link order if configured with --non-matching.
# "dummy.c" *must* be configured as a Matching (or Equivalent) object in order to be linked.
def link_order_callback(module_id: int, objects: List[str]) -> List[str]:
    # Don't modify the link order for matching builds
    if not config.non_matching:
        return objects
    if module_id == 0:  # DOL
        return objects + ["dummy.c"]
    return objects

# Uncomment to enable the link order callback.
# config.link_order_callback = link_order_callback


# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Game Code"),
    ProgressCategory("sdk", "SDK Code"),
]
config.progress_each_module = args.verbose

if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress and write progress.json
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
