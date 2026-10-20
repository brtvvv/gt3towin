#define DEF_func_001426E8
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_001426E8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void (**)(s32, s32), 0) = func_001426D8;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (1 - M2C_FIELD(arg1, s32 *, 0xE60));
    return arg0;
}
