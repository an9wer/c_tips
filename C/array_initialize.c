/*
 * initialization of array belong to static storage class (static variable with
 * block scope, external linkage and internal linkage):
 *
 *      If you don't initialize an array, its elements will be set to 0.
 *
 * initialization of array belong to automatic storage class:
 *
 *      If you don’t initialize an array at all, its elements, like
 *      uninitialized ordinary variables, get garbage values, but if you
 *      partially initialize an array, the remaining elements are set to 0.
 */

int arr7[7];                                // result is: {0, 0, 0, 0, 0, 0, 0}
static int arr8[7];                         // result is: {0, 0, 0, 0, 0, 0, 0}

int main(void)
{
    static int arr9[7];                     // result is: {0, 0, 0, 0, 0, 0, 0}

    /* traditional initializers (ANSI C and later) */
    int arr1[7] = {0, 1, 2, 3, 4, 5, 6};    // initialize all elements
    int arr2[7] = {0, 1, 2, 3};             // initialize paritcal elements, result is: {0, 1, 2, 3, 0, 0, 0}


    /* designated initializers (C99 and later) */
    int arr3[7] = {[4] = 5, 6};             // result is: {0, 0, 0, 0, 5, 6, 0}
    int arr4[7] = {0, 1, [4] = 5, [0] = 9}; // result is: {9, 1, 0, 0, 5, 0, 0}

    /* initialize by omitting size */
    int arr5[] = {0, 1, 2, 3, 4, 5, 6};     // same as: arr5[7] = {0, 1, 2, 3, 4, 5, 6};
    int arr6[] = {0, [3]=4, 5};             // result is: {0, 0, 0, 4, 5}

#if 0
    #include <stdio.h>
    for (int i = 0; i < 7; i++)
        printf("%d\n", arr9[i]);
#endif

    return 0;
}
