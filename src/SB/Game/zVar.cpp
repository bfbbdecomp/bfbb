#include "zVar.h"

#include <stdio.h>
#include <string.h>
#include <types.h>
#include <PowerPC_EABI_Support\MSL_C\MSL_Common\stdlib.h>

#include "iTime.h"

#include "xFont.h"
#include "xString.h"
#include "xsavegame.h"
#include "xSnd.h"
#include "xutil.h"

#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zMenu.h"
#include "zSaveLoad.h"
#include "zScene.h"
#include "zUI.h"

/*
vars = {
    {"ActivePad", 9, &var_text_ActivePad},
    {"BadCard", 7, &var_text_BadCard},
    ...
}

Full `vars` Array Contents
Notes:
* Looking up the address in the callback column will yield the first
  instruction of a call in zVar.s, that's the function in question.
* This means the function signature of the callbacks is `char* Callback();`.

NameStr  | NameLen  | Callback
------------------------------
8025FDEF | 00000009 | "ActivePad" -> var_text_ActivePad__Fv
8025FDF9 | 00000007 | "BadCard" -> var_text_BadCard__Fv
8025FE01 | 00000010 | 800BD26C -> TODO: Translate these if you need them
8025FE12 | 0000000D | 800BD2AC
8025FE20 | 0000000F | 800BD2EC
8025FE30 | 0000000B | 800BD380
8025FE3C | 0000000B | 800BD3B0
8025FE48 | 00000017 | 800BD3E0
8025FE60 | 00000015 | 800BD428
8025FE76 | 0000000C | 800BD470
8025FE83 | 0000000B | 800BD4CC
8025FE8F | 00000009 | 800BD7B8
8025FE99 | 00000009 | 800BD7E8
8025FEA3 | 00000009 | 800BD818
8025FEAD | 00000009 | 800BD848
8025FEB7 | 00000009 | 800BD878
8025FEC1 | 00000009 | 800BD8A8
8025FECB | 00000009 | 800BD8D8
8025FED5 | 00000009 | 800BD908
8025FEDF | 0000000C | 800BD938
8025FEEC | 0000000E | 800BD968
8025FEFB | 00000006 | 800BDE68
8025FF02 | 0000000D | 800BD9B4
8025FF10 | 0000000D | 800BD9F4
8025FF1E | 0000000E | 800BDA34
8025FF2D | 0000000E | 800BDA80
8025FF3C | 0000000B | 800BDAC8
8025FF48 | 0000000A | 800BDAE0
8025FF53 | 0000000E | 800BDAF8
8025FF62 | 0000000C | 800BDB74
8025FF6F | 0000000A | 800BDB98
8025FF7A | 0000000E | 800BDBE0
8025FF89 | 0000000D | 800BDC74
8025FF97 | 00000010 | 800BDCBC
8025FFA8 | 0000000E | 800BDD04
8025FFB7 | 00000014 | 800BDD48
8025FFCC | 0000000B | 800BDDDC
8025FFCC | 0000000B | 800BDDDC
8025FFD8 | 0000000E | 800BDE20
8025FFE7 | 00000003 | 800BDF80
*/

S32 bad_card_available;
S32 bad_card_needed;

char* var_text(const substr& str);
U32 zVarEntryCB_SndFXVol(void*);
U32 zVarEntryCB_SndMusicVol(void*);

// var_text callbacks
namespace
{
    static S32 selSceneID;

    char* var_text_ActivePad()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", globals.currentActivePad + 1);
        return buffer;
    }

    char* var_text_BadCard()
    {
        static char buffer[0x0C];
        S32 badCardCount = zMenuGetBadCard();
        if (badCardCount > 0)
        {
            sprintf(buffer, "%c", 'A' + (badCardCount - 1));
        }
        else
        {
            strcpy(buffer, "A or B");
        }
        return buffer;
    }

    char* var_text_BadCardAvailable()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", bad_card_available);
        return buffer;
    }

    // var_text_BadCardNeeded__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv
    char* var_text_BadCardNeeded()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", bad_card_needed);
        return buffer;
    }

    // Indexing into zVar_strings didn't get pulled out of the loop in the original
    // code for some reason.
    char* var_text_CorruptFileName()
    {
        static char buffer[0x80];
        char corruptedNames[3][64];

        // Random unused readonly structs. All we know is that these are
        // initialized, but never referenced, and that these two groups
        // should be in different functions (just WHICH functions, idk.)
        const char _449[0x0C] = {};
        const char _450[0x0C] = {};
        const char _454[0x0C] = {};
        const char _485[0x0C] = {};

        const char _617[0x28] = {};
        const char _618[0x28] = {};
        const char _619[0x28] = {};
        const char _620[0x28] = {};
        const char _621[0x28] = {};
        const char _622[0x28] = {};
        const char _623[0x28] = {};

        S32 corruptCount = zMenuGetCorruptFiles(corruptedNames);
        strcpy(buffer, "");
        for (S32 i = 0; i < corruptCount; ++i)
        {
            strcat(buffer, corruptedNames[i]);
            strcat(buffer, "\n");
        }
        return buffer;
    }

    static char* var_text_CurrentArea()
    {
        return (char*)zSceneGetAreaname(globals.sceneCur->sceneID);
    }

    char* var_text_CurrentDate()
    {
        static char buffer[0x20];
        iGetCurrFormattedDate(buffer);
        return buffer;
    }

    char* var_text_CurrentLevelCollectable()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d",
                globals.player.Inv_LevelPickups_CurrentLevel);
        return buffer;
    }

    char* var_text_CurrentLevelPatsSocks()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d",
                globals.player.Inv_PatsSock_CurrentLevel);
        return buffer;
    }

    char* var_text_CurrentScene()
    {
        static char buffer[0x20];
        sprintf(buffer, "%s",
                xUtil_idtag2string(globals.sceneCur->sceneID, 0));
        return buffer;
    }

    char* var_text_CurrentTime()
    {
        static char buffer[0x20];
        iGetCurrFormattedTime(buffer);
        return buffer;
    }
}

const basic_rect<F32> screen_bounds  = { 0.0f, 0.0f, 1.0f, 1.0f };
const basic_rect<F32> default_adjust = { 0.0f, 0.0f, 1.0f, 1.0f };

namespace
{
    char* zVarGameSlotInfo(S32 i, char* buffer, size_t something)
    {
        char date[0x20] = "";
        char time[0x20] = "";
        S32 hour;
        char ampm[0x20] = "";
        char biggerbuf[256] = "";

        // Get the date
        strncpy(date, zSaveLoadGameTable[i].date, 5);
        date[2] = '/';

        sprintf(biggerbuf, "%s/%c%c", date, zSaveLoadGameTable[i].date[0x8],
                zSaveLoadGameTable[i].date[0x9]);
        strncpy(date, biggerbuf, 0x20);
        date[0x20 - 1] = '\0';

        // Get the hour
        sprintf(time, "%c%c", zSaveLoadGameTable[i].date[0xB],
                zSaveLoadGameTable[i].date[0xC]);

        // Get the AM/PM
        hour = atoi(time);
        if (hour >= 12)
        {
            strncpy(ampm, "PM", 3);
            if (hour != 12)
            {
                hour -= 12;
            }
        }
        else
        {
            strncpy(ampm, "AM", 3);
            if (hour == 0)
            {
                hour = 12;
            }
        }

        // Construct final date
        sprintf(time, "%d:%c%c %s", hour, zSaveLoadGameTable[i].date[0xE],
                zSaveLoadGameTable[i].date[0xF], ampm);
        sprintf(date, "%s %s", date, time);
        time[0x20 - 1] = '\0';
        date[0x20 - 1] = '\0';

        if (xStricmp(zSaveLoadGameTable[i].label, "Empty") == 0)
        {
            sprintf(buffer, "Empty");
        }
        else
        {
            zSaveLoad_BuildName(buffer, i);
        }

        return buffer;
    }

    char* var_text_GameSlot0()
    {
        static char buffer[0x40];
        return zVarGameSlotInfo(0, buffer, 0x3f);
    }

    char* var_text_GameSlot1()
    {
        static char buffer[0x40];
        return zVarGameSlotInfo(1, buffer, 0x3f);
    }

    char* var_text_GameSlot2()
    {
        static char buffer[0x40];
        return zVarGameSlotInfo(2, buffer, 0x3f);
    }

    char* var_text_GameSlot3()
    {
        static char buffer[0x40];
        return zVarGameSlotInfo(3, buffer, 0x3f);
    }

    char* var_text_GameSlot4()
    {
        static char buffer[0x40];
        return zVarGameSlotInfo(4, buffer, 0x3f);
    }

    char* var_text_GameSlot5()
    {
        static char buffer[0x40];
        return zVarGameSlotInfo(5, buffer, 0x3f);
    }

    char* var_text_GameSlot6()
    {
        static char buffer[0x40];
        return zVarGameSlotInfo(6, buffer, 0x3f);
    }

    char* var_text_GameSlot7()
    {
        static char buffer[0x40];
        return zVarGameSlotInfo(7, buffer, 0x3f);
    }

    char* var_text_MCAccessType()
    {
        static char* state_text[4] =
        {
            "Accessing",
            "Loading data",
            "Saving data",
            "Formatting memory card"
        };
        return state_text[zSaveLoad_getMCAccessType()];
    }

    char* var_text_MCAutoSaveCard()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%c", 'A' + zSaveLoadGetAutoSaveCard());
        return buffer;
    }

    char* var_text_MCPS2MaxSpace()
    {
        // Yes... this matches. Probably just stripped out during porting since it
        // was a PS2 thing.
        static char buffer[0x0C];
        sprintf(buffer, "%d", 0);
        return buffer;
    }

    char* var_text_MCPS2MinSpace()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", 0);
        return buffer;
    }

    char* var_text_MCSelectedCard()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%c", 'A' + zSaveLoad_getcard());
        return buffer;
    }

    char* var_text_MCSelectedGame()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", zSaveLoad_getgame() + 1);
        return buffer;
    }

    char* var_text_PlayerHeShe()
    {
        static char* text[3] =
        {
            "{i:text_player_he}",
            "{i:text_player_he}",
            "{i:text_player_she}"
        };
        return text[gCurrentPlayer];
    }

    char* var_text_PlayerName()
    {
        static char* text[3] =
        {
            "{i:text_spongebob_name}",
            "{i:text_patrick_name}",
            "{i:text_sandy_name}"
        };
        return text[gCurrentPlayer];
    }

    char* var_text_PlayerPosition()
    {
        static char buffer[0x30];
        xEntFrame* frame = globals.player.ent.frame;
        sprintf(buffer, "%d,%d,%d", S32(frame->mat.pos.x),
                S32(frame->mat.pos.y), S32(frame->mat.pos.z));
        return buffer;
    }

    char* var_text_SelectedArea()
    {
        return (char*)zSceneGetAreaname(selSceneID);
    }

    char* var_text_ShinyCount()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", globals.player.Inv_Shiny);
        return buffer;
    }

    char* var_text_ShinyCountText()
    {
        static char buffer[0x40] = "4000000000 {i:text_shinies}";
        if (globals.player.Inv_Shiny == 0)
        {
            strcpy(buffer, "{i:text_noshinies}");
        }
        else if (globals.player.Inv_Shiny == 1)
        {
            strcpy(buffer, "1 {i:text_shiny}");
        }
        else
        {
            sprintf(buffer, "%d {i:text_shinies}",
                    globals.player.Inv_Shiny);
        }
        return buffer;
    }

    char* var_text_SoundFXVolume()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", zVarEntryCB_SndFXVol(NULL));
        return buffer;
    }

    char* var_text_SoundMusicVolume()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", zVarEntryCB_SndMusicVol(NULL));
        return buffer;
    }

    char* var_text_SpaceAvailable()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", zSaveLoad_getMCavailable());
        return buffer;
    }

    char* var_text_SpaceAvailableString()
    {
        // What a wierd dance... they could have just used buffer directly.
        static char buffer[0x40];
        char tmp[0x20];
        S32 available = zSaveLoad_getMCavailable();
        memset(tmp, 0, 0x20);
        memset(buffer, 0, 0x40);
        sprintf(tmp, "%d", available);
        sprintf(buffer, "%s", tmp);
        return buffer;
    }

    char* var_text_SpaceNeeded()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", zSaveLoad_getMCneeded());
        return buffer;
    }

    char* var_text_TotalPatsSocks()
    {
        static char buffer[0x0C];
        sprintf(buffer, "%d", globals.player.Inv_PatsSock_Total);
        return buffer;
    }

    char* var_text_MCName()
    {
        static char buffer[0x20];

        switch (zSaveLoad_getcard())
        {
        case 0:
            strcpy(buffer, "{i:LD MC1 TXT}");
            break;
        case 1:
            strcpy(buffer, "{i:LD MC2 TXT}");
            break;
        default:
            strcpy(buffer, "");
            break;
        }
        return buffer;
    }

    static var_type vars[0x27] =
    {
        { "ActivePad",               0x09, &var_text_ActivePad },
        { "BadCard",                 0x07, &var_text_BadCard },
        { "BadCardAvailable",        0x10, &var_text_BadCardAvailable },
        { "BadCardNeeded",           0x0D, &var_text_BadCardNeeded },
        { "CorruptFileName",         0x0F, &var_text_CorruptFileName },
        { "CurrentArea",             0x0B, &var_text_CurrentArea },
        { "CurrentDate",             0x0B, &var_text_CurrentDate },
        { "CurrentLevelCollectable", 0x17, &var_text_CurrentLevelCollectable },
        { "CurrentLevelPatsSocks",   0x15, &var_text_CurrentLevelPatsSocks },
        { "CurrentScene",            0x0C, &var_text_CurrentScene },
        { "CurrentTime",             0x0B, &var_text_CurrentTime  },
        { "GameSlot0",               0x09, &var_text_GameSlot0 },
        { "GameSlot1",               0x09, &var_text_GameSlot1 },
        { "GameSlot2",               0x09, &var_text_GameSlot2 },
        { "GameSlot3",               0x09, &var_text_GameSlot3 },
        { "GameSlot4",               0x09, &var_text_GameSlot4 },
        { "GameSlot5",               0x09, &var_text_GameSlot5 },
        { "GameSlot6",               0x09, &var_text_GameSlot6 },
        { "GameSlot7",               0x09, &var_text_GameSlot7 },
        { "MCAccessType",            0x0C, &var_text_MCAccessType },
        { "MCAutoSaveCard",          0x0E, &var_text_MCAutoSaveCard },
        { "MCName",                  0x06, &var_text_MCName },
        { "MCPS2MaxSpace",           0x0D, &var_text_MCPS2MaxSpace },
        { "MCPS2MinSpace",           0x0D, &var_text_MCPS2MinSpace },
        { "MCSelectedCard",          0x0E, &var_text_MCSelectedCard },
        { "MCSelectedGame",          0x0E, &var_text_MCSelectedGame },
        { "PlayerHeShe",             0x0B, &var_text_PlayerHeShe },
        { "PlayerName",              0x0A, &var_text_PlayerName },
        { "PlayerPosition",          0x0E, &var_text_PlayerPosition },
        { "SelectedArea",            0x0C, &var_text_SelectedArea },
        { "ShinyCount",              0x0A, &var_text_ShinyCount },
        { "ShinyCountText",          0x0E, &var_text_ShinyCountText },
        { "SoundFXVolume",           0x0D, &var_text_SoundFXVolume },
        { "SoundMusicVolume",        0x10, &var_text_SoundMusicVolume },
        { "SpaceAvailable",          0x0E, &var_text_SpaceAvailable },
        { "SpaceAvailableString",    0x14, &var_text_SpaceAvailableString },
        { "SpaceNeeded",             0x0B, &var_text_SpaceNeeded },
        { "SpaceNeeded",             0x0B, &var_text_SpaceNeeded },
        { "TotalPatsSocks",          0x0E, &var_text_TotalPatsSocks }
    };

    var_type* find_var(const substr& str)
    {
        U32 start = 0;
        U32 end = 0x27;
        while (start != end)
        {
            S32 c = (start + end) / 2;
            var_type* t = &vars[c];
            int i = icompare(str, t->name);
            if (i < 0)
            {
                end = c;
            }
            else if (i > 0)
            {
                start = c + 1;
            }
            else
            {
                return t;
            }
        }

        return NULL;
    }

    void parse_tag_var(xtextbox::jot& r31, const xtextbox& r4, const xtextbox& r5,
                       const xtextbox::split_tag& r6)
    {
        if ((r6.action.size != 1) || (r6.action.text[0] != 0x3A) || (r6.value.size <= 1))
            return;

        r31.context = var_text(r6.value);
        r31.context_size = 0;
        if (r31.context != NULL)
        {
            r31.context_size = 0xFC00;
            r31.flag.insert = r31.flag.dynamic = 1;
        }
    }
} // namespace

void var_init()
{
    static xtextbox::tag_type var_tag = { "var", 0x03, &parse_tag_var };
    xtextbox::register_tags(&var_tag, 1);
}

char* var_text(const substr& str)
{
    var_type* entry = find_var(str);
    if (entry == NULL)
        return NULL;

    return entry->get_text();
}

void zVarInit(zVarEntry* table)
{
    for (S32 i = 0; i < 18; ++i)
    {
        table[i].varNameID = xStrHash(table[i].varName);
    }
}

void zVarNewGame()
{
}

U32 zVarEntryCB_SndMode(void* arg)
{
    return gSnd.stereo;
}

U32 zVarEntryCB_SndMusicVol(void* arg)
{
    F64 f0 = 0.5;
    F64 f1 = 10.0;
    F64 f2 = gSnd.categoryVolFader[2];

    f2 *= f1;
    f2 = f0 + f2;

    return f2;
}

U32 zVarEntryCB_SndFXVol(void* arg)
{
    F64 f0 = 0.5;
    F64 f1 = 10.0;
    F64 f2 = gSnd.categoryVolFader[0];

    f2 *= f1;
    f2 = f0 + f2;

    return f2;
}

U32 zVarEntryCB_MCAvailable(void* arg)
{
    if (xSGGameIsEmpty(NULL, 0) == 1)
    {
        if (xSGGameIsEmpty(NULL, 1) == 1)
        {
            return 0;
        }
        if (xSGGameIsEmpty(NULL, 1) == 0)
        {
            return 2;
        }
    }
    else if (xSGGameIsEmpty(NULL, 0) == 0)
    {
        if (xSGGameIsEmpty(NULL, 1) == 1)
        {
            return 1;
        }
        if (xSGGameIsEmpty(NULL, 1) == 0)
        {
            return 3;
        }
    }

    return 0;
}

U32 zVarEntryCB_VibrationOn(void* arg)
{
    // I'm pretty sure they actually and'd with a bit mask here, I couldn't find
    // another way (such as casting to bool) to get the right instructions.
    return globals.option_vibration & 0x1;
}

U32 zVarEntryCB_CurrentSceneLetter(void*)
{
    char buffer[16];
    sprintf(buffer, "%s", xUtil_idtag2string(globals.sceneCur->sceneID, 0));

    // Convert the most significant char to uppercase
    // The lowercase variable doesn't exist in the ps4 symbols but I can't
    // figure out how to get a match otherwise.
    U32 mostSignificantChar = buffer[0];
    bool lowercase = false;
    if (mostSignificantChar >= 'a' && mostSignificantChar <= 'z')
    {
        lowercase = true;
    }
    if (lowercase)
    {
        mostSignificantChar -= 0x20;
    }

    return (mostSignificantChar - 'A') + 1;
}

U32 zVarEntryCB_CurrentRoom(void*)
{
    char buffer[16];
    sprintf(buffer, "%s", xUtil_idtag2string(globals.sceneCur->sceneID, 0));

    S32 room = (buffer[2] - '0') * 10 + (buffer[3] - '0');

    // Convert the most significant char to uppercase
    // The lowercase variable doesn't exist in the ps4 symbols but I can't
    // figure out how to get a match otherwise.
    U32 mostSignificantChar = buffer[0];
    bool lowercase = false;
    if (mostSignificantChar >= 'a' && mostSignificantChar <= 'z')
    {
        lowercase = true;
    }
    if (lowercase)
    {
        mostSignificantChar -= 0x20;
    }

    return room + ((mostSignificantChar - 'A') + 1) * 100;
}

U32 zVarEntryCB_CurrentLevelPickup(void*)
{
    return globals.player.Inv_LevelPickups_CurrentLevel;
}

U32 zVarEntryCB_CurrentLevelPSocks(void*)
{
    return globals.player.Inv_PatsSock_CurrentLevel;
}

U32 zVarEntryCB_TotalPSocks(void*)
{
    return globals.player.Inv_PatsSock_Total;
}

U32 zVarEntryCB_Shinies(void*)
{
    return globals.player.Inv_Shiny;
}

U32 zVarEntryCB_Spatulas(void*)
{
    return globals.player.Inv_Spatula;
}

U32 zVarEntryCB_Date(void*)
{
    return iGetDay() + iGetMonth() * 0x64;
}

U32 zVarEntryCB_Hour(void*)
{
    return iGetHour();
}

U32 zVarEntryCB_Minute(void*)
{
    return iGetMinute();
}

U32 zVarEntryCB_CounterValue(void* arg)
{
    // Given the void argument type, no idea what type this actually is.
    // What we do know that at an offset 5 words in there's a signed S16.
    struct something
    {
        U32 stuff[5];
        S16 theValue;
    };
    return ((something*)arg)->theValue;
}

U32 zVarEntryCB_IsEnabled(void* arg)
{
    return xBaseIsEnabled((xBase*)arg) != 0;
}

U32 zVarEntryCB_IsVisible(void* arg)
{
    return xEntIsVisible((xEnt*)arg) != 0;
}

zVarEntry zVarEntryTable[19] =
{
    { 0x00, 0x00, "Sound mode",                zVarEntryCB_SndMode },
    { 0x01, 0x00, "Music Volume",              zVarEntryCB_SndMusicVol },
    { 0x02, 0x00, "SFX Volume",                zVarEntryCB_SndFXVol },
    { 0x03, 0x00, "Memory Card Available",     zVarEntryCB_MCAvailable },
    { 0x04, 0x00, "Vibration is on",           zVarEntryCB_VibrationOn },
    { 0x05, 0x00, "Letter of scene",           zVarEntryCB_CurrentSceneLetter },
    { 0x06, 0x00, "Room",                      zVarEntryCB_CurrentRoom },
    { 0x07, 0x00, "Current Level Collectable", zVarEntryCB_CurrentLevelPickup },
    { 0x08, 0x00, "Pat's Socks",               zVarEntryCB_CurrentLevelPSocks },
    { 0x09, 0x00, "Total Pat's Socks",         zVarEntryCB_TotalPSocks },
    { 0x0A, 0x00, "Shiny Objects",             zVarEntryCB_Shinies },
    { 0x0B, 0x00, "Golden Spatulas",           zVarEntryCB_Spatulas },
    { 0x0C, 0x00, "Current Date",              zVarEntryCB_Date },
    { 0x0D, 0x00, "Current Hour",              zVarEntryCB_Hour },
    { 0x0E, 0x00, "Current Minute" ,           zVarEntryCB_Minute },
    { 0x0F, 0x00, "Counter Value",             zVarEntryCB_CounterValue },
    { 0x10, 0x00, "Is Enabled (0=No, 1=Yes)",  zVarEntryCB_IsEnabled },
    { 0x11, 0x00, "Is Visible (0=No, 1=Yes)",  zVarEntryCB_IsVisible },
    { 0x00, 0x00, NULL, NULL }
};