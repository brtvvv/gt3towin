#define DEF_func_001454D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031CF48 __attribute__((section(".data")));

extern "C" s8 *func_001454D0(s32 arg0, s8 *arg1) {
    s32 temp_s1;

    temp_s1 = arg1 + 1;
    *arg1 = 0x2F;
    func_0027FDBC(temp_s1, arg0 + 0x34);
    func_0027F9CC(temp_s1, (s32) &D_0031CF48);
    return arg1;
}
