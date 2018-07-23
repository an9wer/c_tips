/*
 * struct passwd *getpwent(void)
 * void setpwent(void)
 * void endpwent(void)
 *
 * The getpwent() function returns a pointer to a passwd structure, or NULL if
 * there are no more entries or an error occurred. If an error occurs, errno is
 * set appropriately. If one wants to check errno after the call, it should be
 * set to zero before the call. 
 *
 * The return value may point to a static area, and may be overwritten by
 * subsequent calls to getpwent(), getpwnam(), or getpwuid(). (Do not pass the
 * returned pointer to free().)
 */

#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct passwd *pw;

    setpwent();
    while ((pw = getpwent()) != NULL)
        printf("%s\n", pw->pw_name);
    endpwent();

    return EXIT_SUCCESS;
}
