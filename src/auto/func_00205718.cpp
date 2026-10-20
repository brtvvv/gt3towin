#define DEF_func_00205718
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003402B0 __attribute__((section(".data")));

extern "C" s32 func_00205718(s32 arg0) {
    func_001FF6B0(arg0);
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003402B0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    return arg0;
}
