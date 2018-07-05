/*
 * size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
 *
 * Writes data from the array pointed to by `ptr` to the given `stream`. It
 * writes `nmemb` number of elements of size `size`. The total number of bytes
 * written is (size*nmemb).
 *
 * On success the number of elements writen is returned. On error the total
 * number of elements successfully writen (which may be zero) is returned. 
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char str[] = "something\n";

    fp = fopen("/tmp/test.txt", "w");
    fwrite(str, sizeof (char), strlen(str), fp);
    fclose(fp);

    return 0;
}
