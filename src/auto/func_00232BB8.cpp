#define DEF_func_00232BB8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343C30 __attribute__((section(".data")));

extern "C" void func_00232BB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1DC) = &D_00343C30;
    func_00232368((s32) (arg0 + 0x1D0), 0);
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
