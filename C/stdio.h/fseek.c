/*
 * int fseek(FILE *stream, long int offset, int whence)
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    FILE *fp = fopen(TEST_FILE, "r");
    if (fp == NULL) goto error;

    int res = fseek(fp, 10L, SEEK_SET);
    if (res != 0) goto error;

    fclose(fp);
    return EXIT_SUCCESS; 

error:
    perror("Error");
    if (fp != NULL) fclose(fp);
    return EXIT_FAILURE;
}
