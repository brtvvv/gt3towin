#define DEF_func_00174E60
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00327480 __attribute__((section(".data")));
extern M2C_UNK D_00327490 __attribute__((section(".data")));
extern M2C_UNK D_003536A0;
extern M2C_UNK D_003536B0;

extern "C" s32 func_00174E60(s32 arg0) {
    func_00246830(arg0, (s32) &D_00327480, (s32) &D_003536A0, (s32) &D_003536B0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00327490;
    return arg0;
}
