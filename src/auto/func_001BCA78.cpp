#define DEF_func_001BCA78
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335BE8 __attribute__((section(".data")));

extern "C" void func_001BCA78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &D_00335BE8;
    func_001BC9F0((s32) (arg0 + 0x28), 0);
    if (arg1 & 1) {
        func_001BC3B0((s32) arg0);
    }
}
