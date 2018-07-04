/*
 * C provides a compile-time unary operator called sizeof that can be used to
 * compute the size of any object. The expressions:
 *
 *  sizeof object
 *
 * and:
 *
 *  sizeof (type name)
 *
 * Note: Parentheses are required for types but are optional for object.
 */

#include <stdio.h>

int main(void)
{
    printf("char\t%zd\n", sizeof (char));
    printf("short\t%zd\n", sizeof (short));
    printf("int\t%zd\n", sizeof (int));
    printf("long\t%zd\n", sizeof (long));
    printf("float\t%zd\n", sizeof (float));
    printf("double\t%zd\n", sizeof (double));
    printf("long double\t%zd\n", sizeof (long double));

    return 0;
}
