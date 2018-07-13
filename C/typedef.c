/*
 * The typedef interpretation is performed by the compiler, not the
 * preprocessor (e.i. #define).

 * When using typedef, bear in mind that it does not create new types; instead,
 * it just creates convenient labels.
 *
 */

#include <stdlib.h>

int main(void)
{
    typedef unsigned char byte;
    byte b = 'b';

    // We can omit a tag when using typedef to name a structure type
    typedef struct {
        double x;
        double y;
    } rect;

    /*
     * If two structures are declared without a tag but with identical members
     * (with both member names and types matching), C considers the two
     * structures to be of the same type.
     */
    rect r1 = {3.0, 6.0};
    rect r2 = r1;

    return EXIT_SUCCESS;
}
