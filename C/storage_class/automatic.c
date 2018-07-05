/*
 * A variable belonging to the automatic storage class has automatic storage
 * duration, block scope, and no linkage.
 */

#include <stdio.h>

/*
 * A C99 feature, is that statements that are part of a loop or if statement
 * qualify as a block even if braces (that is, { }) aren’t used. 
 */
void block_without_braces(void)
{
    for (int i = 1; i < 10; i++)
        printf("%d\n", i);
    // cannot get variable `i` from here
}

/*
 * Automatic variables are not initialized unless you do so explicitly.
 */
void uninitialize_automatic_variables(void)
{
    int i;
    char c;
    float f;
    double d;

    printf("int\t%d\n", i);
    printf("char\t%d\n", c);
    printf("float\t%f\n", f);
    printf("double\t%f\n", d);
}

/*
 *  You can initialize an automatic variable with a non-constant expression,
 *  provided any variables used have been defined previously
 */
void initialize_with_nonconstant_expression(void)
{
    int i = 1;
    int j = 5 * i;      // use previsously defined varibale `i`
}

int main(void)
{
    block_without_braces();
    uninitialize_automatic_variables();
    initialize_with_nonconstant_expression();

    return 0;
}
