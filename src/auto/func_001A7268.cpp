#define DEF_func_001A7268
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003321D0 __attribute__((section(".data")));

extern "C" void *func_001A7268(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_003321D0;
    return arg0;
}
