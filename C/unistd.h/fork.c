/*
 * pid_t fork(void)
 */

#include <stdio.h>
#include <unistd.h>
#include "tips.h"

void tips_fork(void)
{
    /*
     * The first content of printf will be flashed before executing fork because
     * stdout is line buffered. For the same reason the second content of printf
     * whithout '\n' will be bufferd, so we can get it after executing fork.
     */
    printf("This is only in parent process.\n");
    printf("This is in both parent process and child process.");

    pid_t pid = fork();

    if (pid == -1) 
        TIPS_PERROR_AND_EXIT_F;
    else if (pid == 0)
        printf("(child process)\n");
    else
        printf("(parent process)\n");
}
