#include "tips.h"
#include "tips_signal.h"

int main(void)
{
    tips_alarm();
    tips_signal();
    tips_raise();

    return EXIT_SUCCESS;
}
