/*
 * thx: https://www.geeksforgeeks.org/whats-difference-between-char-s-and-char-s-in-c/
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[] = "an9wer";
    printf("array of char         : %s\n", str);
    printf("sizeof (array of char): %zd\n", sizeof(str));
    printf("strlen (array of char): %zd\n", strlen(str));
    str[0] = 'A';       // ok

    char *spt = "an9wer";
    printf("pointer to string         : %s\n", spt);
    printf("sizeof (pointer to string): %zd\n", sizeof(spt));
    printf("strlen (pointer to string): %zd\n", strlen(spt));
    spt[0] = 'A';       // error

    return EXIT_SUCCESS;
}
