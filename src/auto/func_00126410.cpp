#define DEF_func_00218F60
#define DEF_func_00126410
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00218F60(s32, s32);
extern "C" void func_00126410(s32 unused0, s32 arg1) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = func_00219680() + 0x307C8;
    func_00218F60(temp_s0, arg1);
    M2C_FIELD(temp_s0, s32 *, 0xC4) = 7;
    temp_v0 = func_00219680();
    M2C_FIELD(temp_v0, s32 *, 8) = (s32) (M2C_FIELD(temp_v0, s32 *, 8) + 1);
}
