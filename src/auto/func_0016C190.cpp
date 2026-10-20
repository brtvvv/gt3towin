#define DEF_func_0016C190
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003254A0 __attribute__((section(".data")));

extern "C" s32 func_0016C190(s32 arg0, s32 arg1) {
    func_001D4FB8(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_003254A0;
    return arg0;
}
