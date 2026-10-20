#define DEF_func_00232330
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343630 __attribute__((section(".data")));

extern "C" void *func_00232330(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_00343630;
    func_00232398((s32) arg0);
    return arg0;
}
