#define DEF_func_00224E30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003428D8 __attribute__((section(".data")));

extern "C" void *func_00224E30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_003428D8;
    return arg0;
}
