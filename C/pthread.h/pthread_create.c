/*
 * int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg)
 *
 * The new thread terminates in one of the following ways: 
 * 
 * 1.   It calls pthread_exit, specifying an exit status value that is
 * available to another thread in the same process that calls pthread_join.
 *
 * 2.   It returns from start_routine(). This is equivalent to calling
 * pthread_exit with the value supplied in the return statement.
 *
 * 3.   It is canceled (see pthread_cancel(3)).
 *
 * 4.   Any of the threads in the process calls exit(3), or the main thread
 * performs a return from main(). This causes the termination of all threads in
 * the process.
 *
 * On success, pthread_create() returns 0; on error, it returns an error
 * number, and the contents of *thread are undefined.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void * thread_func(void *arg)
{
    printf("thread id: %lu\n", (unsigned long)pthread_self());
    return (void *) 0;
}

int main(void)
{
    pthread_t tid;
    if (pthread_create(&tid, NULL, thread_func, NULL)) goto error;
    sleep(1);
    return EXIT_SUCCESS;
error:
    perror("Error");
    return EXIT_FAILURE;
}
