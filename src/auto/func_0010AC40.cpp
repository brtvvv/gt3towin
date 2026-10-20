#define DEF_func_0010AC40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030C860 __attribute__((section(".data")));

extern "C" void *func_0010AC40(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_001058A0((s32) arg0, arg1, M2C_FIELD(arg0, s32 *, 0x4C0), 24.0f);
    M2C_FIELD(temp_v0, s32 *, 0x108) = 0xC;
    func_001BC578((s32) temp_v0, (s32) &D_0030C860);
    return temp_v0;
}
