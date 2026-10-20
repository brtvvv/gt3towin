#define DEF_func_001D6548
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339B30 __attribute__((section(".data")));

extern "C" s32 func_001D6548(s32 arg0, s32 arg1) {
    func_001D6388(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x1F4) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00339B30;
    return arg0;
}
