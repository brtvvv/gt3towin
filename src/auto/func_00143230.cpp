#define DEF_func_00143230
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003530B8 __attribute__((section(".data")));

extern "C" s8 *func_00143230(s32 arg0, s8 *arg1) {
    s32 temp_s0;
    s32 temp_s2;

    temp_s2 = arg0 + 0x34;
    temp_s0 = arg1 + 1;
    *arg1 = 0x2F;
    func_0027FDBC(temp_s0, temp_s2);
    func_0027F9CC(temp_s0, (s32) &D_003530B8);
    func_0027F9CC(temp_s0, temp_s2);
    return arg1;
}
