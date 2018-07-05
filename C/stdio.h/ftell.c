/*
 * long int ftell(FILE *stream)
 *
 * Returns the current file position of the given stream. If it is a binary
 * stream, then the value is the number of bytes from the beginning of the
 * file. If it is a text stream, then the value is a value useable by the fseek
 * function to return the file position to the current position.
 *
 * On success the current file position is returned. On error a value of -1L is
 * returned and errno is set. 
 */

#include <stdio.h>

 int main(void)
{
    FILE *fp;
    int len;

    fp = fopen("/tmp/test.txt", "r+");
    if (fp == NULL) {
        perror("Error opening file.");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    len = ftell(fp);
    fclose(fp);
    printf("position: %d\n", len);
    #include <string.h>
    printf("%ld\n", strlen("\n"));

    return 0;
}
