/*
 * size_t strftime(char *s, size_t max, const char *format, const struct tm *tm)
 *
 * Provided that the result string, including the terminating null byte, does
 * not exceed max bytes, strftime() returns the number of bytes (excluding the
 * terminating null byte) placed in the array s. If the length of the result
 * string (including the terminating null byte) would exceed max bytes, then
 * strftime() returns 0, and the contents of the array are undefined.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE  128

int main(void)
{
    struct tm t = {
        .tm_sec = 10,
        .tm_min = 10,
        .tm_hour = 10,
        .tm_mday = 10,
        .tm_mon = 10,
        .tm_year = 10,
        .tm_wday = 1,
        .tm_yday = 10,
        .tm_isdst = 0,
    };
    char str[SIZE];
    if (strftime(str, SIZE, "%r, %a %b %d, %Y", &t) == 0) goto error;
    puts(str);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
