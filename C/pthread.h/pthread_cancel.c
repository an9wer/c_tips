/*
 * int pthread_cancel(pthread_t thread)
 *
 * When a cancellation requested is acted on, the following steps occur for
 * thread (in this order):
 *
 * 1.   Cancellation clean-up handlers are popped (in the reverse of the order
 * in which they were pushed) and called. (See pthread_cleanup_push().)

 * 2.   Thread-specific data destructors are called, in an unspecified order.
 * (See pthread_key_create().)
 *
 * 3.   The thread is terminated. (See pthread_exit().)
 *
 * On success, pthread_cancel() returns 0; on error, it returns a nonzero error
 * number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void cleanup(void *arg)
{
    printf("%s\n", (char *) arg);
}

void * thread_func1(void *arg)
{
    pthread_cleanup_push(cleanup, "thread_func1 cancelled");
    while(1) {
        puts("thread_func1 sleep 1s");
        sleep(1);
    }
    pthread_cleanup_pop(0);
}

void * thread_func2(void *arg)
{
    pthread_t tid1 = *(pthread_t *)arg;

    puts("thread_func2 sleep 1s");
    sleep(1);
    puts("thread_func2 sleep 1s");
    sleep(1);
    pthread_cancel(tid1);
    puts("thread_func2 call pthread_cancel");
    return (void *) NULL;
}

int main(void)
{
    pthread_t tid1, tid2;
    if (pthread_create(&tid1, NULL, thread_func1, NULL)) goto error;
    if (pthread_create(&tid2, NULL, thread_func2, (void *) &tid1)) goto error;

    if (pthread_join(tid1, NULL)) goto error;
    if (pthread_join(tid2, NULL)) goto error;

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
