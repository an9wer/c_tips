/*
 * A pointer to void is a "generic" pointer type. A void * can be converted to
 * any other pointer type without an explicit cast. You cannot dereference a
 * void * or do pointer arithmetic with it; you must convert it to a pointer to
 * an complete data type first.
 *
 * thx: https://www.geeksforgeeks.org/void-pointer-c/
 * thx: https://stackoverflow.com/a/11629682
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 10;
    double d = 10.0;
    void * pt;

    pt = &i;    // ok
    printf("%d\n", *(int *)pt);

    pt = &d;    // ok
    printf("%f\n", *(double *)pt);

    return EXIT_SUCCESS;
}
