#include "PowerPC_EABI_Support/MetroTRK/trk.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"
#include "runtime_libs/debugger/embedded/MetroTRK/Os/dolphin/target_options.h"
#include "runtime_libs/debugger/embedded/MetroTRK/Processor/ppc/Export/targsupp.h"

int __read_console(__file_handle file, char* buffer, size_t* count, __ref_con ref_con)
{
    size_t countTemp;
    u32 result;

    if (GetUseSerialIO() == 0)
    {
        return DS_IOError;
    }

    if (GetTRKConnected() == DS_NoError)
    {
        return DS_IOError;
    }

    countTemp = *count;
    result = TRKAccessFile(DSMSG_ReadFile, DS_Stdin, &countTemp, (u8*)buffer);
    *count = countTemp;

    switch ((u8)result)
    {
    case DS_IONoError:
        return DS_IONoError;
    case DS_IOEOF:
        return DS_IOEOF;
    }

    return DS_IOError;
}

int __TRK_write_console(__file_handle file, char* buffer, size_t* count, __ref_con ref_con)
{
    size_t countTemp;
    u32 result;

    if (GetUseSerialIO() == 0)
    {
        return DS_IOError;
    }

    if (GetTRKConnected() == DS_NoError)
    {
        return DS_IOError;
    }

    countTemp = *count;
    result = TRKAccessFile(DSMSG_WriteFile, DS_Stdout, &countTemp, (u8*)buffer);
    *count = countTemp;

    switch ((u8)result)
    {
    case DS_IONoError:
        return DS_IONoError;
    case DS_IOEOF:
        return DS_IOEOF;
    }

    return DS_IOError;
}

int __read_file(__file_handle file, char* buffer, size_t* count, __ref_con ref_con)
{
    size_t countTemp;
    u32 result;

    if (GetTRKConnected() == DS_NoError)
    {
        return DS_IOError;
    }

    countTemp = *count;
    result = TRKAccessFile(DSMSG_ReadFile, file, &countTemp, (u8*)buffer);
    *count = countTemp;

    switch ((u8)result)
    {
    case DS_IONoError:
        return DS_IONoError;
    case DS_IOEOF:
        return DS_IOEOF;
    }

    return DS_IOError;
}

int __write_file(__file_handle file, char* buffer, size_t* count, __ref_con ref_con)
{
    size_t countTemp;
    u32 result;

    if (GetTRKConnected() == DS_NoError)
    {
        return DS_IOError;
    }

    countTemp = *count;
    result = TRKAccessFile(DSMSG_WriteFile, file, &countTemp, (u8*)buffer);
    *count = countTemp;

    switch ((u8)result)
    {
    case DS_IONoError:
        return DS_IONoError;
    case DS_IOEOF:
        return DS_IOEOF;
    }

    return DS_IOError;
}

int __open_file(const char* name, file_modes mode, __file_handle* handle)
{
    const u8* modeBytes;
    u32 result;
    u32 binaryIO;
    u32 ioMode;
    u32 openMode;
    u32 trkMode;

    if (GetTRKConnected() == DS_NoError)
    {
        return DS_IOError;
    }

    modeBytes = (const u8*)&mode;
    trkMode = 0;
    openMode = mode.open_mode;
    ioMode = mode.io_mode;
    binaryIO = (modeBytes[1] >> 3) & 0x01;

    switch (openMode)
    {
    case 0:
        trkMode |= 0x01;
        break;
    case 2:
        trkMode |= 0x02;
        break;
    case 1:
        trkMode |= 0x04;
        break;
    }

    switch (ioMode)
    {
    case 1:
        trkMode |= 0x01;
        break;
    case 2:
        trkMode |= 0x02;
        break;
    case 6:
        trkMode |= 0x04;
        break;
    case 3:
        trkMode |= 0x12;
        break;
    case 7:
        trkMode |= 0x07;
        break;
    }

    if (binaryIO == 1)
    {
        trkMode = (trkMode | 0x08) & 0xFF;
    }

    result = TRKOpenFile(DSMSG_OpenFile, (u32)name, (u8)trkMode, (u8*)handle);

    switch ((u8)result)
    {
    case DS_IONoError:
        return DS_IONoError;
    case DS_IOEOF:
        return DS_IOEOF;
    }

    return DS_IOError;
}

int __close_file(__file_handle file)
{
    u32 result;

    if (GetTRKConnected() == DS_NoError)
    {
        return DS_IOError;
    }

    result = TRKCloseFile(DSMSG_CloseFile, file);

    switch ((u8)result)
    {
    case DS_IONoError:
        return DS_IONoError;
    case DS_IOEOF:
        return DS_IOEOF;
    }

    return DS_IOError;
}

int __position_file(__file_handle file, fpos_t* position, int mode, __ref_con ref_con)
{
    u32 modeConverted;
    u32 result;

    modeConverted = 0;

    if (GetTRKConnected() == DS_NoError)
    {
        return DS_IOError;
    }

    if (mode == 0)
    {
        modeConverted = 0;
    }
    else if (mode == 1)
    {
        modeConverted = 1;
    }
    else if (mode == 2)
    {
        modeConverted = 2;
    }

    result = TRKPositionFile(DSMSG_PositionFile, file, position, (u8)modeConverted);

    switch ((u8)result)
    {
    case DS_IONoError:
        return DS_IONoError;
    case DS_IOEOF:
        return DS_IOEOF;
    }

    return DS_IOError;
}
