/*
 * int unlink(const char *path)
 *
 * Upon successful completion, the function shall return 0. Otherwise, the
 * function shall return −1 and set errno to indicate the error. If −1 is
 * returned, the named file shall not be changed.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int main(void)
{
    if (unlink(TEST_LINK)) goto error;
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
