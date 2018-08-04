/*
 * char *ttyname(int fd)
 *
 * The function ttyname() returns a pointer to a pathname on success. On error,
 * NULL is returned, and errno is set appropriately.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{

    char *name = ttyname(STDIN_FILENO);
    if (!name) goto error;
    puts(name);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
