#define DEF_func_00142900
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_00142900(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void (**)(s32, s32), 0) = func_001428F8;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0xE94);
    return arg0;
}
