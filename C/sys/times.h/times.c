/*
 *  clock_t times(struct tms *buffer)
 */

#include "tips.h"

void tips_times(void)
{
    struct tms tms_start, tms_end;
    clock_t start, end;

    start = times(&tms_start);
    if (start == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    // sleep in child process
    int status = system("sleep 1");
    if (status == -1 || status == 127)
        TIPS_PERROR_AND_EXIT_FAILURE;

    // for loop in parent process
    for (int i = 0; i < 10000000; i++);

    end = times(&tms_end);
    if (end == -1)
        TIPS_PERROR_AND_EXIT_FAILURE;

    long clktck = sysconf(_SC_CLK_TCK);

    printf("real: %7.2f\n", (end - start) / (double) clktck);
    printf("user: %7.2f\n", (tms_end.tms_utime - tms_start.tms_utime) / (double) clktck);
    printf("sys : %7.2f\n", (tms_end.tms_stime - tms_start.tms_stime) / (double) clktck);
    printf("child user: %7.2f\n", (tms_end.tms_cutime - tms_start.tms_cutime) / (double) clktck);
    printf("child sys : %7.2f\n", (tms_end.tms_cstime - tms_start.tms_cstime) / (double) clktck);
}
