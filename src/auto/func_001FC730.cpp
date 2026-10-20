#include "m2c.h"
extern "C" void func_001FC730(void *arg0, f32 fparg0, f32 fparg1) {
    s32 var_v1;
    void *var_v0;

    var_v0 = arg0 + 8;
    var_v1 = 7;
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) (M2C_FIELD(arg0, f32 *, 0x390) + fparg0);
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + fparg1);
    do {
        var_v1 -= 1;
        M2C_FIELD(var_v0, f32 *, 0x10) = (f32) (M2C_FIELD(var_v0, f32 *, 0x10) + fparg0);
        M2C_FIELD(var_v0, f32 *, 0x14) = (f32) (M2C_FIELD(var_v0, f32 *, 0x14) + fparg1);
        var_v0 += 0x44;
    } while (var_v1 >= 0);
}
