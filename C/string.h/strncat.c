/*
 * char *strncat( char *dest, const char *src, size_t count )
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str1[10] = "hello ";
    char str2[10] = "world!";

    strncat(str1, str2, strlen(str2));
    puts(str1);

    return EXIT_SUCCESS;
}
