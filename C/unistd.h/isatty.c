/*
 * int isatty(int fd)
 *
 * isatty() returns 1 if fd is an open file descriptor referring to a terminal;
 * otherwise 0 is returned, and errno is set to indicate the error.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    if (isatty(STDIN_FILENO)) printf("%s\n", "yes");
    else printf("%s\n", "no");
    return EXIT_SUCCESS;

}
