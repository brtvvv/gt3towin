#include "m2c.h"
extern "C" s32 func_002283D8(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
    return (s32) (temp_v0 + M2C_FIELD(temp_v0, s32 *, 0xC) + 0x3F) & 0xFFFFFFC0;
}
