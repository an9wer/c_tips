/*
 * int raise(int sig)
 */

#include "tips.h"

void tips_raise(void)
{
    TIPS_HEAD;

    int status;
    pid_t pid = fork();

    if (pid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    else if (pid == 0) {
        if (raise(SIGKILL) == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
    } else {
        if (waitpid(pid, &status, 0) == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
    }
}
