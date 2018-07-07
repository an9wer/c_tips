/*
 * void* memcpy( void *dest, const void *src, size_t count );
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str1[] = "hello";
    char str2[] = "world";

    memcpy(str1, str2, strlen(str2));
    puts(str1);

    return EXIT_SUCCESS;
}
