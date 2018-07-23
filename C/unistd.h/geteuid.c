/*
 * uid_t geteuid(void)
 *
 *  returns the effective user ID of the calling process.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    uid_t eid = geteuid();
    printf("%d\n", eid);

    return EXIT_SUCCESS;
}

