#pragma once

#include <stdint.h>
#include <stdbool.h>

#include "Util.h"

object(BinaryWriter) {
    void (*WriteByte)(BinaryWriter* this, uint8_t byte);
    void (*WriteBytes)(BinaryWriter* this, uint8_t* bytes, uint64_t size);
};

module(BinaryWriterModule) {
    BinaryWriter* (*New)();
    void (*Delete)(BinaryWriter** p_instance);
};

BinaryWriterModule RequireBinaryWriter();
