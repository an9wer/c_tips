#ifndef WINDOW_H
#define WINDOW_H

void new_display(Display **display);
void new_window(Display *display, Window *window);

void tips_XCreateSimpleWindow(void);
void tips_XSetWMPropertyies(void);

#endif /* WINDOW_H */
