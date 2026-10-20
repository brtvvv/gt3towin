#define DEF_func_0023D1B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00345420 __attribute__((section(".data")));

extern "C" void func_0023D1B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00345420;
    func_0023D440((s32) arg0);
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
