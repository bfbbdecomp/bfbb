#ifndef PPC_EXPORT_TARGSUPP_H
#define PPC_EXPORT_TARGSUPP_H

#include "dolphin/types.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 TRKAccessFile(u8 command, u32 file_handle, u32* length_ptr, u8* buffer_ptr);
u32 TRKOpenFile(u8 command, u32 file_handle, u8 flags, u8* buffer_ptr);
u32 TRKCloseFile(u8 command, u32 file_handle);
u32 TRKPositionFile(u8 command, u32 file_handle, u32* position_ptr, u8 pos_mode);

#ifdef __cplusplus
}
#endif

#endif /* PPC_EXPORT_TARGSUPP_H */
