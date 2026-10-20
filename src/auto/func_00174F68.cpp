#define DEF_func_00174F68
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002B30C8 __attribute__((section(".data")));
extern M2C_UNK D_002B30E0 __attribute__((section(".data")));
extern M2C_UNK D_00327520 __attribute__((section(".data")));
extern M2C_UNK D_00327530 __attribute__((section(".data")));

extern "C" s32 func_00174F68(s32 arg0) {
    func_00246830(arg0, (s32) &D_00327520, (s32) &D_002B30C8, (s32) &D_002B30E0, 6);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00327530;
    return arg0;
}
