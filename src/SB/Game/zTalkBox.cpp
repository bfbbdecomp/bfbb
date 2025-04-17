#include "zTalkBox.h"

#include <types.h>

namespace
{
    struct SharedTalkboxState
    {
        void* padding[2]; // FIXME: variables not verified
        ztalkbox* active;
    };

    SharedTalkboxState ztalkbox_shared;
}

void ztalkbox::reset_all() 
{
    volatile int* sharedMemory = reinterpret_cast<volatile int*>(ztalkbox_shared.active);
    
    int value = 0;
    *sharedMemory = value;
    *(sharedMemory + 8) = value;
    *(sharedMemory + 9) = 0;
    *(sharedMemory + 10) = 0;
    *(sharedMemory + 11) = 0;
    *(sharedMemory + 12) = 0;

    clear_layout(); //FIXME: Find and replace with xtextbox::layout::clear()
    return;
}

ztalkbox* ztalkbox::get_active()
{
    return ztalkbox_shared.active;
}
