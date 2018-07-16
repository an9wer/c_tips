/*
 * thx: https://stackoverflow.com/questions/2733960/pointer-address-type-casting
 * thx: https://stackoverflow.com/questions/17260527/what-are-the-rules-for-casting-pointers-in-c
 */

#include <stdio.h>

int main(void)
{
    int i = 10;

    int *pi1 = &i;
    int **ppi1 = &pi1;
    printf("%d\n", *pi1);
    printf("%d\n", **ppi1);

    int *pi2 = (int *) &pi1;
    int **ppi2 = (int **) &pi1;
    printf("%d\n", *pi2);
    printf("%d\n", **ppi2);

}
