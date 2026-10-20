#define DEF_func_00126348
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00126348(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00219680() + 0x307C8;
    M2C_FIELD(temp_v0, s32 *, 0xC4) = (s32) M2C_FIELD(temp_v0, s32 *, 0xC8);
    temp_v0_2 = func_00219680();
    M2C_FIELD(temp_v0_2, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 8) + 1);
}
