#include "m2c.h"
extern "C" M2C_UNK func_001FF9F0(void *, f32);                 /* extern */
extern "C" M2C_UNK func_002566C8(f32, f32, f32, f32, f32, f32, f32); /* extern */
extern f32 D_003520D8;

extern "C" void func_002038A8(void *arg0, void *arg1) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x88);
    func_002566C8(M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 0xC), M2C_FIELD(arg1, f32 *, 8), M2C_FIELD(arg1, f32 *, 0x10) * D_003520D8 * temp_f0, M2C_FIELD(arg1, f32 *, 0x14), M2C_FIELD(arg1, f32 *, 0x18) * temp_f0);
    func_001FF9F0(arg0, M2C_FIELD(arg0, f32 *, 0x88));
}
