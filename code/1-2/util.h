#include <stdio.h>

static inline void logger(const char* message){
    printf("log: %s\n", message);
}
