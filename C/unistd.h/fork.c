/*
 * pid_t fork(void)
 *
 * Q: zombie process and orphan process
 * thx: https://www.geeksforgeeks.org/zombie-and-orphan-processes-in-c/
 */

#include "tips.h"

void tips_fork_zombie(void)
{
    TIPS_HEAD;

    /*
     * The first content of printf will be flushed before executing fork because
     * stdout is line buffered. For the same reason the second content of printf
     * whithout '\n' will be bufferd, so we can get it after executing fork.
     */
    printf("This is only in parent process.\n");
    printf("This is in both parent process and child process.");

    pid_t pid = fork();

    if (pid == -1) 
        TIPS_PERROR_AND_EXIT_FAILURE;
    else if (pid == 0) {
        printf("(child process)\n");
        exit(EXIT_SUCCESS);
    } else {
        sleep(10);  // use "ps aux | grep 'Z'" command to check zombie process
        printf("(parent process)\n");
    }
    fflush(stdout); // ensure all buffer is flushed
}

void tips_fork_orphan(void)
{
    TIPS_HEAD;

    pid_t pid = fork();

    if (pid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    else if (pid == 0) {
        sleep(10);
        printf("child process\n");
    }
    else {
        printf("parent process\n");
        exit(EXIT_SUCCESS);
    }
}
