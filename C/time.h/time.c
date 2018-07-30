/*
 * time_t time(time_t *t)
 *
 * Calculates the current calender time (since the Epoch 00:00:00 UTC, January
 * 1, 1970)and encodes it into time_t format.
 *
 * On success, the value of time in seconds since the Epoch is returned. On
 * error, ((time_t) -1) is returned, and errno is set appropriately.
 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    time_t seconds = time(NULL);
    if (seconds == -1) goto error;

    printf("seconds since January 1, 1970 = %ld\n", seconds);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
