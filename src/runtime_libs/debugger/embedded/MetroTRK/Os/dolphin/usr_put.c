#include "PowerPC_EABI_Support/MetroTRK/trk.h"

/*
 * --INFO--
 * Address:	8021CEDC
 * Size:	000004
 */
void usr_put_initialize(void)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
BOOL usr_puts_serial(const char* msg)
{
	BOOL connect_ = FALSE;
	char c;
	char buf[2];

	while (!connect_ && (c = *msg++) != '\0') {
		BOOL connect = GetTRKConnected();

		buf[0] = c;
		buf[1] = '\0';

		SetTRKConnected(FALSE);
		OSReport(buf);

		SetTRKConnected(connect);
		connect_ = FALSE;
	}
	return connect_;
}
