/*
 * int getc(FILE *stream)
 *
 * fgetc(), getc() and getchar() return the character read as an unsigned char
 * cast to an int or EOF on end of file or error.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    FILE *fp = fopen(TEST_FILE, "r");
    if (fp == NULL) goto error;

    char c;
    while ((c = getc(fp)) != EOF)
        printf("%c", c);
    printf("\n");

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
