#ifndef IMIX_H
#define IMIX_H

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

struct _AXVPB;

void MIXUnMute(S32* param_1);

// No DWARF data for this structure so this is entirely guesswork.
struct MIXChannel
{
	S32 data[24];
};

#ifdef __cplusplus
}
#endif

#endif
