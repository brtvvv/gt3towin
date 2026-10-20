#include "m2c.h"
extern "C" void func_00247428(void *arg0) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    if (var_v1 >= 0) {
        do {
            temp_v0 = (var_v1 << 5) + M2C_FIELD(arg0, s32 *, 0x2C);
            var_v1 -= 1;
            M2C_FIELD(temp_v0, f32 *, 0) = (f32) (M2C_FIELD(temp_v0, f32 *, 0) + M2C_FIELD(temp_v0, f32 *, 0x10));
            M2C_FIELD(temp_v0, f32 *, 4) = (f32) (M2C_FIELD(temp_v0, f32 *, 4) + M2C_FIELD(temp_v0, f32 *, 0x14));
            M2C_FIELD(temp_v0, f32 *, 8) = (f32) (M2C_FIELD(temp_v0, f32 *, 8) + M2C_FIELD(temp_v0, f32 *, 0x18));
        } while (var_v1 >= 0);
    }
}
