#define DEF_func_00243160
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));

extern "C" s32 func_00243160(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_002428C8(arg0, 0, 0, 1, (s32) &D_002F49E0);
    func_00243230(temp_v0);
    return temp_v0;
}
