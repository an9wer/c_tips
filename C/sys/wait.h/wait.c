/*
 * pid_t wait(int *stat_loc)
 */

#include "tips.h"

void tips_wait_success(void)
{
    TIPS_HEAD;

    int status;
    pid_t w_pid;
    pid_t pid = fork();

    if (pid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    else if (pid == 0) {
        printf("child process\n");
        exit(EXIT_SUCCESS);

    } else {
        w_pid = wait(&status);
        if (w_pid == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
        else if (w_pid == pid) {
            if (WIFEXITED(status))
                printf("parent process: get status from child process "
                       "which is %d\n", WEXITSTATUS(status));
            else
                TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");
        } else
            TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");
    }
}

void tips_wait_abort(void)
{
    TIPS_HEAD;

    int status;
    pid_t w_pid;
    pid_t pid = fork();

    if (pid == 1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    else if (pid == 0) {
        printf("child process\n");
        abort();

    } else {
        w_pid = wait(&status);
        if (w_pid == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
        else if (w_pid == pid) {
            if (WIFSIGNALED(status))
                printf("parent process: get signal from child process "
                       "which is %d\n", WTERMSIG(status));
            else
                TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");
        } else
            TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");

    }
}
