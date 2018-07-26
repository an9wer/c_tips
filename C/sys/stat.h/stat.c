/*
 * int stat(const char *restrict path, struct stat *restrict buf)
 *
 * On success, zero is returned. On error, -1 is returned, and errno is set
 * appropriately.
 */

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

static const char *files[] = {
    "/etc/passwd",      // regular
    "/etc",             // directory
    "/dev/log",         // socket
    "/dev/tty",         // character special
    "/dev/sr0",         // block special
    "/dev/cdrom",       // symbolic link
};

int main(void)
{
    char *type;
    struct stat buf;
    
    for (int i = 0; i < sizeof(files) / sizeof(files[0]); i++) {
        if (stat(files[i], &buf) == -1) {
            perror("Error");
            continue;
        }
        if (S_ISREG(buf.st_mode))
            type = "regular";
        else if (S_ISDIR(buf.st_mode))
            type = "direcotry";
        else if (S_ISCHR(buf.st_mode))
            type = "character special";
        else if (S_ISBLK(buf.st_mode))
            type = "block special";
        else if (S_ISFIFO(buf.st_mode))
            type = "fifo";
        else if (S_ISLNK(buf.st_mode))
            type = "symbolic link";
        else if (S_ISSOCK(buf.st_mode))
            type = "scoket";
        else
            type = "** unknown **";
        printf("%s: %s\n", files[i], type);
    }

    return EXIT_SUCCESS;
}
