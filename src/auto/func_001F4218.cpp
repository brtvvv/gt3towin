#define DEF_func_001F4218
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001F4218(s32 arg0, s32 unused1, s32 *arg2, s32 *arg3) {
    s32 temp_v0;

    temp_v0 = func_001F41F8(arg0);
    if (temp_v0 != 0) {
        *arg2 = 1;
        *arg3 = temp_v0;
        return 1;
    }
    return 0;
}
