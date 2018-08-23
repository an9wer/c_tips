#ifndef TIPS_H
#define TIPS_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TIPS_EXIT_S exit(EXIT_SUCCESS)
#define TIPS_EXIT_F exit(EXIT_FAILURE)

#define TIPS_PERROR_AND_EXIT_F \
    do { \
        fprintf(stderr, "Error(%s:%s:%d): %s\n", \
                __FILE__, __func__, __LINE__, strerror(errno)); \
        exit(EXIT_FAILURE); \
    } while(0)

#endif /* TIPS_H */
