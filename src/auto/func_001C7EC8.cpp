#define DEF_func_001C7EC8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F018 __attribute__((section(".data")));

extern "C" void *func_001C7EC8(void *arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s1 = arg0 + 0x818;
    temp_s0 = arg0 + 0x800;
    M2C_FIELD(arg0, s32 *, 0x800) = 0;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    M2C_FIELD(temp_s0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0x818) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x14) = &D_0030F018;
    M2C_FIELD(temp_s1, s32 *, 4) = 0;
    M2C_FIELD(temp_s1, s32 *, 0xC) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x10) = 0;
    M2C_FIELD(temp_s1, M2C_UNK **, 0x14) = &D_0030F018;
    M2C_FIELD(temp_s1, s32 *, 8) = 1;
    func_001CD840((s32) temp_s0, 0, 0x20);
    func_001CD868((s32) temp_s0, 0);
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
    func_001CD840((s32) temp_s1, 0, 0x20);
    func_001CD868((s32) temp_s1, 0);
    M2C_FIELD(temp_s1, s32 *, 0xC) = 0;
    return arg0;
}
