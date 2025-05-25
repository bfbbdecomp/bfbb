#include <dolphin.h>
#include <dolphin/ax.h>

#include "dolphin/ax/__ax.h"

static u16 __AXCommandList[2][384];

static u32 __AXCommandListPosition;
static u16* __AXClWrite;
static u32 __AXCommandListCycles;
static u32 __AXCompressor;
u32 __AXClMode;

u32 __AXGetCommandListCycles(void)
{
    return __AXCommandListCycles;
}

u32 __AXGetCommandListAddress(void)
{
    u32 address;

    address = (u32)&__AXCommandList[__AXCommandListPosition][0];
    __AXCommandListPosition += 1;
    __AXCommandListPosition &= 1;
    __AXClWrite = (void*)&__AXCommandList[__AXCommandListPosition][0];
    return address;
}

// void __AXWriteToCommandList(u16 data)
// {
//     *__AXClWrite = data;
//     __AXClWrite++;
// }

void __AXNextFrame(void* sbuffer, void* buffer)
{
    u32 data;
    u16* pCommandList;

    __AXCommandListCycles = 0x1A9;
    pCommandList = __AXClWrite;
    data = __AXGetStudio();
    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;
    __AXCommandListCycles += 0x2E44;

    switch (__AXClMode)
    {
    case 0:
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        __AXCommandListCycles += 0x546;
        break;
    case 1:
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        __AXCommandListCycles += 0x5E6;
        break;
    case 2:
        break;
    default:
        return;
    }

    data = (u32)__AXGetPBs();
    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;

    if (__AXClMode == 2)
    {
        __AXGetAuxAInput(&data);
        if (data != 0)
        {
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXGetAuxAInputDpl2(&data);
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXGetAuxAOutput(&data);
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXGetAuxAOutputDpl2R(&data);
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXGetAuxAOutputDpl2Ls(&data);
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXGetAuxAOutputDpl2Rs(&data);
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXCommandListCycles += 0xDED;
        }
        *__AXClWrite = data;
        __AXClWrite++;
        __AXGetAuxBForDPL2(&data);
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        __AXGetAuxBOutputDPL2(&data);
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        __AXCommandListCycles += 0xDED;
    }
    else
    {
        __AXGetAuxAInput(&data);

        if (data != 0)
        {
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXGetAuxAOutput(&data);
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXCommandListCycles += 0xDED;
        }

        __AXGetAuxBInput(&data);
        if (data != 0)
        {
            *__AXClWrite = data;
            __AXClWrite++;
            __AXCommandListCycles += 0xDED;
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
            __AXGetAuxBOutput(&data);
            *__AXClWrite = data;
            __AXClWrite++;
            *__AXClWrite = data;
            __AXClWrite++;
        }
    }

    if (__AXCompressor)
    {
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        *__AXClWrite = data;
        __AXClWrite++;
        __AXCommandListCycles += 0xBB8;
    }

    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;
    *__AXClWrite = data;
    __AXClWrite++;
    __AXCommandListCycles += 0x2710;
    *__AXClWrite = data;
    __AXClWrite++;
    __AXCommandListCycles += 2;
    DCFlushRange(pCommandList, 0x300);
}

void __AXClInit(void)
{
#ifdef DEBUG
    OSReport("Initializing AXCL code module\n");
#endif
    __AXClMode = 0;
    __AXCommandListPosition = 0;
    __AXClWrite = (void*)&__AXCommandList;
    __AXCompressor = 1;
}

void __AXClQuit(void)
{
#ifdef DEBUG
    OSReport("Shutting down AXCL code module\n");
#endif
}
