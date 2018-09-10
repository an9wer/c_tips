/*
 * int execl(const char *path, const char *arg, ..., (char  *) NULL)
 * int execvp(const char *file, char *const argv[])
 */

#include "tips.h"

int _tips_check_status(int status) {
    if (WIFEXITED(status))
        printf("parent process: get status from child process "
               "which is %d\n", WEXITSTATUS(status));
    else if (WIFSIGNALED(status))
        printf("parent process: get signal from child process "
               "which is %d\n", WTERMSIG(status));
    else
        return -1;

    return status;
}

void tips_execvp(void)
{
    TIPS_HEAD;

    int status;
    pid_t w_pid;
    pid_t pid = fork();
    char *args[] = {"/bin/bash", "-c", "echo 'child process.'", NULL};

    if (pid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    else if (pid == 0)
        execvp(args[0], args);

    else {
        w_pid = waitpid(pid, &status, 0);
        if (w_pid == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
        else if (w_pid == pid) {
            if (_tips_check_status(status) == -1)
                TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");
        } else
            TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");
    }
}

void tips_execl(void)
{
    TIPS_HEAD;

    int status;
    pid_t w_pid;
    pid_t pid = fork();

    if (pid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    else if (pid == 0)
        execl("/bin/bash", "/bin/bash", "-c", "echo 'child process'", (char *)0);

    else {
        w_pid = waitpid(pid, &status, 0);
        if (w_pid == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
        else if (w_pid == pid) {
            if (_tips_check_status(status) == -1)
                TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");
        } else
            TIPS_PRINTE_AND_EXIT_FAILURE("parent process: oops");
    }
}
