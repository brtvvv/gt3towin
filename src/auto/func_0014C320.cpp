#define DEF_func_0014C320
#include "m2c.h"
#include "funcs.h"
extern s32 D_002B3234 __attribute__((section(".data")));
extern s32 D_002B3238 __attribute__((section(".data")));
extern M2C_UNK D_00353170 __attribute__((section(".data")));

extern "C" void func_0014C320(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_0014CA58(arg0, arg1);
    if (temp_v0 != 0) {
        temp_s0 = M2C_FIELD(temp_v0, s32 *, 0x20);
        func_0026D950(arg1, &D_00353170, temp_s0);
        if (temp_s0 < 2) {
            var_a1 = D_002B3234;
        } else {
            var_a1 = D_002B3238;
        }
        func_0027F9CC(arg1, var_a1);
    }
}
