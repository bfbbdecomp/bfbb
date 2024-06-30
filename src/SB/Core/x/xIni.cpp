#include "xIni.h"
#include "xString.h"
#include <rwplcore.h>

#include <types.h>
#include <cstdlib>
#include <cstring>

char* TrimWhitespace(char* string)
{
    // Skip through any leading whitespace
    for (; *string == ' ' || *string == '\t'; string++)
    {
    }
    // Return early if there's no other characters to go through
    if (*string == '\0')
    {
        return string;
    }

    // Find first non-whitespace character at the end of the string
    char* substring = &string[strlen(string) - 1];
    for (; *substring == ' ' || *substring == '\t'; substring--)
    {
    }

    // Set the null-terminator accordingly
    substring[1] = '\0';

    return string;
}

// Nonmatching: not finished yet
xIniFile* xIniParse(char* a0, int32 sizemaybe)
{
    int32 carriage_returns = 1;
    int32 iVar11 = 0;
    int32 iVar12 = -1;
    int32 newlines = 0;
    for (int32 i = 0; i < sizemaybe; i++)
    {
        switch (a0[i])
        {
        case '\r':
            carriage_returns++;
            iVar11 = i;
            break;
        case '\n':
            newlines++;
            iVar11 = i;
            break;
        case '[':
            iVar12++;
            break;
        }
    }

    if (newlines > carriage_returns)
    {
        carriage_returns = newlines;
    }

    xIniFile* ini = (xIniFile*)RwMalloc(sizeof(xIniFile) + (carriage_returns * sizeof(xIniValue)) +
                                        (iVar12 * sizeof(xIniSection)) + (sizemaybe - iVar11));
    ini->mem = NULL;
    ini->NumValues = 0;
    ini->NumSections = 0;
    ini->Values = (xIniValue*)(ini + 1);
    ini->Sections = (xIniSection*)(&ini->Values[carriage_returns]);
    char* dest = (char*)(&ini->Sections[iVar12]);
    uint32 n = sizemaybe - (iVar11 + 1);
    strncpy(dest, a0 + iVar11 + 1, n);
    dest[n] = 0;
    if (iVar11 >= 0)
    {
        a0[iVar11] = '\0';
    }
    else
    {
        *a0 = '\0';
    }

    char* apcStack_28[1];
    char* pcVar4; // = xStrTok(a0, "\n\r", apcStack_28);
    if (xStrTok(a0, "\n\r", apcStack_28) == NULL)
    {
        pcVar4 = xStrTok(dest, "\n\r", apcStack_28);
        dest = NULL;
    }

    while (pcVar4 != NULL)
    {
        char* trimmed = TrimWhitespace(pcVar4);
        if (*trimmed != '#' && *trimmed != '\0')
        {
            if (*trimmed == '[')
            {
                char* idek = std::strstr(trimmed, "]");
                if (idek != NULL)
                {
                    *idek = '\0';
                    char* nowhitespace = TrimWhitespace(&trimmed[1]);
                    if (*nowhitespace != '\0')
                    {
                        ini->Sections[ini->NumSections].sec = nowhitespace;
                        ini->Sections[ini->NumSections].first = ini->NumValues;
                        ini->Sections[ini->NumSections].count = 0;
                        ini->NumSections++;
                    }
                }
            }
            else
            {
                char* pcVar5 = std::strstr(trimmed, "=");
                if (pcVar5 != NULL)
                {
                    *pcVar5 = '\0';
                    char* piVar6 = TrimWhitespace(pcVar4); // trimmed?
                    if (*piVar6 != '\0')
                    {
                        char* meme = pcVar5 + 1;
                        char* meme2 = std::strstr(meme, "#");
                        if (meme2 != NULL)
                        {
                            *meme2 = '\0';
                        }
                        char* piVar7 = TrimWhitespace(meme);
                        ini->Values[ini->NumValues].tok = piVar6;
                        ini->Values[ini->NumValues].val = piVar7;
                        ini->NumValues++;
                        int32 sections = ini->NumSections;
                        if (sections != 0)
                        {
                            ini->Sections[sections - 1].count++;
                        }
                    }
                }
            }
        }

        // pcVar4 = xStrTok(NULL, "\n\r", apcStack_28);
        if (xStrTok(NULL, "\n\r", apcStack_28) == NULL && dest != NULL)
        {
            xStrTok(dest, "\n\r", apcStack_28);
            dest = NULL;
        }
    }

    return ini;
}

// FIXME(tgsm): This probably shouldn't be here.
namespace std
{
    char* strstr(char* haystack, const char* needle)
    {
        return ::strstr(haystack, needle);
    }
} // namespace std

void xIniDestroy(xIniFile* ini)
{
    RwFree(ini->mem);
    RwFree(ini);
}

int32 xIniGetIndex(xIniFile* ini, int8* tok)
{
    for (int32 i = 0; i < ini->NumValues; i++)
    {
        if (xStricmp(ini->Values[i].tok, tok) == 0)
        {
            return i;
        }
    }

    return -1;
}

int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def)
{
    int32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return atoi(ini->Values[index].val);
}

float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def)
{
    int32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return atof(ini->Values[index].val);
}

int8* xIniGetString(xIniFile* ini, int8* tok, int8* def)
{
    int32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return ini->Values[index].val;
}
