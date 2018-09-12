/*
 * char *getlogin(void)
 */

#include "tips.h"

void tips_getlogin(void)
{
    TIPS_HEAD;

    char *name = getlogin();
    printf("login name: %s\n", name);
}
