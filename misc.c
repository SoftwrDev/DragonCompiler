#include "misc.h"
#include <string.h>

/**
 * Matches the given input with the second input whilst taking the delimieter into account.
 * "input2" must be null terminated with no delmieter.
 * "input1" can end with either a null terminator of the given delimieter.
 */
int str_matches(const char *input, const char *input2, char delim)
{
    int res = 0;
    int c2_len = strlen(input2);

    int i = 0;
    while (1)
    {
        char c = *input;
        char c2 = *input2;

        if (i > c2_len)
        {
            res = -1;
            break;
        }

        if (c == delim || c == 0x00)
        {
            break;
        }
        
        if (c != c2)
        {
            res = -1;
            break;
        }

        input++;
        input2++;
        i++;
    }

    return res;
}