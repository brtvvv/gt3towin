#define DEF_func_0016C1C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003254A0 __attribute__((section(".data")));

extern "C" void func_0016C1C8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_003254A0;
    func_001D4FF8((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
