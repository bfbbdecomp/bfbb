#include <dolphin/os.h>

OSModuleQueue __OSModuleInfoList : (OS_BASE_CACHED | 0x30C8);
const void* __OSStringTable : (OS_BASE_CACHED | 0x30D0);

void __OSModuleInit(void)
{
    __OSModuleInfoList.head = __OSModuleInfoList.tail = 0;
    __OSStringTable = 0;
}
