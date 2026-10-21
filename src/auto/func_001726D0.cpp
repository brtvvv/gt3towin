#define DEF_func_0023B158
#define DEF_func_0023B0D0
#define DEF_func_001726D0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0023B158(s32);
extern "C" s32 func_0023B0D0(s32);
extern M2C_UNK D_00353610 __attribute__((section(".data")));

extern "C" s8 *func_001726D0(s8 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *arg0 = 0;
        return arg0;
    }
    func_0027FDBC((s32) arg0, func_0023B0D0(arg1));
    func_0027F9CC((s32) arg0, (s32) &D_00353610);
    func_0027F9CC((s32) arg0, func_0023B158(arg1));
    return arg0;
}
