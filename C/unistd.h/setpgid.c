/*
 * int setpgid(pid_t pid, pid_t pgid)
 */

#include "tips.h"

void tips_setpgid(void)
{
    TIPS_HEAD;

    pid_t pgid;

    pgid = getpgrp();
    printf("Current process group id is %d.\n", pgid);

    if (setpgid(0, 10000) == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    pgid = getpgrp();
    printf("Current process group id after setpgid is %d.\n", pgid);
}
