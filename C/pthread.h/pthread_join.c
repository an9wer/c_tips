/*
 * int pthread_join(pthread_t thread, void **retval)
 *
 * On success, pthread_join() returns 0; on error, it returns an error number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct foo {
    int a, b, c;
};

struct foo foo = {1, 2, 3};

void * thread_func(void * arg)
{
    /*
     * if uncommenting the following code, it may get different result,
     * for the stack of the struct `foo` might be destoryed after thread
     * returns or exits.
     */
    // struct foo foo = {1, 2, 3};
    foo.a = 11;
    foo.b = 22;
    foo.c = 33;
    pthread_exit((void *) &foo);
}

int main(void)
{
    printf("%ld\n", pthread_self());
    pthread_t tid;
    if (pthread_create(&tid, NULL, thread_func, NULL) != 0) goto error;

    struct foo *trt;
    if (pthread_join(tid, (void **) &trt) != 0) goto error;

    printf("trt->a: %d\n", trt->a);
    printf("trt->b: %d\n", trt->b);
    printf("trt->c: %d\n", trt->c);

    printf("foo.a: %d\n", foo.a);
    printf("foo.b: %d\n", foo.b);
    printf("foo.c: %d\n", foo.c);

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
