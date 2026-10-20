#define DEF_func_001AF780
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002C58D0 __attribute__((section(".data")));
extern M2C_UNK D_002C59B0 __attribute__((section(".data")));
extern M2C_UNK D_00332B38 __attribute__((section(".data")));
extern M2C_UNK D_00332B48 __attribute__((section(".data")));

extern "C" s32 func_001AF780(s32 arg0) {
    func_00246830(arg0, (s32) &D_00332B38, (s32) &D_002C58D0, (s32) &D_002C59B0, 0x38);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00332B48;
    return arg0;
}
