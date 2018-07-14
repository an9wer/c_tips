/*
 * size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
 *
 * On success, fread() and fwrite() return the number of items read or written.
 * This number equals the number of bytes transferred only when size is 1. If
 * an error occurs, or the end of the file is reached, the return value is a
 * short item count (or zero).
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    FILE *fp = fopen(TEST_FILE, "r");
    if (fp == NULL) goto error;

    // check file size to allocate appropriate buffer
    fseek(fp, 0L, SEEK_END);
    size_t len = (size_t)ftell(fp);
    char *buffer = (char *)malloc(len);

    // read file content to buffer
    fseek(fp, 0L, SEEK_SET);
    size_t rt = fread(buffer, sizeof (char), len, fp);
    if (rt != len) goto error;

    puts(buffer);

    free(buffer);
    fclose(fp);
    return EXIT_SUCCESS;

error:
    perror("Error");
    if (fp != NULL) fclose(fp);
    return EXIT_FAILURE;
}
