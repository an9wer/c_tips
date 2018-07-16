/*
 * int pthread_detach(pthread_t thread)
 *
 * On success, pthread_detach() returns 0; on error, it returns an error number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void * thread_func(void *arg)
{
    sleep(2);
    puts("gotcha");
}

int main(void)
{
    pthread_t tid;
    if (pthread_create(&tid, NULL, thread_func, NULL)) goto error;
    if (pthread_detach(tid)) goto error;
    sleep(3);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
