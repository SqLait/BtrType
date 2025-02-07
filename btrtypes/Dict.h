#ifndef DICT
#define DICT
#include "types.h"
typedef struct {
    str* keys;
    void* values;
    int size;
    int occupied;
} Dict;
#endif
