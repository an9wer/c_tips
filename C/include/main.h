#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define TEST_FILE "/tmp/test.txt"
#define TEST_LINK "/tmp/test.txt.lnk"
#define TEST_STRING "something"

#define EXIT_S exit(EXIT_SUCCESS)
#define EXIT_F exit(EXIT_FAILURE)

#define PERROR fprintf(stderr, "Error: %s:%d:%s\n", __FILE__, __LINE__, __func__)

#endif /* MAIN_H */
