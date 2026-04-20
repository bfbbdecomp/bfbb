#include "PowerPC_EABI_Support/MSL_C/MSL_Common/signal.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_params.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/abort_exit.h"

__signal_func_ptr signal_funcs[6];

int raise(int sig)
{
    __signal_func_ptr signal_func;
    __signal_func_ptr* signal_ptr;

    if (sig < 1 || sig > 6)
    {
        return -1;
    }

    __begin_critical_region(4);
    signal_ptr = &signal_funcs[sig];
    signal_func = *--signal_ptr;

    if ((unsigned long)signal_func != 1)
    {
        *signal_ptr = NULL;
    }

    __end_critical_region(4);

    if ((unsigned long)signal_func == 1 || (signal_func == NULL && sig == 1))
    {
        return 0;
    }

    if (signal_func == NULL)
    {
        exit(0);
    }

    (*signal_func)(sig);
    return 0;
}
