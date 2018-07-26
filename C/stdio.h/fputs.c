/*
 * int fputs(const char *s, FILE *stream)
 *
 * puts() and fputs() return a nonnegative number on success, or EOF on error.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    fputs("some\nthing", stdout);
    return EXIT_SUCCESS;
}
