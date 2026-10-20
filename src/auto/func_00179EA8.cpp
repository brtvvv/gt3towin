#define DEF_func_00179EA8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00328D28 __attribute__((section(".data")));

extern "C" void *func_00179EA8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x81C) = &D_00328D28;
    func_00179F10((s32) arg0);
    return arg0;
}
