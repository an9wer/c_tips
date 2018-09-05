/*
 * int system(const char *command)
 */

#include "tips.h"

void tips_system(void)
{
    TIPS_HEAD;

    int status;
    char *cmds[] = {"date", "data"};

    for (int i = 0; i < sizeof(cmds) / sizeof(char *); i++) {
        printf("=== call system() to execute '%s' ===\n", cmds[i]);
        status = system(cmds[i]);
        if (status == -1)
            // fork fails
            TIPS_PERROR_AND_EXIT_FAILURE;
        else if (status == 127)
            // exec fails
            TIPS_PERROR_AND_EXIT_FAILURE;
        else
            if (WIFEXITED(status))
                printf("get status from system which is %d\n",
                       WEXITSTATUS(status));
            else
                TIPS_PRINTE_AND_EXIT_FAILURE("oops!");
    }
}
