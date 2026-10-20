#define DEF_func_001B1A78
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001B1A78(void *arg0, f32 fparg0) {
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_v0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 != NULL) {
            temp_v0_2 = temp_a0 + 0x2C;
            M2C_FIELD(temp_a0, s32 *, 0x2C) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
            M2C_FIELD(temp_v0_2, f32 *, 8) = (f32) (fparg0 - M2C_FIELD(temp_v0, f32 *, 0x34));
        }
    }
}
