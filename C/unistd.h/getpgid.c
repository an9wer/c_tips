/*
 * pid_t getpgid(pid_t pid)
 */

#include "tips.h"

void tips_getpgid(void)
{
    TIPS_HEAD;

    pid_t pgid = getpgid(0);

    if (pgid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    printf("Current process group id is %d.\n", pgid);
}
