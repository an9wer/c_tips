/*
 * FILE *fopen(const char *filename, const char *mode)
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    FILE *fp = fopen(TEST_NONEXIST_FILE, "r");
    if (fp == NULL) goto error;

    fclose(fp);
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
