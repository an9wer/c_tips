/*
 * thx: https://www.geeksforgeeks.org/whats-difference-between-char-s-and-char-s-in-c/
 * thx: https://stackoverflow.com/questions/1335786/c-differences-between-char-pointer-and-array
 * thx: my wiki
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(void)
{
    char str[] = TEST_STRING;
    printf("array of char         : %s\n", str);
    printf("sizeof (array of char): %zd\n", sizeof(str));
    printf("strlen (array of char): %zd\n", strlen(str));
    str[0] = 'A';       // ok

    char *spt = TEST_STRING;
    printf("pointer to string         : %s\n", spt);
    printf("sizeof (pointer to string): %zd\n", sizeof(spt));
    printf("strlen (pointer to string): %zd\n", strlen(spt));
    // spt[0] = 'A';    // error, cannot compile this

    printf("TEST_STRING address: %p\n", TEST_STRING);
    printf("        spt address: %p\n", spt);
    printf("        str address: %p\n", str);

    return EXIT_SUCCESS;
}
