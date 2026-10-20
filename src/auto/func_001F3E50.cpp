#include "m2c.h"
extern "C" s8 func_00239A20(s32, s64);                         /* extern */

extern "C" void func_001F3E50(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s8 *, 0xB7AD) = func_00239A20(M2C_FIELD(temp_v0, s32 *, 0x28), M2C_FIELD(temp_v0, s64 *, 0x30));
}
