#define DEF_func_001F84D8
#include "m2c.h"
#include "funcs.h"
extern f32 D_00351F80;

extern "C" void func_001F84D8(void *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f1;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 4) + 0xF84;
    temp_f0 = func_001F8468(M2C_FIELD(temp_s1, f32 *, 0x488), fparg0 - D_00351F80, 0.75f, fparg1);
    M2C_FIELD(arg0, f32 *, 0xA0) = temp_f0;
    if ((temp_f0 == 0.0f) && (fparg0 < M2C_FIELD(temp_s1, f32 *, 0x488))) {
        M2C_FIELD(arg0, f32 *, 0xA4) = 1.0f;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xA0);
    if (temp_f1 != 1.0f) {
        if (temp_f1 != 0.0f) {
            M2C_FIELD(arg0, s16 *, 0xAA) = 0xA;
        }
    }
}
