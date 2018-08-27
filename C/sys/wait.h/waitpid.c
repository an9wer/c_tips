/*
 * pid_t waitpid(pid_t pid, int *stat_loc, int options)
 */

#include "tips.h"

void tips_waitpid(void)
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
        w_pid = waitpid(pid, &status, 0);

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

void tips_waitpid_WNOHANG(void)
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
        do {
            w_pid = waitpid(pid, &status, WNOHANG);
            if (w_pid == -1)
                TIPS_PERROR_AND_EXIT_FAILURE;
            else if (w_pid == pid) {
                if (WIFEXITED(status))
                    printf("parent process: get status from child process "
                           "which is %d\n", WEXITSTATUS(status));
                else
                    TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");
            }
        } while (w_pid == 0);
    }
}
