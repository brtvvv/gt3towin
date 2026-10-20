#define DEF_func_001D37D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339320 __attribute__((section(".data")));

extern "C" s32 func_001D37D0(s32 arg0) {
    func_001C0298(arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00339320;
    return arg0;
}
