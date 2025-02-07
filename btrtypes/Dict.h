#ifndef DICT
#define DICT
#include "types.h"
enum DictTypes {
    DICT_STRING,
    DICT_INT,
    DICT_FLOAT,
    DICT_DOUBLE,
    DICT_UNKOWN,
};

typedef struct {
    str* keys;
    void* value;
    int size;
    int occupied;
    enum DictTypes type;
} Dict;
#endif
