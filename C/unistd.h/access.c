/*
 * int access(const char *path, int amode)
 *
 * Upon successful completion, these functions shall return 0. Otherwise, these
 * functions shall return −1 and set errno to indicate the error.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    char *file = "/etc/passwd";
    printf("%s: %s\n", file, access(file, F_OK) ? "not F_OK" : "F_OK");
    printf("%s: %s\n", file, access(file, R_OK) ? "not R_OK" : "R_OK");
    printf("%s: %s\n", file, access(file, W_OK) ? "not W_OK" : "W_OK");
    printf("%s: %s\n", file, access(file, X_OK) ? "not X_OK" : "X_OK");
    printf("%s: %s\n", file, access(file, R_OK || W_OK) ? "not R_OK || W_OK" : "R_OK || W_OK");

    return EXIT_SUCCESS;
}
