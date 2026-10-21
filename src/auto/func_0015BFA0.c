#define DEF_func_0015BFA0
#include "m2c.h"
#include "funcs.h"
void func_0015BFA0(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, s32 arg5) {
    s32 temp_a5;

    temp_a5 = arg5 << 0x18;
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg1, s32 *, 0) | temp_a5 | ((M2C_FIELD(arg1, s32 *, 8) << 0x10) | (M2C_FIELD(arg1, s32 *, 4) << 8)));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg2, s32 *, 0) | temp_a5 | ((M2C_FIELD(arg2, s32 *, 8) << 0x10) | (M2C_FIELD(arg2, s32 *, 4) << 8)));
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg3, s32 *, 0) | temp_a5 | ((M2C_FIELD(arg3, s32 *, 8) << 0x10) | (M2C_FIELD(arg3, s32 *, 4) << 8)));
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg4, s32 *, 0) | temp_a5 | ((M2C_FIELD(arg4, s32 *, 8) << 0x10) | (M2C_FIELD(arg4, s32 *, 4) << 8)));
}
