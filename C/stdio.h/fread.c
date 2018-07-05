/*
 * size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
 *
 * Reads data from the given `stream` into the array pointed to by `ptr`. It
 * reads `nmemb` number of elements of size `size`. The total number of bytes
 * read is (size*nmemb).

 * On success the number of elements read is returned. On error or end-of-file
 * the total number of elements successfully read (which may be zero) is
 * returned. 
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    size_t len;
    char buffer[100];

    fp = fopen("/tmp/test.txt", "r");
    if (fp == NULL) {
        perror("Error opening file.");
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    len = (size_t)ftell(fp);
    fseek(fp, 0, SEEK_SET);
    fread(buffer, sizeof (char), len, fp);
    printf("%s", buffer);
    fclose(fp);

    return 0;
}
