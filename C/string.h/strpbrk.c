/*
 * char *strpbrk(const char *s, const char *accept)
 *
 * The strpbrk() function returns a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(void)
{
    char str[] = TEST_STRING;
    char accept[] = "s";
    if (strpbrk(str, accept) == NULL)
        puts("cannot find!");
    else
        puts("gotcha!");

    return EXIT_SUCCESS;
}
