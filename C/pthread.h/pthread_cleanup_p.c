/*
 * void pthread_cleanup_push(void (*routine)(void *), void *arg)
 * void pthread_cleanup_pop(int execute)
 *
 * pthread_cleanup_push() and pthread_cleanup_pop() to be implemented as macros
 * that expand to text containing '{' and '}', respectively. For this reason,
 * the caller must ensure that calls to these functions are paired within the
 * same function, and at the same lexical nesting level.
 *
 * A cancellation clean-up handler is popped from the stack and executed in the
 * following circumstances:
 *
 * 1.   When a thread is canceled, all of the stacked clean-up handlers are
 * popped and executed in the reverse of the order in which they were pushed
 * onto the stack.
 *
 * 2.   When a thread terminates by calling pthread_exit(), all clean-up
 * handlers are executed as described in the preceding point. (Clean-up
 * handlers are not called if the thread terminates by performing a return from
 * the thread start function.)
 *
 * 3.   When a thread calls pthread_cleanup_pop() with a nonzero execute
 * argument, the top-most clean-up handler is popped and executed.
 *
 * This function do not return a value.
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void cleanup(void *arg)
{
    printf("Cleanup: %s\n", (char *) arg);
}

void * thread_func(void *arg)
{
    pthread_cleanup_push(cleanup, "by calling pthread_cleanup_pop() with a nonzero execute argument");
    pthread_cleanup_pop(1);

    pthread_cleanup_push(cleanup, "by calling pthread_exit()");
    pthread_exit((void *) 0);
    pthread_cleanup_pop(0);
}

int main(void)
{
    pthread_t tid;
    if (pthread_create(&tid, NULL, thread_func, NULL)) goto error;

    void *trt;
    if (pthread_join(tid, &trt)) goto error;

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
