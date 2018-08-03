/*
 * int link(const char *path1, const char *path2)
 *
 * Upon successful completion, the function shall return 0. Otherwise, the
 * function shall return −1 and set errno to indicate the error.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int main(void)
{
    if (link(TEST_FILE, TEST_LINK)) goto error;
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
