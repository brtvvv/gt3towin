#define DEF_func_001D77C0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001D77C0(void *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_a1;
    s32 var_a0;
    void *var_v0;
    void *var_v1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x160);
    if ((arg1 != 0) && (temp_a1 != 0)) {
        func_001D8840((s32) arg0, temp_a1, 0, 0);
        return;
    }
    var_v1 = arg0 + 0x40;
    var_a0 = 3;
    var_v0 = arg0 + 0x120;
    do {
        var_a0 -= 1;
        M2C_FIELD(var_v1, f32 *, 0) = (f32) M2C_FIELD(var_v0, f32 *, 0);
        M2C_FIELD(var_v1, f32 *, 4) = (f32) M2C_FIELD(var_v0, f32 *, 4);
        M2C_FIELD(var_v1, f32 *, 8) = (f32) M2C_FIELD(var_v0, f32 *, 8);
        temp_f0 = M2C_FIELD(var_v0, f32 *, 0xC);
        var_v0 += 0x10;
        M2C_FIELD(var_v1, f32 *, 0xC) = temp_f0;
        var_v1 += 0x10;
    } while (var_a0 != -1);
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    func_001D8748((s32) arg0, 0, 0);
    if (arg1 != 0) {
        func_001D7870((s32) arg0, M2C_FIELD(arg0, f32 *, 0x168));
    }
}
