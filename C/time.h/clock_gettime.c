/*
 * int clock_gettime(clockid_t clk_id, struct timespec *tp)
 *
 * clock_gettime(), clock_settime(), and clock_getres() return 0 for success,
 * or -1 for failure (in which case errno is set appropriately).
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    struct timespec t;

    if (clock_gettime(CLOCK_REALTIME, &t) == -1) goto error;
    printf("seconds since January 1, 1970: %ld.%ld\n", t.tv_sec, t.tv_nsec);

    if (clock_gettime(CLOCK_MONOTONIC, &t) == -1) goto error;
    printf("seconds since system starting: %ld.%ld\n", t.tv_sec, t.tv_nsec);

    if (clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &t) == -1) goto error;
    printf("seconds since process calling: %ld.%ld\n", t.tv_sec, t.tv_nsec);

    if (clock_gettime(CLOCK_THREAD_CPUTIME_ID, &t) == -1) goto error;
    printf("seconds since thread calling : %ld.%ld\n", t.tv_sec, t.tv_nsec);
    
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
