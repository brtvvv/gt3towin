#define DEF_func_002741F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00307508 __attribute__((section(".data")));
extern s32 D_0030750C __attribute__((section(".data")));
extern M2C_UNK D_004AD600 __attribute__((section(".data")));
extern M2C_UNK D_004AEBC0 __attribute__((section(".data")));

extern "C" M2C_UNK *func_002741F8(M2C_UNK **arg0, M2C_UNK **arg1) {
    *arg0 = &D_004AEBC0;
    *arg1 = &D_00307508;
    M2C_FIELD(&D_004AEBC0, s32 *, 0x3C) = (s32) D_0030750C;
    return &D_004AD600;
}
