#define DEF_func_0026BBC0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0026BBC0(void *arg0, void *arg1, void *arg2) {
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg2, u32 *, 4);
    M2C_FIELD(arg1, u32 *, 4) = temp_v1;
    if (temp_v1 < (u32) M2C_FIELD(arg0, u32 *, 4)) {
        *(s32 *)temp_v1 = arg1;
    }
}
