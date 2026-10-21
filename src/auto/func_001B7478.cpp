#define DEF_func_001B7478
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003350F0 __attribute__((section(".data")));

extern "C" s32 func_001B7478(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2;

    temp_s2 = arg0 + 8;
    if (func_001C8148(temp_s2, arg1) == 0) {
        func_001D35C0((s32) &D_003350F0, arg1);
    }
    temp_s0 = arg0 + 0xAA0;
    func_0027FDBC(temp_s0, func_001C8680(temp_s2));
    if (func_001C3350(arg0 + 0xD4, temp_s0) == 0) {
        func_001D35C0((s32) &D_003350F0, temp_s0);
    }
    return 1;
}
