#define DEF_func_00202478
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033FD50 __attribute__((section(".data")));

extern "C" void func_00202478(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x0) = &D_0033FD50;
    func_00207628((s32) (arg0 + 0x5D8), 2);
    func_00207628((s32) (arg0 + 0x188), 2);
    func_00200890((s32) arg0, arg1);
}
