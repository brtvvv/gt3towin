#define DEF_func_002322E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343640 __attribute__((section(".data")));

extern "C" void *func_002322E8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00343640;
    return arg0;
}
