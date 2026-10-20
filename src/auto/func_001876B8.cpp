#define DEF_func_001876B8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001876B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
    func_00237008(arg0 + 0x70, arg1);
}
