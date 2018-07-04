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
#include <string.h>

int main(void)
{
    int num[20];
    char str[] = "something";
    printf("%zd\n", sizeof num);
    printf("%zd\n", sizeof str);

    return 0;
}
