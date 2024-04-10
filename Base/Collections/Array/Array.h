#pragma once

#include <stddef.h>
#include "Util.h"


typedef enum {
    ArrayError_None,
    ArrayError_OutOfBounds,
    ArrayError_ReallocationFailed
} ArrayError;


object(Array) {
    void** data;
    uint64_t length;
    uint64_t position;

    ArrayError (*Get)(Array* this, uint64_t index, void** out);
    ArrayError (*Set)(Array* this, uint64_t index, void* new_val);
    ArrayError (*Push)(Array* this, void* val);
    ArrayError (*Pop)(Array* this, void** out);
};

module(ArrayModule) {
    Array* (*New)();
    Array* (*From)(void** arr, size_t size);

    void (*Delete)(Array** p_array);
};

ArrayModule RequireArrayModule();
