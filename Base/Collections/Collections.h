#pragma once

#include "Util.h"
#include "Array/Array.h"

module(Collections) {
    ArrayModule Array;
};

Collections RequireCollections() {
    Collections ret = {
            .Array = require(ArrayModule)
    };
    return ret;
}