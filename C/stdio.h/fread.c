/*
 * size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    FILE *fp = fopen(TEST_FILE, "r");
    if (fp == NULL) goto error;

    fseek(fp, 0L, SEEK_END);
    size_t len = (size_t)ftell(fp);
    char *buffer = (char *)malloc(len);

    fseek(fp, 0L, SEEK_SET);
    fread(buffer, sizeof (char), len, fp);

    printf("%s", buffer);

    free(buffer);
    fclose(fp);
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
