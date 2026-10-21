#define DEF_func_00185660
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00185660(void *arg0, s64 arg1) {
    s32 temp_v0;

    M2C_FIELD(arg0, s64 *, 0x1080) = arg1;
    temp_v0 = func_00239A20((s32) arg0, arg1);
    if (temp_v0 == 2) {
        M2C_FIELD(arg0, s32 *, 0x48) = temp_v0;
    }
}
