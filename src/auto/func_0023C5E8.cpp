#define DEF_func_0023C5E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F2538 __attribute__((section(".data")));
extern M2C_UNK D_002F2678 __attribute__((section(".data")));
extern M2C_UNK D_00345050 __attribute__((section(".data")));
extern M2C_UNK D_00345060 __attribute__((section(".data")));

extern "C" s32 func_0023C5E8(s32 arg0) {
    func_00246830(arg0, (s32) &D_00345050, (s32) &D_002F2538, (s32) &D_002F2678, 0x50);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00345060;
    return arg0;
}
