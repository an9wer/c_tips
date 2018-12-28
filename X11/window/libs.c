#include "tips.h"

void new_display(Display **display)
{
    *display = XOpenDisplay(NULL);
    if (*display == NULL)
        TIPS_PERROR_AND_EXIT_FAILURE;
}

void new_window(Display *display, Window *window)
{
    int screen_number = DefaultScreen(display);
    int display_width = DisplayWidth(display, screen_number);
    int display_height = DisplayHeight(display, screen_number);

    int x = 0, y = 0;
    unsigned int width = display_width / 2;
    unsigned int height = display_height / 2;
    int border_width = 2;

    *window = XCreateSimpleWindow(
        display, RootWindow(display, screen_number),
        x, y, width, height,
        border_width, BlackPixel(display, screen_number),
        WhitePixel(display, screen_number));
}

