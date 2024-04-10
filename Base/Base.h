#pragma once

#include "Util.h"

#include "IO/IO.h"
#include "Collections/Collections.h"


module(Base) {
    IO IO;
    Collections Collections;
};


Base RequireBase() {
    Base ret = {
            .IO = require(IO),
            .Collections = require(Collections)
    };

    return ret;
}