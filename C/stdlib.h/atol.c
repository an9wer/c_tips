/*
 * long atol(const char *nptr)
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    printf("%ld\n", atol(TEST_STRING));
    printf("%ld\n", atol("123456789\n"));
    printf("%ld\n", atol("123456789\n0"));
    printf("%ld\n", atol("123456789abc"));
    printf("%ld\n", atol("123456789abc0"));
    return EXIT_SUCCESS;
}
