/*
 * char *strchr(const char *s, int c);
 *
 * The strchr() and strrchr() functions return a pointer to the matched
 * character or NULL if the character is not found. The terminating null byte
 * is considered part of the string, so that if c is specified as '\0', these
 * functions return a pointer to the terminator.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(void)
{
    char * str = TEST_STRING;
    char * rt = strchr(str, str[1]);
    puts(rt);

    return EXIT_SUCCESS;
}
