/*
 * Display *XOpenDisplay(char *display_name);
 */

#include "tips.h"

void tips_XOpenDisplay(void)
{
    TIPS_HEAD;

    Display *display = XOpenDisplay(NULL);
    if (display == NULL)
        TIPS_PERROR_AND_EXIT_FAILURE;

    int screen_number = DefaultScreen(display);

    printf("screen number is %d\n", screen_number);
    printf("display width is %d\n", DisplayWidth(display, screen_number));
    printf("display height is %d\n", DisplayHeight(display, screen_number));
    printf("root window is %ld\n", RootWindow(display, screen_number));
    printf("white pixel is %ld\n", XWhitePixel(display, screen_number));
    printf("black pixel is %ld\n", XBlackPixel(display, screen_number));
}
