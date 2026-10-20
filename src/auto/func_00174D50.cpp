#define DEF_func_00174D50
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002B2ED8 __attribute__((section(".data")));
extern M2C_UNK D_002B2EF0 __attribute__((section(".data")));
extern M2C_UNK D_00327440 __attribute__((section(".data")));
extern M2C_UNK D_00353698 __attribute__((section(".data")));

extern "C" s32 func_00174D50(s32 arg0) {
    func_00246830(arg0, (s32) &D_00353698, (s32) &D_002B2ED8, (s32) &D_002B2EF0, 6);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00327440;
    return arg0;
}
