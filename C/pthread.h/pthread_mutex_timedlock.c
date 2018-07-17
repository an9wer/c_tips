/*
 * int pthread_mutex_timedlock(pthread_mutex_t *restrict mutex, const struct timespec *restrict abstime)
 *
 * If successful, the pthread_mutex_timedlock() function shall return zero;
 * otherwise, an error number shall be returned to indicate the error.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

int main(void)
{
    pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
    pthread_mutex_lock(&lock);

    struct timespec t;
    clock_gettime(CLOCK_REALTIME, &t);
    t.tv_sec += 10;

    pthread_mutex_timedlock(&lock, &t);
    printf("timeout\n");

    return EXIT_SUCCESS;
}


