#include "tips.h"
#include "tips_unistd.h"

int main(void)
{
    tips_fork_zombie();
    tips_fork_orphan();

    return EXIT_SUCCESS;
}
