#include "m2c.h"
extern "C" void func_00219048(void *arg0) {
    void *temp_v0;

    temp_v0 = arg0 + 0xD8;
    M2C_FIELD(arg0, void **, 0x538) = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0x228) = 0;
}
