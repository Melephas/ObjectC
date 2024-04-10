#include <stdint.h>
#include <stdlib.h>
#include "Array.h"


#ifndef ARRAY_BLOCK_SIZE
#define ARRAY_BLOCK_SIZE 16
#endif


static ArrayError get(Array* this, uint64_t index, void** out) {
    if (index >= this->position) return ArrayError_OutOfBounds;
    *out = this->data[index];
    return ArrayError_None;
}

static ArrayError set(Array* this, uint64_t index, void* new_val);
static ArrayError push(Array* this, void* val);
static ArrayError pop(Array* this, void** out);



static Array* new() {
    Array* ret = malloc(sizeof(Array));
    ret->data = calloc(ARRAY_BLOCK_SIZE, sizeof(void*));
    ret->length = ARRAY_BLOCK_SIZE;
    ret->position = 0;

    ret->Get = get;
    ret->Set = set;
    ret->Pop = pop;
    ret->Push = push;

    return ret;
}

static Array* from(void** arr, size_t size);

static void delete(Array** p_array) {

}



ArrayModule RequireArrayModule() {
    ArrayModule ret = {
            .New = new,
            .From = from,
            .Delete = delete
    };

    return ret;
}