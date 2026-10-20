#define DEF_func_00248E58
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00248E58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    func_00255DD0(M2C_FIELD(arg0, s32 *, 0), 0, 0x40, 0, 0, 0x40, M2C_FIELD(arg0, s32 *, 4), arg1);
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
