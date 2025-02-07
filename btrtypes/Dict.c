#include "Dict.h"
#include <stddef.h>
#include <stdlib.h>

void DictInit(Dict* dict, i32 size, i32 maxStrSize, enum DictTypes type) {
    dict->keys = malloc(sizeof(char*)*size);
    dict->size = size;
    dict->type = type;

    switch (dict->type) {
        case DICT_STRING:
            dict->value = malloc(sizeof(str) * size);
            break;
        case DICT_INT:
            dict->value = malloc(sizeof(i32) * size);
            break;
        case DICT_FLOAT:
            dict->value = malloc(sizeof(f32) * size);
            break;
        case DICT_DOUBLE:
            dict->value = malloc(sizeof(f64) * size);
            break;
        default:
            break;
    }
}
