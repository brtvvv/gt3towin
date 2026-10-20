#define DEF_func_001CD500
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338A08 __attribute__((section(".data")));

extern "C" void *func_001CD500(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &D_00338A08;
    return arg0;
}
