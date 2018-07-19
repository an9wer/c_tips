/*
 * void *realloc(void *ptr, size_t size)
 *
 * The realloc() function returns a pointer to the newly allocated memory,
 * which is suitably aligned for any built-in type and may be different from
 * ptr, or NULL if the request fails. If size was equal to 0, either NULL or a
 * pointer suitable to be passed to free() is returned. If realloc() fails, the
 * original block is left untouched; it is not freed or moved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(void)
{
    char *str = malloc(sizeof (TEST_STRING));
    if (!str) goto error;
    strcpy(str, TEST_STRING);

    printf("%p\n", str);
    str = realloc(str, sizeof (TEST_STRING) * 2);
    if (!str) goto error;
    strcat(str, TEST_STRING);

    printf("%p\n", str);
    puts(str);

    free(str);
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
