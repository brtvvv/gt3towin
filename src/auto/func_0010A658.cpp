#include "m2c.h"
extern "C" f32 func_00105298(s32);                             /* extern */
extern f32 D_0035139C;

extern "C" void func_0010A658(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x3AD0), f32 *, 0x108) = (f32) M2C_FIELD(arg0, f32 *, 0x3AD4);
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3AD0), f32 *, 0x108) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3AD4) - func_00105298(arg1)) - D_0035139C);
}
