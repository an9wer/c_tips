#include "tips.h"

/*
 * pid_t getpid(void)
 * pid_t getppid(void)
 */

void tips_getpid(void)
{
    TIPS_HEAD;
    pid_t pid = getpid();
    printf("the id of current process: %d\n", pid);
}

void tips_getppid(void)
{
    TIPS_HEAD;
    pid_t ppid = getppid();
    printf("the id of parent of current process: %d\n", ppid);
}


/*
 * pid_t getpgrp(void)
 * pid_t getpgid(pid_t pid)
 * int setpgid(pid_t pid, pid_t pgid)
 */

void tips_getpgrp(void)
{
    TIPS_HEAD;

    pid_t pgid = getpgrp();
    printf("Current process group id is %d.\n", pgid);
}

void tips_getpgid(void)
{
    TIPS_HEAD;

    pid_t pgid = getpgid(1);

    if (pgid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    printf("'init' process group id is %d.\n", pgid);
}

void tips_setpgid(void)
{
    TIPS_HEAD;

    int status;
    pid_t pid = fork();

    if (pid == -1) 
        TIPS_PERROR_AND_EXIT_FAILURE;
    else if (pid == 0) {
        printf("the id of child process: %d\n", getpid());
        printf("the progress group id of child process: %d\n", getpgrp());

        if (setpgid(0, 0) == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
        printf("the group id of child process after setpgid: %d\n", getpgrp());

        exit(EXIT_SUCCESS);
    } else {
        if (waitpid(pid, &status, 0) == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
    }
}


/*
 * pid_t getsid(pid_t pid)
 * pid_t setsid(void)
 */

void tips_getsid(void)
{
    TIPS_HEAD;
    pid_t sid = getsid(0);

    if (sid == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("the session leader id of current process: %d\n", sid);
}

void tips_setsid(void)
{
    TIPS_HEAD;
    int status;
    pid_t sid;
    pid_t pid = fork();

    if (pid == -1) 
        TIPS_PERROR_AND_EXIT_FAILURE;
    else if (pid == 0) {
        printf("the id of child process: %d\n", getpid());

        sid = setsid();
        if (sid == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
        printf("the id of new session leader: %d\n", sid);

        exit(EXIT_SUCCESS);
    } else {
        if (waitpid(pid, &status, 0) == -1)
            TIPS_PERROR_AND_EXIT_FAILURE;
    }
}



/*
 * uid_t getuid(void)
 * gid_t getgid(void)
 */

void tips_getuid(void)
{
    TIPS_HEAD;
    uid_t uid = getuid();
    printf("real user id: %d\n", uid);
}

void tips_getgid(void)
{
    TIPS_HEAD;
    gid_t gid = getgid();
    printf("real group id: %d\n", gid);
}


/*
 * uid_t geteuid(void)
 * gid_t getegid(void)
 */

void tips_geteuid(void)
{
    TIPS_HEAD;
    uid_t euid = geteuid();
    printf("effective user id: %d\n", euid);
}

void tips_getegid(void)
{
    TIPS_HEAD;
    gid_t egid = getegid();
    printf("effective group id: %d\n", egid);
}


/*
 * int setuid(uid_t uid)
 * int setgid(gid_t gid)
 */

void tips_setuid(void)
{
    TIPS_HEAD;
    if (setuid(0) == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("real user id after setuid: %d\n", getuid());
    printf("effective user id after setuid: %d\n", geteuid());
}

void tips_setgid(void)
{
    TIPS_HEAD;
    if (setgid(0) == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("real group id after setgid: %d\n", getgid());
    printf("effective group id after setgid: %d\n", getegid());
}


/*
 * int seteuid(uid_t uid)
 * int setegid(gid_t gid)
 */

void tips_seteuid(void)
{
    TIPS_HEAD;
    if (seteuid(0) == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("real user id after seteuid: %d\n", getuid());
    printf("effective user id after seteuid: %d\n", geteuid());
}

void tips_setegid(void)
{
    TIPS_HEAD;
    if (setegid(0) == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("real group id after setegid: %d\n", getgid());
    printf("effective group id after setegid: %d\n", getegid());
}


/*
 * int setreuid(uid_t ruid, uid_t euid)
 * int setregid(gid_t rgid, gid_t egid)
 */

void tips_setreuid(void)
{
    TIPS_HEAD;
    if (setreuid(0, 0) == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("real user id after setreuid: %d\n", getuid());
    printf("effective user id after setreuid: %d\n", geteuid());
}

void tips_setregid(void)
{
    TIPS_HEAD;
    if (setregid(0, 0) == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;
    printf("real group id after setregid: %d\n", getgid());
    printf("effective group id after setregid: %d\n", getegid());
}
