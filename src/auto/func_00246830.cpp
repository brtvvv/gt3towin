#define DEF_func_00246830
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003455F8 __attribute__((section(".data")));
extern void *D_003549BC;

extern "C" void *func_00246830(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 0) = (void *) D_003549BC;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003455F8;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    D_003549BC = arg0;
    return arg0;
}
