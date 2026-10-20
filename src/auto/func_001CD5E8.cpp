#define DEF_func_001CD5E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003389F8 __attribute__((section(".data")));

extern "C" void *func_001CD5E8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_003389F8;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, void **, 8) = (void *) (arg1 + 8);
    M2C_FIELD(arg0, void **, 0) = arg1;
    return arg0;
}
