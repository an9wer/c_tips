/*
 *  thx: https://stackoverflow.com/a/1597426
 *  thx: https://en.wikipedia.org/wiki/Uninitialized_variable
 *
 *  `static storage duration` variable that are not initialized explicitly are
 *  initialized to zero (or null for pointers).
 *  
 */

#include <stdio.h>

int ei;
char ec;
float ef;
double ed;

static int si;
static char sc;
static float sf;
static double sd;

int main(void)
{
    int i;
    char c;
    float f;
    double d;

    printf("int\t%d\n", i);
    printf("char\t%d\n", c);
    printf("float\t%f\n", f);
    printf("double\t%f\n", d);
    printf("\n");
    printf("extern int\t%d\n", ei);
    printf("extern char\t%d\n", ec);
    printf("extern float\t%f\n", ef);
    printf("extern double\t%f\n", ed);
    printf("\n");
    printf("static int\t%d\n", si);
    printf("static char\t%d\n", sc);
    printf("static float\t%f\n", sf);
    printf("static double\t%f\n", sd);

    return 0;
}
