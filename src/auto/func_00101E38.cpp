#define DEF_func_00101E38
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00309E38 __attribute__((section(".data")));

extern "C" s32 func_00101E38(s32 arg0) {
    func_00101B60(arg0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00309E38;
    return arg0;
}
