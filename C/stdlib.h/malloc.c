/*
 * void *malloc(size_t size)
 *
 * The malloc() and calloc() functions return a pointer to the allocated
 * memory, which is suitably aligned for any built-in type. On error, these
 * functions return NULL. NULL may also be returned by a successful call to
 * malloc() with a size of zero, or by a successful call to calloc() with nmemb
 * or size equal to zero.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    char *str = malloc(sizeof (TEST_STRING));
    if (!str) goto error;

    printf("%p\n", str);
    for (int i = 0; i < sizeof (TEST_STRING); i++)
        str[i] = TEST_STRING[i];
    printf("%p\n", str);
    puts(str);

    free(str);
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
