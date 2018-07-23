/*
 * struct passwd *getpwuid(uid_t uid)
 *
 * The getpwnam() and getpwuid() functions return a pointer to a passwd struc‐
 * ture, or NULL if the matching entry is not found or an error occurs. If an
 * error occurs, errno is set appropriately. If one wants to check errno after
 * the call, it should be set to zero before the call.
 *
 * The return value may point to a static area, and may be overwritten by
 * subsequent calls to getpwent(), getpwnam(), or getpwuid(). (Do not pass the
 * returned pointer to free().) 
 */

#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    struct passwd *pw = getpwuid(getuid());
    if (!pw) goto error;
    printf("pw_name: %s\n", pw->pw_name);
    printf("pw_passwd: %s\n", pw->pw_passwd);
    printf("pw_uid: %d\n", pw->pw_uid);
    printf("pw_gid: %d\n", pw->pw_gid);
    printf("pw_gecos: %s\n", pw->pw_gecos);
    printf("pw_dir: %s\n", pw->pw_dir);
    printf("pw_shell: %s\n", pw->pw_shell);
    //printf("pw_class: %s\n", pw->pw_class);
    //printf("pw_change: %ld\n", pw->pw_change);
    //printf("pw_expire: %ld\n", pw->pw_expire);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
