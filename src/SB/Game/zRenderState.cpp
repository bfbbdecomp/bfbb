#include "zRenderState.h"

#include "rwsdk/rwplcore.h"

#include "../Core/x/iCamera.h"

#include <types.h>

volatile _SDRenderState sRS;

// For things to line up right this has to be present.
int32 padding;


void zRenderStateInit()
{
    sRS = SDRS_Unknown;
}


_SDRenderState zRenderStateCurrent()
{
    return sRS;
}


void zRenderState(_SDRenderState newState)
{
    if (newState == sRS)
    {
        return;
    }

    // Set back to default
    RwRenderStateSet(rwRENDERSTATETEXTUREFILTER, (void*)rwFILTERLINEAR);
    iCameraSetFogRenderStates();
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)1);
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)1);
    RwRenderStateSet(rwRENDERSTATETEXTUREADDRESS, (void*)rwTEXTUREADDRESSWRAP);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
    RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)rwSHADEMODEGOURAUD);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)1);
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)1);
    sRS = newState;

    switch (sRS)
    {
    case SDRS_Particles:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)1);
        break;
    case SDRS_OpaqueModels:
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        break;
    case SDRS_Environment:
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)2);
        break;
    case SDRS_Lightning:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)2);
        break;
    case SDRS_Streak:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        break;
    case SDRS_NPCVisual:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        break;
    case SDRS_Glare:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)2);
        break;
    case SDRS_Font:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)2);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)1);
        break;
    case SDRS_HUD:
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        break;
    case SDRS_Bubble:
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)2);
        break;
    case SDRS_SkyBack:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        break;
    case SDRS_Fill:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)2);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)1);
        RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)1);
        break;
    case SDRS_OOBFade:
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)1);
        break;
    case SDRS_OOBPlayerZ:
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)1);
        RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)2);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)1);
        break;
    case SDRS_OOBPlayerAlpha:
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)2);
        break;
    case SDRS_OOBHand:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)2);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)1);
        break;
    case SDRS_Newsfish:
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, 0);
        RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)2);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)1);
        break;

    case SDRS_CruiseHUD:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        break;

    case SDRS_DiscoFloorGlow:
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
        RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)2);
        break;

    case SDRS_Unknown:
    case SDRS_Default:
    case SDRS_AlphaModels:
    case SDRS_Projectile:
        break;
    }
}
