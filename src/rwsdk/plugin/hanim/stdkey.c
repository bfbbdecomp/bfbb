#include "rwplcore.h"
#include "rwcore.h"
#include "rphanim.h"

#define RpHAnimKeyFrameToMatrixMacro(_matrix, _voidIFrame)                                         \
    MACRO_START                                                                                    \
    {                                                                                              \
        RpHAnimInterpFrame* iFrame = (RpHAnimInterpFrame*)(_voidIFrame);                           \
                                                                                                   \
        RtQuatUnitConvertToMatrix(&iFrame->q, (_matrix));                                          \
                                                                                                   \
        (_matrix)->pos.x = iFrame->t.x;                                                            \
        (_matrix)->pos.y = iFrame->t.y;                                                            \
        (_matrix)->pos.z = iFrame->t.z;                                                            \
    }                                                                                              \
    MACRO_STOP

#define _EPSILON ((RwReal)(0.001))
#define _TOL_COS_ZERO (((RwReal)1) - _EPSILON)

void RpHAnimKeyFrameApply(void* pMatrix, void* pVoidIFrame)
{
    // Correct idea, but executed wwrong?
    RpHAnimKeyFrameToMatrixMacro((RwMatrix*)pMatrix, pVoidIFrame);
    return;
}

void RpHAnimKeyFrameInterpolate(void* pVoidOut, void* pVoidIn1, void* pVoidIn2, RwReal time,
                                void* customData)
{
    // End of the function is correct, first 80% is horribly wrong.
    RpHAnimInterpFrame* pOut = (RpHAnimInterpFrame*)pVoidOut;
    RpHAnimKeyFrame* pIn1 = (RpHAnimKeyFrame*)pVoidIn1;
    RpHAnimKeyFrame* pIn2 = (RpHAnimKeyFrame*)pVoidIn2;

    RwReal fCosTheta =
        (RwV3dDotProduct(&pIn1->q.imag, &pIn2->q.imag) + pIn1->q.real * pIn2->q.real);
    RwReal fAlpha = ((time - pIn1->time) /

                     (pIn2->time - pIn1->time));
    RwReal fBeta;
    RwBool bObtuseTheta;
    RwBool bNearlyZeroTheta = 0;

    RpHAnimKeyFrameTransInterpolate(&pOut->t, &pIn1->t, fAlpha, &pIn2->t);

    bObtuseTheta = (fCosTheta < ((RwReal)0));

    if (bObtuseTheta)
    {
        fCosTheta = -fCosTheta;
        RwV3dNegate(&pIn2->q.imag, &pIn2->q.imag);
        pIn2->q.real = -pIn2->q.real;
    }

    fBeta = ((RwReal)1) - fAlpha;

    bNearlyZeroTheta = (fCosTheta >= _TOL_COS_ZERO);

    if (!bNearlyZeroTheta)
    {
        RwReal fTheta = 0;
        RwReal fCosecTheta = 0;

        RwIEEEACosfMacro(fTheta, fCosTheta);
        RwCosecMinusPiToPiMacro(fCosecTheta, fTheta);

        fBeta *= fTheta;
        RwSinMinusPiToPiMacro(fBeta, fBeta);
        fBeta *= fCosecTheta;

        fAlpha *= fTheta;
        RwSinMinusPiToPiMacro(fAlpha, fAlpha);
        fAlpha *= fCosecTheta;
    }

    pOut->q.imag.x = fBeta * pIn1->q.imag.x + fAlpha * pIn2->q.imag.x;
    pOut->q.imag.y = fBeta * pIn1->q.imag.y + fAlpha * pIn2->q.imag.y;
    pOut->q.imag.z = fBeta * pIn1->q.imag.z + fAlpha * pIn2->q.imag.z;
    pOut->q.real = fBeta * pIn1->q.real + fAlpha * pIn2->q.real;

#if (0)
    /* Assert no worse than 5% error in length^2 of
     * spherically interpolated quaternion  */

    RWASSERT(bNearlyZeroTheta || (((0.95) < RtQuatModulusSquaredMacro(&pOut->q)) &&
                                  (RtQuatModulusSquaredMacro(&pOut->q) < (1 / 0.95))));
#endif

    return;
}

// Not continuing with this file for now
// Seems to need the macros rewritten, along with a good portion of the functions
// -Colin
