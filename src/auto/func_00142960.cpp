#define DEF_func_00142960
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_00142960(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void (**)(s32, s32), 0) = func_00142958;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0xE9C);
    return arg0;
}
