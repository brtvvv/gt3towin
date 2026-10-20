#define DEF_func_0019D268
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FC78 __attribute__((section(".data")));

extern "C" s32 func_0019D268(s32 arg0) {
    func_00197398(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0032FC78;
    M2C_FIELD(arg0, f32 *, 0x1C) = 1.0f;
    M2C_FIELD(arg0, s8 *, 0x12) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}
