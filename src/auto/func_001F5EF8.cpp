#define DEF_func_001F5EF8
#include "m2c.h"
#include "funcs.h"
extern s32 D_0035434C;

extern "C" void func_001F5EF8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_001F53A0((s32) (arg0 + 8), arg1, D_0035434C - 8);
        return;
    }
    func_001F5F38((s32) arg0, 0);
}
