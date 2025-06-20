#include "rwplcore.h"
#include "rwcore.h"

s32 _rxPTankGameCubeRenderPipeline;

void PTankClose()
{
    if (_rxPTankGameCubeRenderPipeline != 0)
    {
        _rxPipelineDestroy((RxPipeline*)_rxPTankGameCubeRenderPipeline);
        _rxPTankGameCubeRenderPipeline = 0;
    }
}
