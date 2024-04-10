#pragma once

#include "BinaryWriter/BinaryWriter.h"

module(IO) {
    BinaryWriterModule BinaryWriter;
};

IO RequireIO() {
    IO ret = {
            .BinaryWriter = require(BinaryWriter)
    };

    return ret;
}