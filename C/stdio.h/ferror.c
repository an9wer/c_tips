/*
 * int ferror(FILE *stream)
 *
 * nonzero (true) if condition is true, 0 (false) otherwise.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    FILE *fp = fopen(TEST_FILE, "r");
    if (fp == NULL) goto error;

    getc(fp);
    if (ferror(fp)) goto error;

    return EXIT_SUCCESS;

error:
    perror("Error");
    if (fp != NULL) fclose(fp);
    return EXIT_FAILURE;
}
