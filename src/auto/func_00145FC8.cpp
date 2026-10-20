#define DEF_func_00145FC8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D1E8 __attribute__((section(".data")));

extern "C" s32 func_00145FC8(s32 arg0, s32 arg1) {
    func_00144DB0(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031D1E8;
    return arg0;
}
