#include "tips.h"

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
