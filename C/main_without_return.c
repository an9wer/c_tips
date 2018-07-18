/*
 * main function doesn't return any value, in C90 (compile with '-std=c90'
 * option), the exit code is random, but in C99 (compile with '-std=c99'
 * option), it's 0.
 */

#include <stdio.h>

int main(void)
{
    puts("whatever");
}
