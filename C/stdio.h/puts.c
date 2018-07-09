/*
 * int puts(const char *s)
 *
 * puts() writes the string s and a trailing newline to stdout.
 *
 * puts() and fputs() return a nonnegative number on success, or EOF on error.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    char str[] = TEST_STRING;
    int rt = puts(str);
    if (rt == EOF) goto error;

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
