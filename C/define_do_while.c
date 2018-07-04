/*
 * When multiple statements are used in a macro, they should be bound together
 * in a do-while loop syntactically, so the macro can appear safely inside if
 * clauses or other places that expect a single statement or a statement block.
 *
 * thx: https://wiki.sei.cmu.edu/confluence/display/c/PRE10-C.+Wrap+multistatement+macros+in+a+do-while+loop#space-menu-link-content
 */

#include <stdio.h>

#define HELLO_WORLD                                                           \
    do {                                                                      \
        printf("hello ");                                                     \
        printf("world\n");                                                    \
    } while (0)

int main(void)
{
    HELLO_WORLD;
    return 0;
}
