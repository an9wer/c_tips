/*
 * int sprintf(char *str, const char *format, ...)
 *
 * Upon successful return, the function returns the number of characters
 * printed (excluding the null byte used to end output to strings). If an
 * output error is encountered, a negative value is returned.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    char str[sizeof TEST_STRING];
    int rt = sprintf(str, "%s", TEST_STRING);
    if (rt < 0) goto error;

    printf("%s", str);
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
