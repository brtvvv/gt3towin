#define DEF_func_001BA100
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001BA100(s32 arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    void *temp_s0;

    temp_s0 = arg0 + 0x210;
    func_002108C8(M2C_FIELD(temp_s0, s32 *, 4), -320.0f, 320.0f, -224.0f, 224.0f, 0.1f, 1000.0f, fparg0);
    func_00210428(M2C_FIELD(temp_s0, s32 *, 4), fparg1, fparg2);
}
