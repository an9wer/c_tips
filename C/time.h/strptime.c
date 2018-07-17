/*
 * char *strptime(const char *s, const char *format, struct tm *tm)
 *
 * The return value of the function is a pointer to the first character not
 * processed in this function call. In case the input string contains more
 * characters than required by the format string, the return value points right
 * after the last consumed input character. In case the whole input string is
 * consumed, the return value points to the null byte at the end of the string.
 * If strptime() fails to match all of the format string and therefore an error
 * occurred, the function returns NULL.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 128
#define FORMAT "%r, %a %b %d, %Y"

int main(void)
{
    
    time_t t = time(NULL);
    struct tm *tmp = localtime(&t);
    char str[SIZE];
    if (strftime(str, SIZE, FORMAT, tmp) == 0) goto error;
    if (strptime(str, FORMAT, tmp) == NULL) goto error;
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
