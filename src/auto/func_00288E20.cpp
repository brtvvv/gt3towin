#define DEF_func_00288E20
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00288E20(void *arg0, void *arg1) {
    *(s32 *)((M2C_FIELD(arg0, s32 *, 0x10) * 4) + M2C_FIELD(arg1, s32 *, 0x1C)) = M2C_FIELD(arg0, s32 *, 0x14);
}
