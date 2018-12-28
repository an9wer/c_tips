/*
 * void XSetWMProperties(
 *      Display *display, Window w,
 *      XTextProperty *window_name, XTextProperty *icon_name,
 *      char **argv, int argc,
 *      XSizeHints *normal_hints, XWMHints *wm_hints, XClassHint *class_hints);
 */

#include "tips.h"
#include "window.h"

void tips_XSetWMPropertyies(void)
{
    TIPS_HEAD;

    Display *display;
    Window window;

    new_display(&display);
    new_window(display, &window);

    XClassHint *cls_hints = NULL;
    XSizeHints *sz_hints = NULL;
    XWMHints *wm_hints = NULL;
    XSetWMProperties(display, window, NULL, NULL, NULL, 0, sz_hints, wm_hints, cls_hints);
}
