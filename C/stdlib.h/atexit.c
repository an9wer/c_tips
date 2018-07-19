/*
 * int atexit(void (*function)(void))
 *
 * The atexit() function returns the value 0 if successful; otherwise it
 * returns a nonzero value.
 */

#include <stdio.h>
#include <stdlib.h>

void exit_callback1(void)
{
    puts("gotcha 1");
}

void exit_callback2(void)
{
    puts("gotcha 2");
}

int main(void)
{
    
    if (atexit(exit_callback1)) goto error;
    if (atexit(exit_callback2)) goto error;

    return EXIT_SUCCESS;

error:
    perror("Error");
    return EXIT_FAILURE;
}
