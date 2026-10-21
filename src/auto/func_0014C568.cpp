#define DEF_func_0014C568
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00353178 __attribute__((section(".data")));

extern "C" void func_0014C568(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_0014CAF8(arg0, arg1);
    if (temp_v0 != 0) {
        func_0027FDBC(arg1, func_0023B0D0(M2C_FIELD(temp_v0, s64 *, 0x10)));
        func_0027F9CC(arg1, (s32) &D_00353178);
        func_0027F9CC(arg1, func_0023B158(M2C_FIELD(temp_v0, s64 *, 0x10)));
    }
}
