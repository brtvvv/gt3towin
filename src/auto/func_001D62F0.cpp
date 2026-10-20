#define DEF_func_001D62F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00339F70 __attribute__((section(".data")));

extern "C" s32 func_001D62F0(s32 arg0, s32 arg1) {
    func_001D6130(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x1F4) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00339F70;
    return arg0;
}
