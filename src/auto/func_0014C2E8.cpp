#define DEF_func_0014C2E8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0014C2E8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_0014CA58(arg0, arg1);
    if (temp_v0 != 0) {
        func_0023C9B0(arg1, M2C_FIELD(temp_v0, s32 *, 8));
    }
}
