#define DEF_func_00202068
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00202068(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x100) = arg1;
    func_00202098((s32) arg0, 0, 0);
}
