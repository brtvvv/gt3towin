#define DEF_func_00170688
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00325C48 __attribute__((section(".data")));

extern "C" void func_00170688(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00325C48;
    func_001D6E28((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
