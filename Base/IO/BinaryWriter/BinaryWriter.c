#include <stdlib.h>
#include <printf.h>
#include "BinaryWriter.h"



static void writeByte(BinaryWriter* this, uint8_t byte) {
    printf("%X\n", byte);
}

static void writeBytes(BinaryWriter* this, uint8_t* bytes, uint64_t size) {
    for (int i = 0; i < size; i++) {
        printf("%X ", bytes[i]);
    }
    printf("\n");
}



static BinaryWriter* new() {
    BinaryWriter* ret = malloc(sizeof(BinaryWriter));
    ret->WriteByte = writeByte;
    ret->WriteBytes = writeBytes;
    return ret;
}

static void delete(BinaryWriter** p_instance) {
    free(*p_instance);
    *p_instance = NULL;
}



BinaryWriterModule RequireBinaryWriter() {
    BinaryWriterModule ret = {
            new,
            delete,
    };

    return ret;
}