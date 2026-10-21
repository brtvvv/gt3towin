#define DEF_func_001B3B28
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0049E008 __attribute__((section(".data")));

extern "C" s32 func_001B3B28(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001B3B98((s32) &D_0049E008, 0x35, arg0);
    if (!(temp_v0 == 0)) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return 0x58;
}
