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

xIniFile* xIniParse(char* buf, S32 len)
{
    S32 i;
    S32 ccr = 1;
    S32 clf = 1;
    S32 copen = 0;
    S32 lastCRLF = -1;
    for (i = 0; i < len; i++)
    {
        switch (buf[i])
        {
        case '\n':
            lastCRLF = i;
            clf++;
            break;
        case '\r':
            lastCRLF = i;
            ccr++;
            break;
        case '[':
            copen++;
            break;
        }
    }

    if (clf > ccr)
    {
        ccr = clf;
    }

    S32 sectionAlloc = copen;
    S32 valueAlloc = ccr;

    xIniFile* ini = (xIniFile*)RwMalloc(sizeof(xIniFile) + (valueAlloc * sizeof(xIniValue)) +
                                        (sectionAlloc * sizeof(xIniSection)) + (len - lastCRLF));
    ini->mem = NULL;
    ini->NumValues = 0;
    ini->NumSections = 0;
    ini->Values = (xIniValue*)(ini + 1);
    ini->Sections = (xIniSection*)(ini->Values + valueAlloc);

    char* lastLine = (char*)(ini->Sections + sectionAlloc);
    strncpy(lastLine, buf + (lastCRLF + 1), len - (lastCRLF + 1));
    lastLine[len - (lastCRLF + 1)] = '\0';

    if (lastCRLF >= 0)
    {
        buf[lastCRLF] = '\0';
    }
    else
    {
        buf[0] = '\0';
    }

    char* ltoken;
    char* line = xStrTok(buf, "\n\r", &ltoken);
    if (line == NULL)
    {
        line = xStrTok(lastLine, "\n\r", &ltoken);
        lastLine = NULL;
    }

    while (line != NULL)
    {
        line = TrimWhitespace(line);
        if (*line != '#' && *line != '\0')
        {
            if (*line == '[')
            {
                char* c = std::strstr(line, "]");
                if (c != NULL)
                {
                    *c = '\0';
                    c = TrimWhitespace(line + 1);
                    if (*c != '\0')
                    {
                        ini->Sections[ini->NumSections].sec = c;
                        ini->Sections[ini->NumSections].first = ini->NumValues;
                        ini->Sections[ini->NumSections].count = 0;
                        ini->NumSections++;
                    }
                }
            }
            else
            {
                char* c = std::strstr(line, "=");
                if (c != NULL)
                {
                    *c = '\0';
                    char* tok = TrimWhitespace(line);
                    if (*tok != '\0')
                    {
                        line = c + 1;
                        c = std::strstr(line, "#");
                        if (c != NULL)
                        {
                            *c = '\0';
                        }
                        char* val = TrimWhitespace(line);
                        ini->Values[ini->NumValues].tok = tok;
                        ini->Values[ini->NumValues].val = val;
                        ini->NumValues++;
                        if (ini->NumSections != 0)
                        {
                            ini->Sections[ini->NumSections - 1].count++;
                        }
                    }
                }
            }
        }

        line = xStrTok(NULL, "\n\r", &ltoken);
        if (line == NULL && lastLine != NULL)
        {
            line = xStrTok(lastLine, "\n\r", &ltoken);
            lastLine = NULL;
        }
    }

    return ini;
}

void xIniDestroy(xIniFile* ini)
{
    RwFree(ini->mem);
    RwFree(ini);
}

S32 xIniGetIndex(xIniFile* ini, S8* tok)
{
    for (S32 i = 0; i < ini->NumValues; i++)
    {
        if (xStricmp(ini->Values[i].tok, tok) == 0)
        {
            return i;
        }
    }

    return -1;
}

S32 xIniGetInt(xIniFile* ini, S8* tok, S32 def)
{
    S32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return atoi(ini->Values[index].val);
}

F32 xIniGetFloat(xIniFile* ini, S8* tok, F32 def)
{
    S32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return atof(ini->Values[index].val);
}

S8* xIniGetString(xIniFile* ini, S8* tok, S8* def)
{
    S32 index = xIniGetIndex(ini, tok);
    if (index == -1)
    {
        return def;
    }
    return ini->Values[index].val;
}
