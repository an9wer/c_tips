/*
 * int open(const char *path, int oflag, ...)
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int fd;

    /* normal */
    fd = open("/dev/tty", O_RDWR);
    if (fd == -1) goto error;
    else close(fd);

    /* open in nonblock mode */
    fd = open("/dev/tty", O_RDWR | O_NONBLOCK);
    if (fd == -1) goto error;
    else close(fd);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
