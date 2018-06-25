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
