/*
 * struct tm *localtime(const time_t *timep)
 *
 * On success, gmtime() and localtime() return a pointer to a struct tm.
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define SIZE 128

int main(void)
{
    time_t t = time(NULL);
    struct tm *tmp = localtime(&t);
    char str[SIZE];

    if (strftime(str, SIZE, "%r, %a %b %d, %Y", tmp) == 0) goto error;
    puts(str);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
