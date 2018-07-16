/*
 * int pthread_mutex_init(pthread_mutex_t *restrict mutex, const pthread_mutexattr_t *restrict attr)
 * int pthread_mutex_destroy(pthread_mutex_t *mutex)
 *
 * If successful, the pthread_mutex_destroy() and pthread_mutex_init()
 * functions shall return zero; otherwise, an error number shall be returned to
 * indicate the error.
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int count = 0;
pthread_mutex_t lock;

void * thread_func(void * arg)
{
    /*
     * We cannot use the following code to get lock, because in every thread
     * the value of lock is same but the value of lock address (plock here)
     * is different.
     */
    // pthread_mutex_t lock = * (pthread_mutex_t *) arg;
    // pthread_mutex_t plock = &lock;   // it's different in every thread

    /* Instead, we use this way to get lock address */
    pthread_mutex_t * plock = (pthread_mutex_t *) arg;
    pthread_mutex_lock(plock);

    for (int i = 0; i < 1000; i++)
        count += 1;

    pthread_mutex_unlock(plock);

    return (void *) 0;
}

int main(void)
{
    if (pthread_mutex_init(&lock, NULL)) goto error;

    pthread_t tid1, tid2;
    if (pthread_create(&tid1, NULL, thread_func, &lock)) goto error;
    if (pthread_create(&tid2, NULL, thread_func, &lock)) goto error;

    if (pthread_join(tid1, NULL)) goto error;
    if (pthread_join(tid2, NULL)) goto error;

    if (pthread_mutex_destroy(&lock)) goto error;

    printf("%d\n", count);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
