#define DEF_func_001D6200
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033A190 __attribute__((section(".data")));

extern "C" void func_001D6200(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0033A190;
    func_001D6168((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
