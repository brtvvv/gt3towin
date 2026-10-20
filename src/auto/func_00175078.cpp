#define DEF_func_00175078
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002B31D8 __attribute__((section(".data")));
extern M2C_UNK D_002B3218 __attribute__((section(".data")));
extern M2C_UNK D_003276C0 __attribute__((section(".data")));
extern M2C_UNK D_003276D0 __attribute__((section(".data")));

extern "C" s32 func_00175078(s32 arg0) {
    func_00246830(arg0, (s32) &D_003276C0, (s32) &D_002B31D8, (s32) &D_002B3218, 0xF);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003276D0;
    return arg0;
}
