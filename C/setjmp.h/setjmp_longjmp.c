/*
 * int setjmp(jmp_buf env)
 * void longjmp(jmp_buf env, int val)
 *
 * thx: https://stackoverflow.com/a/14685524
 * thx: http://web.eecs.utk.edu/~huangj/cs360/360/notes/Setjmp/lecture.html
 */

#include "tips.h"

jmp_buf env;

void tips_setjmp_longjmp(void)
{
    TIPS_HEAD;

    if (setjmp(env) == 0)
        longjmp(env, -1);
}
