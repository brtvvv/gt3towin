#define DEF_func_00102F50
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A710 __attribute__((section(".data")));

extern "C" s32 func_00102F50(s32 arg0, s32 arg1, s32 arg2) {
    func_001BA8A0(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0030A710;
    M2C_FIELD(arg0, f32 *, 0x100) = 520.0f;
    M2C_FIELD(arg0, f32 *, 0x108) = 16.0f;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    return arg0;
}
