#define DEF_func_002230A8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));
extern s32 D_00354464;

extern "C" void func_002230A8(s32 arg0) {
    s32 temp_v0;

    if (D_00354464 == 0) {
        temp_v0 = func_002428C8(arg0, 0, 0, 1, (s32) &D_002F49E0);
        D_00354464 = temp_v0;
        func_00222E88(temp_v0);
    }
}
