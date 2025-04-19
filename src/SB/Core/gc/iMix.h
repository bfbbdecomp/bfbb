#ifndef IMIX_H
#define IMIX_H

#ifdef __cplusplus
extern "C"
{
#endif

struct _AXVPB;

void MIXUnMute(int* param_1);

// No DWARF data for this structure so this is entirely guesswork.
struct MIXChannel
{
	int data[24];
};

#ifdef __cplusplus
}
#endif

#endif
