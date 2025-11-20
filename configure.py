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
config.objdiff_tag = "v3.3.1"
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
    f"--defsym VERSION_={config.version}",
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
    "-i src/PowerPC_EABI_Support/include",
    "-i src/dolphin/include",
    "-i src/dolphin/src",
    "-i src",
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

# dolphin library flags
cflags_dolphin = [
    *cflags_base,
    "-lang=c",
    "-fp fmadd",
    "-fp_contract off",
    "-char signed",
    "-str reuse",
    "-common off",
    "-O4,p",
    #"-requireprotos"
]

cflags_trk = [
    *cflags_base,
    "-O4,p",
            "-sdata 0",
            "-sdata2 0",
            "-inline auto,deferred",
            "-rostr",
            "-char signed",
            "-use_lmw_stmw on"
]

# Renderware library flags
cflags_renderware = [
    *cflags_base,
    "-lang=c",
    "-fp fmadd",
    "-fp_contract off",
    "-char signed",
    "-str reuse",
    "-common off",
    "-O4,p",
    #"-requireprotos"
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
    "-lang=C++",
    "-common on",
    "-char unsigned",
    "-str reuse,pool,readonly",
    "-use_lmw_stmw on",
    '-pragma "cpp_extensions on"',
    "-inline off",
    "-gccinc",
    "-i include/bink",
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
        "src_dir": "src/",
        "mw_version": "GC/1.2.5n",
        "cflags": cflags_dolphin,
        "progress_category": "sdk",
        "host": True,
        "objects": objects,
    }

# Helper function for MSL libraries
def mslLib(lib_name: str, extra_cflags: List[str], objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "src_dir": "src/PowerPC_EABI_Support/src",
        "mw_version": "GC/2.6",
        "cflags": cflags_runtime + extra_cflags,
        "progress_category": "msl",
        "host": True,
        "objects": objects,
    }

def trkLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "src_dir": "src/runtime_libs",
        "mw_version": "GC/2.6",
        "cflags": cflags_runtime,
        "progress_category": "msl",
        "host": True,
        "objects": objects,
    }

# Helper function for RenderWare libraries
def RenderWareLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "src_dir": "src",
        "mw_version": "GC/1.3.2",
        "cflags": cflags_renderware,
        "progress_category": "RW",
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
            Object(Equivalent, "SB/Core/x/xMovePoint.cpp"),
            Object(NonMatching, "SB/Core/x/xordarray.cpp"),
            Object(NonMatching, "SB/Core/x/xPad.cpp"),
            Object(NonMatching, "SB/Core/x/xPar.cpp"),
            Object(NonMatching, "SB/Core/x/xParCmd.cpp"),
            Object(Matching, "SB/Core/x/xParGroup.cpp"),
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
            Object(Matching, "SB/Core/x/xTimer.cpp"),
            Object(NonMatching, "SB/Core/x/xTRC.cpp"),
            Object(Matching, "SB/Core/x/xutil.cpp"),
            Object(Matching, "SB/Core/x/xVec3.cpp"),
            Object(NonMatching, "SB/Game/zActionLine.cpp"),
            Object(Equivalent, "SB/Game/zAnimList.cpp"),
            Object(Equivalent, "SB/Game/zAssetTypes.cpp", extra_cflags=["-sym on"]),
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
            Object(Matching, "SB/Game/zVar.cpp"),
            Object(NonMatching, "SB/Game/zVolume.cpp"),
            Object(Equivalent, "SB/Core/gc/iAnim.cpp"),
            Object(NonMatching, "SB/Core/gc/iAnimSKB.cpp"),
            Object(NonMatching, "SB/Core/x/iCamera.cpp"),
            Object(NonMatching, "SB/Core/gc/iCollide.cpp", extra_cflags=["-sym on"]),
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
            Object(Matching, "SB/Core/gc/iMix.c"),
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
            Object(NonMatching, "SB/Game/zEntPlayerBungeeState.cpp", extra_cflags=["-sym on"]),
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
            Object(Matching, "SB/Game/zNPCSndLists.cpp"),
            Object(NonMatching, "SB/Game/zNPCTypeDuplotron.cpp"),
            Object(NonMatching, "SB/Core/x/xModelBucket.cpp"),
            Object(NonMatching, "SB/Game/zShrapnel.cpp"),
            Object(Matching, "SB/Game/zNPCGoalDuplotron.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zNPCSpawner.cpp"),
            Object(NonMatching, "SB/Game/zEntTeleportBox.cpp"),
            Object(Matching, "SB/Game/zBusStop.cpp"),
            Object(NonMatching, "SB/Game/zNPCSupport.cpp"),
            Object(NonMatching, "SB/Game/zTalkBox.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zTextBox.cpp"),
            Object(Equivalent, "SB/Game/zTaskBox.cpp"),
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
            Object(NonMatching, "SB/Core/x/xDecal.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Core/x/xLaserBolt.cpp", extra_cflags=["-sym on"]),
            Object(NonMatching, "SB/Game/zCameraTweak.cpp"),
            Object(NonMatching, "SB/Core/x/xPtankPool.cpp"),
            Object(Equivalent, "SB/Core/gc/iTRC.cpp"),
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
        "progress_category": "bink",
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
            Object(Matching, "dolphin/src/ai/ai.c"),
        ],
    ),
    DolphinLib(
        "amcstubs",
        [
            Object(Matching, "dolphin/src/amcstubs/AmcExi2Stubs.c"),
        ],
    ),
    DolphinLib(
        "ar",
        [
            Object(Matching, "dolphin/src/ar/ar.c"),
            Object(Matching, "dolphin/src/ar/arq.c")
        ]
    ),
    DolphinLib(
        "ax",
        [
            Object(Matching, "dolphin/src/ax/AX.c"),
            Object(Matching, "dolphin/src/ax/AXAlloc.c"),
            Object(Matching, "dolphin/src/ax/AXAux.c"),
            Object(Matching, "dolphin/src/ax/AXCL.c"),
            Object(Matching, "dolphin/src/ax/AXOut.c"),
            Object(Matching, "dolphin/src/ax/AXSPB.c"),
            Object(Matching, "dolphin/src/ax/AXVPB.c"),
            Object(Matching, "dolphin/src/ax/AXComp.c"),
            Object(Matching, "dolphin/src/ax/DSPCode.c"),
            Object(Matching, "dolphin/src/ax/AXProf.c"),
        ],
    ),
    DolphinLib(
        "base",
        [
            Object(Matching, "dolphin/src/base/PPCArch.c")
        ]
    ),
    DolphinLib(
        "card",
        [
            Object(Matching, "dolphin/src/card/CARDBios.c"),
            Object(Matching, "dolphin/src/card/CARDUnlock.c"),
            Object(Matching, "dolphin/src/card/CARDRdwr.c"),
            Object(Matching, "dolphin/src/card/CARDBlock.c"),
            Object(Matching, "dolphin/src/card/CARDDir.c"),
            Object(Matching, "dolphin/src/card/CARDCheck.c"),
            Object(Matching, "dolphin/src/card/CARDMount.c"),
            Object(Matching, "dolphin/src/card/CARDFormat.c"),
            Object(Matching, "dolphin/src/card/CARDOpen.c"),
            Object(Matching, "dolphin/src/card/CARDCreate.c"),
            Object(Matching, "dolphin/src/card/CARDRead.c"),
            Object(Matching, "dolphin/src/card/CARDWrite.c"),
            Object(Matching, "dolphin/src/card/CARDDelete.c"),
            Object(Matching, "dolphin/src/card/CARDStat.c"),
            Object(Matching,"dolphin/src/card/CARDStatEx.c"),
            Object(Matching, "dolphin/src/card/CARDNet.c"),
        ]
    ),
    DolphinLib(
        "db",
        [
            Object(Matching, "dolphin/src/db/db.c"),
        ]
    ),
    DolphinLib(
        "dsp",
        [
            Object(Matching, "dolphin/src/dsp/dsp.c"),
            Object(Matching, "dolphin/src/dsp/dsp_debug.c"),
            Object(Matching, "dolphin/src/dsp/dsp_task.c")
        ]        
    ),
    DolphinLib(
        "dvd",
        [
            Object(Matching, "dolphin/src/dvd/dvdlow.c"),
            Object(Matching, "dolphin/src/dvd/dvdfs.c"),
            Object(Matching, "dolphin/src/dvd/dvd.c"),
            Object(Matching, "dolphin/src/dvd/dvdqueue.c"),
            Object(Matching, "dolphin/src/dvd/dvderror.c"),
            Object(Matching, "dolphin/src/dvd/dvdidutils.c"),
            Object(Matching, "dolphin/src/dvd/dvdFatal.c"),
            Object(Matching, "dolphin/src/dvd/emu_level2/fstload.c"),
        ],
    ),
    DolphinLib(
        "exi",
        [
            Object(Matching, "dolphin/src/exi/EXIBios.c"),
            Object(Matching, "dolphin/src/exi/EXIUart.c")
        ]
    ),
    DolphinLib(
        "gx",
        [
            Object(Matching, "dolphin/src/gx/GXInit.c"),
            Object(Matching, "dolphin/src/gx/GXFifo.c"),
            Object(Matching, "dolphin/src/gx/GXAttr.c"),
            Object(Matching, "dolphin/src/gx/GXMisc.c"),
            Object(Matching, "dolphin/src/gx/GXGeometry.c"),
            Object(Matching, "dolphin/src/gx/GXFrameBuf.c"),
            Object(Matching, "dolphin/src/gx/GXLight.c"),
            Object(Matching, "dolphin/src/gx/GXTexture.c"),
            Object(Matching, "dolphin/src/gx/GXBump.c"),
            Object(Matching, "dolphin/src/gx/GXTev.c"),
            Object(Matching, "dolphin/src/gx/GXPixel.c"),
            Object(Matching, "dolphin/src/gx/GXDisplayList.c"),
            Object(Matching, "dolphin/src/gx/GXTransform.c"),
            Object(Matching, "dolphin/src/gx/GXPerf.c")
        ]
    ),
    DolphinLib(
        "mtx",
        [
            Object(Matching, "dolphin/src/mtx/mtx.c"),
            Object(Matching, "dolphin/src/mtx/mtx44.c"),
        ]
    ),
    DolphinLib(
        "OdemuExi2",
        [
            Object(Matching, "dolphin/src/OdemuExi2/DebuggerDriver.c", extra_cflags=["-inline on, deferred"])
        ]
    ),
    DolphinLib(
        "odenotstub",
        [
            Object(Matching, "dolphin/src/odenotstub/odenotstub.c")
        ]
    ),
    DolphinLib(
        "os",
        [
            Object(Matching, "dolphin/src/os/OS.c"),
            Object(Matching, "dolphin/src/os/OSAlarm.c"),
            Object(Matching, "dolphin/src/os/OSAlloc.c"),
            Object(Matching, "dolphin/src/os/OSArena.c"),
            Object(Matching, "dolphin/src/os/OSAudioSystem.c"),
            Object(Matching, "dolphin/src/os/OSCache.c"),
            Object(Matching, "dolphin/src/os/OSContext.c"),
            Object(Matching, "dolphin/src/os/OSError.c"),
            Object(Matching, "dolphin/src/os/OSFont.c"),
            Object(Matching, "dolphin/src/os/OSInterrupt.c"),
            Object(Matching, "dolphin/src/os/OSLink.c"),
            Object(Matching, "dolphin/src/os/OSMemory.c"),
            Object(Matching, "dolphin/src/os/OSMutex.c"),
            Object(Matching, "dolphin/src/os/OSReboot.c"),
            Object(Matching, "dolphin/src/os/OSReset.c"),
            Object(Matching, "dolphin/src/os/OSResetSW.c"),
            Object(Matching, "dolphin/src/os/OSRtc.c"),
            Object(Matching, "dolphin/src/os/OSThread.c"),
            Object(Matching, "dolphin/src/os/OSTime.c"),
            Object(Matching, "dolphin/src/os/OSSync.c"),
            Object(NonMatching, "dolphin/src/os/init/__start.c"),
            Object(NonMatching, "dolphin/src/os/init/__ppc_eabi_init.cpp")
        ]
    ),
    DolphinLib(
        "pad",
        [
            Object(Matching, "dolphin/src/pad/Padclamp.c"),
            Object(Matching, "dolphin/src/pad/Pad.c")
        ]
    ),
    DolphinLib(
        "si",
        [
            Object(Matching, "dolphin/src/si/SIBios.c"),
            Object(Matching, "dolphin/src/si/SISamplingRate.c"),
        ]
    ),
    DolphinLib(
        "vi",
        [
            Object(Matching, "dolphin/src/vi/vi.c", extra_cflags=["-DMATCHING"]),
        ],
    ),
    mslLib(
        "Runtime.PPCEABI.H",
        [],
        [
            Object(NonMatching, "Runtime/__mem.c", extra_cflags=["-inline on, deferred"]),
            Object(Matching, "Runtime/__va_arg.c"),
            Object(NonMatching, "Runtime/global_destructor_chain.c"),
            Object(NonMatching, "Runtime/New.cp"),
            Object(NonMatching, "Runtime/NMWException.cp"),
            Object(Matching, "Runtime/CPlusLibPPC.cp"),
            Object(NonMatching, "Runtime/ptmf.c"),
            Object(NonMatching, "Runtime/runtime.c"),
            Object(NonMatching, "Runtime/__init_cpp_exceptions.cpp"),
            Object(NonMatching, "Runtime/Gecko_ExceptionPPC.cp"),
            Object(NonMatching, "Runtime/GCN_mem_alloc.c"),
        ]
    ),
    mslLib(
        "MSL_C.PPCEABI.H",
        ["-str pool", "-opt level=0, peephole, schedule, nospace", "-inline off", "-sym on"],
        [
            Object(NonMatching, "MSL_C/PPC_EABI/abort_exit.c"),
            Object(NonMatching, "MSL_C/MSL_Common/alloc.c"),
            Object(NonMatching, "MSL_C/MSL_Common/ansi_files.c"),
            Object(NonMatching, "MSL_C/MSL_Common_Embedded/ansi_fp.c"),
            Object(NonMatching, "MSL_C/MSL_Common/arith.c"),
            Object(NonMatching, "MSL_C/MSL_Common/bsearch.c"),
            Object(NonMatching, "MSL_C/MSL_Common/buffer_io.c"),
            Object(Matching, "MSL_C/PPC_EABI/critical_regions.gamecube.c"),
            Object(NonMatching, "MSL_C/MSL_Common/ctype.c"),
            Object(NonMatching, "MSL_C/MSL_Common/direct_io.c"),
            Object(Matching, "MSL_C/MSL_Common/errno.c"),
            Object(NonMatching, "MSL_C/MSL_Common/file_io.c"),
            Object(NonMatching, "MSL_C/MSL_Common/FILE_POS.C"),
            Object(NonMatching, "MSL_C/MSL_Common/locale.c"),
            Object(NonMatching, "MSL_C/MSL_Common/mbstring.c"),
            Object(NonMatching, "MSL_C/MSL_Common/mem.c"),
            Object(NonMatching, "MSL_C/MSL_Common/mem_funcs.c"),
            Object(NonMatching, "MSL_C/MSL_Common/misc_io.c"),
            Object(NonMatching, "MSL_C/MSL_Common/printf.c"),
            Object(NonMatching, "MSL_C/MSL_Common/qsort.c"),
            Object(NonMatching, "MSL_C/MSL_Common/rand.c"),
            Object(NonMatching, "MSL_C/MSL_Common/scanf.c"),
            Object(NonMatching, "MSL_C/MSL_Common/signal.c"),
            Object(NonMatching, "MSL_C/MSL_Common/string.c"),
            Object(NonMatching, "MSL_C/MSL_Common/strtold.c"),
            Object(NonMatching, "MSL_C/MSL_Common/strtoul.c"),
            Object(NonMatching, "MSL_C/MSL_Common/float.c"),
            Object(NonMatching, "MSL_C/MSL_Common/char_io.c"),
            Object(NonMatching, "MSL_C/MSL_Common/wchar_io.c"),
            Object(NonMatching, "MSL_C/MSL_Common_Embedded/uart_console_io_gcn.c")
        ]
    ),
    mslLib(
        "fdlibm.PPCEABI.H",
        [],
        [
            Object(NonMatching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/e_acos.c"),
            Object(NonMatching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/e_asin.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/e_atan2.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/e_exp.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/e_fmod.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log.c"),
            Object(NonMatching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/e_pow.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/e_rem_pio2.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/k_cos.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/k_rem_pio2.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/k_sin.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/k_tan.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_atan.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ceil.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_copysign.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_cos.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_floor.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_frexp.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_modf.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_sin.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/s_tan.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/w_acos.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/w_asin.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/w_atan2.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/w_exp.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/w_fmod.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log.c"),
            Object(Matching, "MSL_C/MSL_Common_Embedded/Math/Double_precision/w_pow.c"),
            Object(NonMatching, "MSL_C/PPC_EABI/math_ppc.c"),
        ]
    ),
    trkLib(
        "TRK_MINNOW_DOLPHIN",
        [
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/mainloop.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/nubevent.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/nubassrt.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/nubinit.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/msg.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/msgbuf.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/serpoll.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/dispatch.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/msghndlr.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/support.c"),
            Object(Matching, "debugger/embedded/MetroTRK/Portable/mutex_TRK.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/notify.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/main_TRK.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/mem_TRK.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Portable/string_TRK.c"),
            Object(Matching, "debugger/embedded/MetroTRK/Processor/ppc/Generic/flush_cache.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Processor/ppc/Generic/__exception.s"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Processor/ppc/Generic/targimpl.c"),
            Object(Matching, "debugger/embedded/MetroTRK/Processor/ppc/Export/targsupp.s"),
            Object(Matching, "debugger/embedded/MetroTRK/Processor/ppc/Generic/mpc_7xx_603e.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Os/dolphin/dolphin_trk.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Os/dolphin/usr_put.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Os/dolphin/dolphin_trk_glue.c"),
            Object(Matching, "debugger/embedded/MetroTRK/Os/dolphin/targcont.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Os/dolphin/target_options.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Os/dolphin/UDP_Stubs.c"),
            Object(NonMatching, "debugger/embedded/MetroTRK/Export/mslsupp.c"),

            Object(NonMatching, "gamedev/cust_connection/cc/exi2/GCN/EXI2_DDH_GCN/main.c"),
            Object(NonMatching, "gamedev/cust_connection/utils/common/CircleBuffer.c"),
            Object(NonMatching, "gamedev/cust_connection/cc/exi2/GCN/EXI2_GDEV_GCN/main.c"),
            Object(NonMatching, "gamedev/cust_connection/utils/common/MWTrace.c"),
            Object(NonMatching, "gamedev/cust_connection/utils/gc/MWCriticalSection_gc.cpp"),
        ]
    ),
    mslLib(
        "MSL_C.PPCEABI.bare.H",
        [],
        [
            Object(NonMatching, "MSL_C/MSL_Common/extras.c")
        ]
    ),
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
    ProgressCategory("msl", "MSL"),
    ProgressCategory("RW", "Renderware SDK"),
    ProgressCategory("bink", "Bink SDK"),
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
