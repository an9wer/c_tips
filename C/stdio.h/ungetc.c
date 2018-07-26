/*
 * int ungetc(int c, FILE *stream)
 *
 * thx: https://c-for-dummies.com/blog/?p=1710
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    FILE *fp = fopen(TEST_FILE, "r");
    if (fp == NULL) goto error;

    if (getc(fp) != EOF) {
        ungetc('3', fp);
        ungetc('2', fp);
        ungetc('1', fp);
    }

    /*
     * if you subsequently use a file position indicator manipulation
     * function(fseek(), fsetpos(), or rewind()) the characters inserted into
     * the stream are discarded.
     */
     // fseek(fp, 0L, SEEK_SET);

    char c;
    while ((c = getc(fp)) != EOF) {
        printf("%c", c);
    }
    printf("\n");

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
