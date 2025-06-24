#include <plugin/userdata/rpusrdat.h>

static RwInt32 userDataGeometryOffset = 0;
static RwInt32 userDataGeometryStreamOffset = 0;
static RwInt32 userDataWorldSectorOffset = 0;
static RwInt32 userDataWorldSectorStreamOffset = 0;
static RwInt32 userDataFrameOffset = 0;
static RwInt32 userDataFrameStreamOffset = 0;
static RwInt32 userDataCameraOffset = 0;
static RwInt32 userDataCameraStreamOffset = 0;
static RwInt32 userDataLightOffset = 0;
static RwInt32 userDataLightStreamOffset = 0;
static RwInt32 userDataMaterialOffset = 0;
static RwInt32 userDataMaterialStreamOffset = 0;
static RwInt32 userDataTextureOffset = 0;
static RwInt32 userDataTextureStreamOffset = 0;

RwModuleInfo userDataModule;

#define rwPLUGIN_ID rwID_USERDATAPLUGIN
#define rwPLUGIN_ERRFUNC _rwdb_CriterionUserData
#define rwPLUGIN_ERRENUM e_rwdb_CriterionUserData
#define rwPLUGIN_ERRENUMLAST e_rwdb_CriterionUserDataLAST

typedef struct RpUserDataList RpUserDataList;

struct RpUserDataList
{
    RwInt32 numElements;
    RpUserDataArray* userData;
};

// Not continuing this file because RwMalloc could be wrong
// Will return when more info is available

static void* UserDataOpen(void* instance, RwInt32 offset, RwInt32 size)
{
    userDataModule.numInstances++;

    return instance;
}

static void* UserDataClose(void* instance, RwInt32 offset, RwInt32 size)
{
    userDataModule.numInstances--;

    return instance;
}

static RwStream* UserDataStreamRead(RpUserDataArray* userData, RwStream* stream)
{
    RwInt32 i, length;
    RwInt32* intData;
    RwReal* realData;
    RwChar** charData;

    if (!RwStreamReadInt32(stream, &length, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (length > 0)
    {
        if (userData->name == NULL)
        {
            return NULL;
        }

        if (!RwStreamRead(stream, userData->name, sizeof(RwChar) * length))
        {
            return NULL;
        }
    }

    if (!RwStreamReadInt32(stream, (RwInt32*)&userData->format, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (!RwStreamReadInt32(stream, &userData->numElements, sizeof(RwInt32)))
    {
        return NULL;
    }

    switch (userData->format)
    {
    case rpINTUSERDATA:

        if (userData->data == NULL)
        {
            return NULL;
        }

        intData = (RwInt32*)userData->data;

        if (!RwStreamReadInt32(stream, intData, sizeof(RwInt32) * userData->numElements))
        {
            return NULL;
        }
        break;
    case rpREALUSERDATA:

        if (userData->data == NULL)
        {
            return NULL;
        }

        realData = (RwReal*)userData->data;

        if (!RwStreamReadReal(stream, realData, sizeof(RwReal) * userData->numElements))
        {
            return NULL;
        }
        break;
    case rpSTRINGUSERDATA:

        if (userData->data == NULL)
        {
            return NULL;
        }

        charData = (RwChar**)userData->data;

        for (i = 0; i < userData->numElements; i++)
        {
            if (!RwStreamReadInt32(stream, &length, sizeof(RwInt32)))
            {
                return NULL;
            }

            if (length > 0)
            {
                if (charData[i] == NULL)
                {
                    return NULL;
                }

                if (!RwStreamRead(stream, charData[i], sizeof(RwChar) * length))
                {
                    return NULL;
                }
            }
            else
            {
                charData[i] = (RwChar*)NULL;
            }
        }
        break;
    default:
        return NULL;
        break;
    }

    return stream;
}

static void* UserDataObjectConstruct(void* object, RwInt32 offset, RwInt32 size)
{
}

static void* UserDataObjectCopy(void* destinationObject, const void* sourceObject, RwInt32 offset,
                                RwInt32 size)
{
    RpUserDataList* dstUserDataList = 0;
    const RpUserDataList* srcUserDataList = 0;

    UserDataListCopy(dstUserDataList, srcUserDataList);

    return destinationObject;
}

RwInt32 RpGeometryAddUserDataArray(RpGeometry* geometry, RwChar* name, RpUserDataFormat format,
                                   RwInt32 numElements)
{
    RwInt32 index;
    RpUserDataList* userDataList = 0;

    index = UserDataListAddElement(userDataList, name, format, numElements);

    return index;
}
