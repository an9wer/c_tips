#ifndef TIPS_H
#define TIPS_H

#include <sys/wait.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define TIPS_ANSI_RED "\x1b[0;31m"
#define TIPS_ANSI_BLUE "\x1b[0;34m"
#define TIPS_ANSI_RESET "\x1b[0m"

#define TIPS_PERROR_AND_EXIT_FAILURE \
    do { \
        fprintf(stderr, \
                TIPS_ANSI_RED "Error" TIPS_ANSI_RESET "(%s:%s:%d): %s\n", \
                __FILE__, __func__, __LINE__, strerror(errno)); \
        exit(EXIT_FAILURE); \
    } while(0)

#define TIPS_PRINTE_AND_EXIT_FAILURE(msg) \
    do { \
        fprintf(stderr, \
                TIPS_ANSI_RED "Error" TIPS_ANSI_RESET "(%s:%s:%d): %s\n", \
                __FILE__, __func__, __LINE__, msg); \
        exit(EXIT_FAILURE); \
    } while(0)

#define TIPS_HEAD printf("\n" TIPS_ANSI_BLUE "%s" TIPS_ANSI_RESET "\n", __func__)

#endif /* TIPS_H */
