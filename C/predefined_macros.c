/*
 * Note: __func__ (C99 and later) is an identifier which has function scope, but
 * others are macros which have file scope.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("__DATE__: %s\n", __DATE__);
    printf("__TIME__: %s\n", __TIME__);
    printf("__LINE__: %d\n", __LINE__);
    printf("__FILE__: %s\n", __FILE__);
    printf("__STDC__: %d\n", __STDC__);
    printf("__STDC_HOSTED__: %d\n", __STDC_HOSTED__);
    printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);

    printf("__func__: %s\n", __func__);

    return EXIT_SUCCESS;
}
