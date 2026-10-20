#define DEF_func_00225180
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342A40 __attribute__((section(".data")));

extern "C" void func_00225180(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &D_00342A40;
    func_00220C20((s32) (arg0 + 0x94), 2);
    func_00220730((s32) arg0, arg1);
}
