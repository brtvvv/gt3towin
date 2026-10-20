#define DEF_func_00230BB8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343370 __attribute__((section(".data")));

extern "C" void func_00230BB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00343370;
    func_002302A8((s32) arg0, arg1);
}
