/*
 * int nice(int incr)
 */

#include "tips.h"

void tips_nice(void)
{
    TIPS_HEAD;

    int priority;
    long nzero = sysconf(_SC_NZERO);

    TIPS_RESET_ERRNO;
    priority = nice(nzero);
    if (priority == -1 && errno != ENOENT)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("The nice of current process after calling nice() function is %d\n", priority);
}
