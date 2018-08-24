#include "tips.h"
#include "tips_sys_wait.h"

int main(void)
{
    tips_wait_success();
    tips_wait_abort();

    return EXIT_SUCCESS;
}
