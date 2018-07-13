#include <stdlib.h>

int main(void)
{
    struct rect {
        double x;
        double y;
    };
    struct rect rect1 = {1.0, 2.0};
    struct rect rect2 = rect1;

    struct {double x; double y;} rect3;

    /* 
     * rect3 and rect1 have the same struct elements (x and y) except the
     * struct tag, but C cannot compile the following code.
     */
    // rect3 = rect1;

    return EXIT_SUCCESS;
}
