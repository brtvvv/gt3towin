#define DEF_func_001AF890
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332B98 __attribute__((section(".data")));
extern M2C_UNK D_00353D18;
extern M2C_UNK D_00353D20;
extern M2C_UNK D_00353D28 __attribute__((section(".data")));

extern "C" s32 func_001AF890(s32 arg0) {
    func_00246830(arg0, (s32) &D_00353D28, (s32) &D_00353D18, (s32) &D_00353D20, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00332B98;
    return arg0;
}
