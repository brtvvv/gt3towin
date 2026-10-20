#include "m2c.h"
extern "C" void func_00250EB0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_t0;

    temp_a2 = (arg2 + 3) & ~3;
    temp_t0 = M2C_FIELD(arg0, void **, 0x118);
    M2C_FIELD(temp_t0, s32 *, 0) = (s32) ((temp_a2 >> 2) | 0x30000000);
    M2C_FIELD(arg0, void **, 0x118) = (void *) (temp_t0 + 0x10);
    M2C_FIELD(temp_t0, s32 *, 4) = (s32) (arg1 & 0x0FFFFFFF);
    M2C_FIELD(temp_t0, s32 *, 0xC) = (s32) ((temp_a2 << 0x10) | 0x6E00C080);
    M2C_FIELD(temp_t0, s32 *, 8) = 0;
}
