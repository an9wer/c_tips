/*
 * char *fgets(char *s, int size, FILE *stream)
 *
 * fgets() returns s on success, and NULL on error or when end of file occurs
 * while no characters have been read.
 *
 * thx: https://www.geeksforgeeks.org/fgets-gets-c-language/
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define S_SIZE 2
#define B_SIZE 512

int main(void)
{
    FILE *fp = fopen(TEST_FILE, "r");
    if (fp == NULL) goto error;

    char s_buf[S_SIZE];
    fgets(s_buf, S_SIZE, fp);
    printf("%s\n", s_buf);

    char b_buf[B_SIZE];
    fgets(b_buf, B_SIZE, fp);
    printf("%s\n", b_buf);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
