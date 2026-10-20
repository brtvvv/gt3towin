#define DEF_func_00195740
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003539B0 __attribute__((section(".data")));

extern "C" void func_00195740(void *arg0) {
    void *temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        temp_v0 = arg0 + 0xA2EC;
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0x80D0D0D0;
        func_00198D98((s32) temp_v0, (s32) &D_003539B0, 4.0f, 0.0f);
    }
}
