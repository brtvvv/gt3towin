#define DEF_func_001B7158
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335208 __attribute__((section(".data")));

extern "C" void *func_001B7158(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0xB58) = &D_00335208;
    func_001C8128((s32) (arg0 + 8));
    func_001C3220((s32) (arg0 + 0xD4), arg1);
    func_001C3220((s32) (arg0 + 0x158), arg1);
    M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    func_001C7EC8((s32) (arg0 + 0x1E4));
    M2C_FIELD(arg0, s32 *, 0xA14) = arg1;
    M2C_FIELD(arg0, s32 *, 0xA18) = 0;
    M2C_FIELD(arg0, s32 *, 0xA1C) = 0;
    M2C_FIELD(arg0, s32 *, 0xAE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAE4) = 0;
    func_001C5C80((s32) (arg0 + 0xAF8));
    M2C_FIELD(arg0, s32 *, 0xAFC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB00) = 0;
    M2C_FIELD(arg0, s32 *, 0xB04) = 0;
    M2C_FIELD(arg0, s32 *, 0xB08) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB10) = 0;
    M2C_FIELD(arg0, s32 *, 0xB14) = 0;
    M2C_FIELD(arg0, s32 *, 0xB18) = 0;
    M2C_FIELD(arg0, s32 *, 0xB1C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB20) = 0;
    M2C_FIELD(arg0, s32 *, 0xB24) = 0;
    M2C_FIELD(arg0, s32 *, 0xB28) = 0;
    M2C_FIELD(arg0, s32 *, 0xB2C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB30) = 0;
    M2C_FIELD(arg0, s32 *, 0xB34) = 0;
    M2C_FIELD(arg0, s32 *, 0xB38) = 0;
    M2C_FIELD(arg0, s32 *, 0xB3C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB40) = 0;
    M2C_FIELD(arg0, s32 *, 0xB44) = 0;
    M2C_FIELD(arg0, s32 *, 0xB48) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB50) = 0;
    return arg0;
}
