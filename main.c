#include "Base.h"

int main(void) {
    Base Base = require(Base);

    uint8_t bytes[] = {0xDE, 0xAD, 0xBE, 0xEF};

    BinaryWriter* writer = Base.IO.BinaryWriter.New();

    writer->WriteBytes(writer, bytes, 4);

    Base.IO.BinaryWriter.Delete(&writer);

    return writer != 0;
}
