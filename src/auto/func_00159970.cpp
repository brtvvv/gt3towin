#define DEF_func_00159970
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003212F8 __attribute__((section(".data")));
extern M2C_UNK D_00321308 __attribute__((section(".data")));
extern M2C_UNK D_003215D0 __attribute__((section(".data")));
extern M2C_UNK D_003215E8 __attribute__((section(".data")));

extern "C" s32 func_00159970(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00159678(arg0, arg1, arg2, arg3, (s32) &D_003212F8, (s32) &D_00321308);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003215D0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003215E8;
    return arg0;
}
