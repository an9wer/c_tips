#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(void)
{
    printf("_SC_VERSION: %ld\n", sysconf(_SC_VERSION));
    printf("_SC_NPROCESSORS_ONLN: %ld\n", sysconf(_SC_NPROCESSORS_ONLN));

    return EXIT_SUCCESS;
}
