#define DEF_func_00136A70
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003185E0 __attribute__((section(".data")));

extern "C" s32 func_00136A70(s32 arg0, s32 arg1) {
    func_001B7158(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0xB58) = &D_003185E0;
    return arg0;
}
