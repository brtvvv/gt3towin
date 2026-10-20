#define DEF_func_0025C688
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00347170 __attribute__((section(".data")));

extern "C" s32 func_0025C688(s32 arg0) {
    func_0025C328(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &D_00347170;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (arg0 + 0x40);
    M2C_FIELD(arg0, s32 *, 0x30) = 4;
    return arg0;
}
