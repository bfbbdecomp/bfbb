#include "types.h"

s32 InitializeUART(u32);                      /* extern */
s32 WriteUARTN(s32, s32);                     /* extern */
s32 __TRK_write_console(s32, s32, s32*, s32); /* extern */

static BOOL initialized;

int __close_console(void)
{
	return 0;
}

BOOL __write_console(s32 arg0, s32 arg1, s32* arg2, s32 arg3)
{
	s32 ret;

	ret = 0;
	if ((initialized == FALSE) && ((ret = InitializeUART(0xE100)) == 0)) {
		initialized = TRUE;
	}

	if (ret != 0) {
		return TRUE;
	}

	if (WriteUARTN(arg1, *arg2) != 0) {
		*arg2 = 0;
		return TRUE;
	}

	__TRK_write_console(arg0, arg1, arg2, arg3);
	return FALSE;
}
