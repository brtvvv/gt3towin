#define DEF_func_001B3508
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00333358 __attribute__((section(".data")));
extern M2C_UNK D_00333908 __attribute__((section(".data")));

extern "C" void *func_001B3508(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_00333358;
    func_001C0780((s32) (arg0 + 4));
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_00333908;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    return arg0;
}
