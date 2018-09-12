/*
 * pid_t getpgrp(void)
 */

#include "tips.h"

void tips_getpgrp(void)
{
    TIPS_HEAD;

    pid_t pgid = getpgrp();
    printf("Current process group id is %d.\n", pgid);
}
