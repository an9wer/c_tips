/*
 * unsigned alarm(unsigned seconds)
 */

#include "tips.h"

void _signal_sigalrm_cb(int signo)
{
    printf("SIGALRM: %d\n", signo);
}

void tips_alarm(void)
{
    TIPS_HEAD;

    if (signal(SIGALRM, _signal_sigalrm_cb) == SIG_ERR)
        TIPS_PERROR_AND_EXIT_FAILURE;
    alarm(1);
    pause();
}
