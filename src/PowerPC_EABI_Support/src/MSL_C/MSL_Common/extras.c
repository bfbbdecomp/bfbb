#include "types.h"
#include "ctype.h"

int strcmpi(const char* str1, const char* str2)
{
    char a_var;
    char b_var;

    do {
        b_var = _tolower(*str1++);
        a_var = _tolower(*str2++);

        if (b_var < a_var) {
            return -1;
        }
        if (b_var > a_var) {
            return 1;
        }
    } while (b_var != 0);

    return 0;
}

int stricmp(char* param_1, char* param_2)
{
    s8 a_var;
    s8 b_var;

    do {
        a_var = *param_1;
        param_1++;
        b_var = _tolower(a_var);

        a_var = *param_2;
        param_2++;
        a_var = _tolower(a_var);

        if (b_var < a_var) {
            return -1;
        }
        if (b_var > a_var) {
            return 1;
        }
    } while (b_var != 0);

    return 0;
}
