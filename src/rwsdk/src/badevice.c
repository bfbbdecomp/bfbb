#include "rwplcore.h"
#include "rwcore.h"

extern RwPluginRegistry engineTKList;

RwGlobals* RwEngineInstance;
RwInt32 engineInstancesOpened;

RwInt32 _rwGetNumEngineInstances()
{
    return engineInstancesOpened;
}

RwUInt32 RwEngineGetVersion()
{
    return 0x35000;
}

RwInt32 RwEngineRegisterPlugin(RwInt32 size, RwUInt32 pluginID, RwPluginObjectConstructor initCB,
                               RwPluginObjectDestructor termCB)
{
    _rwPluginRegistryAddPlugin(&engineTKList, size, pluginID, initCB, termCB, 0x0);
}

RwInt32 RwEngineGetPluginOffset(RwUInt32 pluginID)
{
    _rwPluginRegistryGetPluginOffset(&engineTKList, pluginID);
}
