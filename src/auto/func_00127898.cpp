#define DEF_func_00127898
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00314040 __attribute__((section(".data")));
extern M2C_UNK D_00352C38;
extern M2C_UNK D_00352C48;
extern M2C_UNK D_00352C50 __attribute__((section(".data")));

extern "C" s32 func_00127898(s32 arg0) {
    func_00246830(arg0, (s32) &D_00352C50, (s32) &D_00352C38, (s32) &D_00352C48, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00314040;
    return arg0;
}
