/*
 * int getpriority(int which, id_t who)
 * int setpriority(int which, id_t who, int value)
 */

#include "tips.h"

void tips_priority(void)
{
    TIPS_HEAD;

    int nice;

    TIPS_RESET_ERRNO;
    nice = getpriority(PRIO_PROCESS, 0);
    if (nice == -1 && errno != ENOENT)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("The initial nice of current process is %d\n", nice);

    if (setpriority(PRIO_PROCESS, 0, -1) == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    TIPS_RESET_ERRNO;
    nice = getpriority(PRIO_PROCESS, 0);
    if (nice == -1 && errno != ENOENT)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("The nice of current process after calling setpriority function is %d\n", nice);
}
