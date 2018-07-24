/*
 * 函数 foo 中定义的两个变量 i 和 pt 都是 automatic storage duration，但将 pt 
 * 从函数 foo 中 return 出来后，我们可以在 main 函数中获取之，也就是说 pt 和 i
 * 没有被回收，想问一下为什么会这样？这两个变量会在什么时候被回收？
 *
 * thx: https://www.geeksforgeeks.org/return-local-array-c-function/
 * thx: https://www.geeksforgeeks.org/are-array-members-deeply-copied/
 * thx: https://stackoverflow.com/questions/4570366/how-to-access-a-local-variable-from-a-different-function-using-pointers
 * thx: https://stackoverflow.com/questions/25798977/returning-string-from-c-function
 */

#include <stdio.h>

int * foo(void)
{
    int i = 11;
    int * pt = &i;
    printf("%p\n", pt);
    return pt;
}

int bar(void)
{
    int i = 12;
    int * pt = &i;
    printf("%p\n", pt);
    return i;
}

int main(void)
{
    int * pt = foo();
    bar();
    printf("%p\n", pt);
    printf("%d\n", *pt);
    return 0;
}
