/*
 * time_t time(time_t *t)
 *
 * Calculates the current calender time (since the Epoch 00:00:00 UTC, January
 * 1, 1970)and encodes it into time_t format.
 *
 * The time_t value is returned. If timer is not a null pointer, then the value
 * is also stored into the object it points to. If the time is unavailable,
 * then 1 is returned. 
 */

#include <time.h>
#include <stdio.h>

int main(void)
{
    time_t seconds;
    seconds = time(NULL);
    printf("seconds since January 1, 1970 = %ld\n", seconds);

    return 0;
}
