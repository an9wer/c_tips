/*
 * thx: https://stackoverflow.com/a/24941963
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%ld\n", sizeof(1));             // 4
    printf("%ld\n", sizeof("a"));           // 2
    printf("%ld\n", sizeof(0 ? 1 : "a"));   // expect to be 2 but 8 here
    printf("%ld\n", sizeof(1 ? 1 : "a"));   // expect to be 4 but 8 here

    printf("%ld\n", sizeof((char *) "a"));  // expect to be 2 but 8 here

    return EXIT_SUCCESS;
}
