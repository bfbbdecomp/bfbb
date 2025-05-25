#ifndef _DOLPHIN_PUBLIC_DVD_H
#define _DOLPHIN_PUBLIC_DVD_H

#ifdef __cplusplus
extern "C" {
#endif

#include <dolphin/dvd/dvd.h>
#include <dolphin/dvd/dvdfs.h>
#include <dolphin/dvd/dvdlow.h>
#include <dolphin/dvd/dvdqueue.h>

// DVD Commands
#define DVD_COMMAND_NONE 0
#define DVD_COMMAND_READ 1
#define DVD_COMMAND_SEEK 2
#define DVD_COMMAND_CHANGE_DISK 3
#define DVD_COMMAND_BSREAD 4
#define DVD_COMMAND_READID 5
#define DVD_COMMAND_INITSTREAM 6
#define DVD_COMMAND_CANCELSTREAM 7
#define DVD_COMMAND_STOP_STREAM_AT_END 8
#define DVD_COMMAND_REQUEST_AUDIO_ERROR 9
#define DVD_COMMAND_REQUEST_PLAY_ADDR 10
#define DVD_COMMAND_REQUEST_START_ADDR 11
#define DVD_COMMAND_REQUEST_LENGTH 12
#define DVD_COMMAND_AUDIO_BUFFER_CONFIG 13
#define DVD_COMMAND_INQUIRY 14
#define DVD_COMMAND_BS_CHANGE_DISK 15
#define DVD_COMMAND_UNK_16 16

#ifdef __cplusplus
}
#endif

#endif // _DOLPHIN_PUBLIC_DVD_H