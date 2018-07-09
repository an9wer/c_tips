/*
 * size_t strlen(const char *s);
 *
 * The strlen() function returns the number of characters in the string pointed
 * to by s.
 *
 * Q: sizeof vs strlen
 * thx: https://www.geeksforgeeks.org/difference-strlen-sizeof-string-c-reviewed/
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(void)
{
    char str[] = TEST_STRING;
    printf("%zd\n", strlen(str));

    return EXIT_SUCCESS;
}
