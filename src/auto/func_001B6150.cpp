#define DEF_func_001B6150
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00334838 __attribute__((section(".data")));

extern "C" s32 func_001B6150(s32 arg0) {
    func_001C0298(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00334838;
    M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = 320.0f;
    M2C_FIELD(arg0, f32 *, 0x28) = 224.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = -1.0f;
    return arg0;
}
