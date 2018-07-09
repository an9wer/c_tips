/*
 * thx: https://www.geeksforgeeks.org/g-fact-5/
 * thx: https://denniskubes.com/2012/08/19/pointers-and-arrays-in-c/
 */

#include <stdlib.h>

int main(void)
{
    // initialize an array of ints
    int numbers[5] = {1,2,3,4,5};
    int numbers2[5] = {6,7,8,9,0};
    int *ptr = numbers2;
     
    /* the following code won't compile */
    // numbers = numbers2;
    // numbers = &numbers2;
    // numbers = ptr;

    return EXIT_SUCCESS;
}
