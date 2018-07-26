/*
 * void setbuf(FILE *stream, char *buf)
 *
 * The setbuf() function is exactly equivalent to the call:
 *
 *      setvbuf(stream, buf, * buf ? _IOFBF : _IONBF, BUFSIZ)
 *
 * the function doesn't return any value.
 *
 * thx: https://www.gnu.org/software/libc/manual/html_node/Controlling-Buffering.html
 * thx: http://www.crasseux.com/books/ctutorial/Stream-buffering.html#Stream%20buffering
 */

#include <stdio.h>
#include <stdlib.h>

void fill_bufsiz_minus_1(void)
{
    char *str;
    str = malloc(BUFSIZ);
    for (int i = 0; i < BUFSIZ - 1; i++)
        str[i] = '*';
    str[BUFSIZ - 1] = '\0';
    printf("%s", str);          // stdout now is full buffered
    fprintf(stderr, "stderr");  // stderr is unbuffered by default
    fflush(stdout);
}

void fill_bufsiz(void)
{
    char *str;
    str = malloc(BUFSIZ + 1);
    for (int i = 0; i < BUFSIZ; i++)
        str[i] = '-';
    str[BUFSIZ] = '\0';
    printf("%s", str);          // stdout now is full buffered
    fprintf(stderr, "stderr");  // stderr is unbuffered by default
    fflush(stdout);
}

void fill_bufsiz_plus_1(void)
{
    char *str;
    str = malloc(BUFSIZ + 2);
    for (int i = 0; i < BUFSIZ + 1; i++)
        str[i] = '=';
    str[BUFSIZ + 1] = '\0';
    printf("%s", str);          // stdout now is full buffered
    fprintf(stderr, "stderr");  // stderr is unbuffered by default
    fflush(stdout);
}

/*
 * NOTE: fflush() will not clean the buffer content, instead flush buffer
 * content to file, but the buffer content is still there.
 */
int main(void)
{
    char buf[BUFSIZ];

    setbuf(stdout, buf);        // make stdout full buffered
    fill_bufsiz_minus_1();
    fprintf(stderr, "\n");

    setbuf(stdout, buf);        // TODO: recall setbuf will clean buffer?
    fill_bufsiz();
    fprintf(stderr, "\n");

    setbuf(stdout, buf);
    fill_bufsiz_plus_1();
    fprintf(stderr, "\n");

    return EXIT_SUCCESS;
}
