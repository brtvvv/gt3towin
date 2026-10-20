#include "m2c.h"
extern "C" void func_00191310(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (arg1 & 0xF);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((arg1 >> 8) & 0x3FF);
}
