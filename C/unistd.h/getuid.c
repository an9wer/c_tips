/*
 * uid_t getuid(void)
 *
 * returns the real user ID of the calling process
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    uid_t id = getuid();
    printf("%d\n", id);

    return EXIT_SUCCESS;
}
