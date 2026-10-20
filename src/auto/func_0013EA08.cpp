#define DEF_func_0013EA08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031ABE0 __attribute__((section(".data")));

extern "C" s32 func_0013EA08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001BA7C8(arg0, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x100) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0031ABE0;
    return arg0;
}
