/*
 * void pthread_exit(void *retval)
 *
 * This function does not return to the caller.
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * thread_func(void *arg)
{
    pthread_exit((void *) 0);
    return (void *) 0;

    pthread_exit(NULL);
    return NULL;
}

int main(void)
{
    pthread_t tid;
    if (pthread_create(&tid, NULL, thread_func, NULL) !=0 ) goto error;

    void *trt;
    if (pthread_join(tid, &trt) != 0) goto error;

    printf("thread exit code: %ld\n", (long) trt);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
