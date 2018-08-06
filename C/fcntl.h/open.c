/*
 * int open(const char *path, int oflag, ...)
 *
 * Upon successful completion, the function shall open the file and return a
 * non-negative integer representing the lowest numbered unused file
 * descriptor. Otherwise, the function shall return −1 and set errno to
 * indicate the error. If −1 is returned, no files shall be created or
 * modified.
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int fd = open("/dev/tty", O_RDWR);
    if (fd == -1) goto error;

    close(fd);
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
