#ifndef XUTIL_H
#define XUTIL_H

#include <types.h>

int32 xUtilStartup();
int32 xUtilShutdown();
char* xUtil_idtag2string(uint32 srctag, int32 bufidx);
uint32 xUtil_crc_init();
uint32 xUtil_crc_update(uint32 crc_accum, char* data, int32 datasize);
int32 xUtil_yesno(float32 wt_yes);
void xUtil_wtadjust(float32* wts, int32 cnt, float32 arbref);

#endif