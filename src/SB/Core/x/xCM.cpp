#include "xCM.h"
#include "xEvent.h"

#include <types.h>

volatile static F32 credits_time;
static xCreditsData* credits_data;
static U32 credits_parentID;

F32 dtscale;

static void xCMprep(xCreditsData* data)
{
    /*
        data seems to point to this general structure:
        0x00 - xCMheader
        0x18 - xCMcredits
        0x50 - xCMpreset* presets_array[xCMcredits.num_presets]
             - xCMhunk* hunk_array[?]
    */

    char* dp; // In the DWARF. Don't know what this is used for.
    xCMheader* hdr = (xCMheader*)data;

    if (hdr->magic != 0xBEEEEEEF)
    {
        return;
    }

    xCMcredits* cp = (xCMcredits *)(&hdr[1]);
    while ((int)cp - (int)data < hdr->total_size)
    {
        xCMpreset* pp = (xCMpreset*)(&cp[1]);
        xCMhunk* hp = (xCMhunk*)(&pp[cp->num_presets]);

        for ( ; (int)hp - (int)cp < cp->credits_size; hp = (xCMhunk*)((int)hp + hp->hunk_size))
        {
            switch (pp[hp->preset].align)
            {
                case 0:
                case 1:
                case 2:
                case 3:

                if (hdr->state == 0)
                {
                    if (hp->text1 != NULL)
                    {
                        hp->text1 -= (int)data;
                    }
                    if (hp->text2 != NULL)
                    {
                        hp->text2 -= (int)data;
                    }
                }
                else
                {
                    if (hp->text1 != NULL)
                    {
                        hp->text1 += (int)data;
                    }
                    if (hp->text2 != NULL)
                    {
                        hp->text2 += (int)data;
                    }
                }
                break;
            }
        }
        cp = (xCMcredits*)hp;
    }

    hdr->state = hdr->state == 0 ? 1 : 0;
}

void xCMupdate(F32 time)
{
    if (credits_data != 0)
    {
        credits_time += (time * dtscale);
        if (credits_time >= *(F32*)((int)&credits_data->dummy + 0x10))
        {
            xCMstop();
        }
    }
}

void xCMrender()
{
    xCMrender(credits_time, credits_data);
}

void xCMstart(xCreditsData* data, F32 time, xBase* parent)
{
    if ((credits_data = data) != NULL)
    {
        credits_time = 0.0f;

        if (parent != NULL)
        {
            credits_parentID = parent->id;
        }
    }
}

// Equivalent: scheduling
void xCMstop()
{
    credits_time = 10000.0f;
    credits_data = NULL;
    if (credits_parentID != 0)
    {
        zEntEvent(credits_parentID, 0x212);
    }
}
