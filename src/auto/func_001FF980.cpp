#include "m2c.h"
extern "C" M2C_UNK func_001FF9F0(s32, f32);                    /* extern */
extern "C" M2C_UNK func_002566C8(f32, f32, f32, f32, f32, f32, f32); /* extern */
extern f32 D_00352064;

extern "C" void func_001FF980(s32 arg0, void *arg1) {
    func_002566C8(M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 0xC), M2C_FIELD(arg1, f32 *, 8), M2C_FIELD(arg1, f32 *, 0x10), M2C_FIELD(arg1, f32 *, 0x14), M2C_FIELD(arg1, f32 *, 0x18));
    func_001FF9F0(arg0, D_00352064);
}
