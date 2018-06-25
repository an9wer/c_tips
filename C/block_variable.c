/*
 * the variable i defined in the block statement representing the for loop
 * would be destroyed as soon as the loop completed. 
 */

#include <stdio.h>

int main(void)
{
    { int j = 1; };
    for (int i = 1; i < 10; i++);
    printf("we cannot get vaiable 'j' and 'i' here\n");

    return 0;
}
