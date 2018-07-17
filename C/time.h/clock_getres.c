/*
 * int clock_getres(clockid_t clk_id, struct timespec *res)
 *
 * clock_gettime(), clock_settime(), and clock_getres() return 0 for success,
 * or -1 for failure (in which case errno is set appropriately).
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NANOSEC 1e-9

int main(void)
{
    struct timespec t;

    if (clock_getres(CLOCK_REALTIME, &t) == -1) goto error;
    printf("CLOCK_REALTIME resolution: %.9f\n", t.tv_nsec * NANOSEC);

    if (clock_getres(CLOCK_MONOTONIC, &t) == -1) goto error;
    printf("CLOCK_MONOTONIC resolution: %.9f\n", t.tv_nsec * NANOSEC);

    if (clock_getres(CLOCK_PROCESS_CPUTIME_ID, &t) == -1) goto error;
    printf("CLOCK_PROCESS_CPUTIME_ID resolution: %.9f\n", t.tv_nsec * NANOSEC);

    if (clock_getres(CLOCK_THREAD_CPUTIME_ID, &t) == -1) goto error;
    printf("CLOCK_THREAD_CPUTIME_ID resolution: %.9f\n", t.tv_nsec * NANOSEC);
    
    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
