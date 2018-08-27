#include "tips.h"
#include "tips_sys_wait.h"

int main(void)
{
    tips_wait_exit();
    tips_wait_signal();

    tips_waitpid();
    tips_waitpid_WNOHANG();

    return EXIT_SUCCESS;
}
