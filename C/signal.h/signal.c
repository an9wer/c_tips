/*
 * void (*signal(int sig, void (*func)(int)))(int)
 */

#include "tips.h"

void _signal_cb(int signo)
{
    printf("signal: %d\n", signo);
}

void tips_signal(void)
{
    TIPS_HEAD;

    int status;
    pid_t pid = fork();

    if (pid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    else if (pid == 0) {
        if (signal(SIGUSR1, _signal_cb) == SIG_ERR)
            TIPS_PERROR_AND_EXIT_FAILURE;

        if (kill(getpid(), SIGUSR1) == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;

        exit(EXIT_SUCCESS);
    } else {
        if (waitpid(pid, &status, 0) == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
    }
}
