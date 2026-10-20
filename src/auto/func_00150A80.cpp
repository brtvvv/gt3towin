#define DEF_func_00150A80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0049DAB8 __attribute__((section(".data")));

extern "C" void func_00150A80(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;
    void *temp_v0_2;

    temp_v0 = func_0014F950(arg0);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_v0_2 = M2C_FIELD(temp_v0, void **, 8);
        var_v0 = func_0027E260(M2C_FIELD(temp_v0_2, s32 *, 4), (s32) func_00147810, 1, temp_v0 + M2C_FIELD(temp_v0_2, s16 *, 0), (s32) func_00147EC0, temp_v0);
    }
    if (var_v0 != 0) {
        func_0027FDBC((s32) &D_0049DAB8, var_v0 + 0x258);
    }
}
