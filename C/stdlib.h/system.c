/*
 * int system(const char *command)
 */

#include "tips.h"

void tips_system(void)
{
    TIPS_HEAD;

    int status = system("date");
    if (status == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    else if (status == 127)
        TIPS_PERROR_AND_EXIT_FAILURE;
    else
        printf("status is %d\n", status);
}

