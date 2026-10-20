#define DEF_func_00177B08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00328CB0 __attribute__((section(".data")));

extern "C" s32 func_00177B08(s32 arg0) {
    func_00232B30(arg0);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1DC) = &D_00328CB0;
    return arg0;
}
