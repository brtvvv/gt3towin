#include "m2c.h"
extern "C" M2C_UNK func_0017A100(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern "C" s32 func_001B32C8(s32);                             /* extern */
extern f32 D_00351624;

extern "C" void func_00176F30(void *arg0, s32 arg1) {
    if (func_001B32C8(arg0 + 0xC) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x940) == 0) {
            if (!(M2C_FIELD(arg0, f32 *, 0x94C) < 0.0f)) {

            } else {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD(arg0, f32 *, 0x944) = (f32) (M2C_FIELD(arg0, f32 *, 0x944) - D_00351624);
        }
        if (M2C_FIELD(arg0, f32 *, 0x944) < 0.0f) {
            func_0017A100(arg1 + 0x84, 1, 0, 0);
        }
    }
}
