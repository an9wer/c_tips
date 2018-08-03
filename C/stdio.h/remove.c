/*
 * int remove(const char *pathname)
 *
 * On success, zero is returned. On error, -1 is returned, and errno is set
 * appropriately.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    if (remove(TEST_FILE)) goto error;
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
