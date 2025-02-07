#include "Dict.h"
#include "types.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void DictInit(Dict* pDict, const i32 size, const usize maxStringSize) {
    pDict->keys = malloc(sizeof(char*) * size);
    pDict->values = malloc(sizeof(void*) * size);
    pDict->size = size;

    for (int i = 0; i < size; i++) {
        pDict->keys[i] = malloc(maxStringSize);
        if (typeoff(pDict->values[i], str)) {

        }
    }
}

int main(int argc, char *argv[]) {
}
