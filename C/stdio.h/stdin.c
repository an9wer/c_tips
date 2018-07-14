/*
 *  extern FILE *stdin;
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t len = 10;
    char * str = (char *) malloc(len);
    size_t rt = fread(str, sizeof (char), len, stdin);

    puts(str);

    return EXIT_SUCCESS;
}
