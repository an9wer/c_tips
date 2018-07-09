/*
 * thx: https://www.geeksforgeeks.org/pointer-array-array-pointer/
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5];
    int *pt1, (*pt2)[5];

    pt1 = arr;      // point to 0th element of array (same as: pt1 = &arr[0])
    pt2 = &arr;     // point to the whole array

    printf("pt1 : %p, pt2 : %p\n", pt1, pt2);
    pt1++, pt2++;
    printf("pt1++ : %p, pt2++ : %p\n", pt1, pt2);

    return EXIT_SUCCESS;
}
