/*
 * size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
 */

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "main.h"

int main(void)
{
    char str[] = "something\n";

    FILE *fp = fopen(TEST_FILE, "w");
    fwrite(str, sizeof (char), strlen(str), fp);

    fclose(fp);
    return EXIT_SUCCESS;
}
