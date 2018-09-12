#include "tips.h"
#include "tips_unistd.h"

int main(void)
{
    tips_getpgrp();
    tips_getpgid();
    tips_setpgid();

    tips_getlogin();

    tips_nice();

    tips_getuid();
    tips_getgid();
    tips_geteuid();
    tips_getegid();

    tips_setuid();
    tips_setgid();
    tips_seteuid();
    tips_setegid();
    tips_setreuid();
    tips_setregid();

    tips_execvp();
    tips_execl();

    tips_fork_zombie();
    tips_fork_orphan();

    return EXIT_SUCCESS;
}
