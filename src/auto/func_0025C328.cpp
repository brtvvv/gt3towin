#define DEF_func_0025C328
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00347148 __attribute__((section(".data")));

extern "C" void *func_0025C328(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &D_00347148;
    M2C_FIELD(arg0, s32 *, 0) = func_0026AD68(1);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}
