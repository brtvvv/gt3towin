#define DEF_func_001F5B28
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F5B28(void *arg0) {
    void *temp_s0;

    if ((M2C_FIELD(arg0, s32 *, 0x28) == 0) && (M2C_FIELD(arg0, s32 *, 0x2C) != 0)) {
        func_001F5758((s32) arg0, M2C_FIELD(arg0, s32 *, 0x34));
        func_001F5758((s32) arg0, 1);
        temp_s0 = M2C_FIELD(arg0, void **, 0x38);
        M2C_FIELD(temp_s0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(temp_s0, s32 *, 4) = (s32) (func_0026DC70((s32) arg0) + 8);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
}
