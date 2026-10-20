#include "m2c.h"
extern "C" M2C_UNK func_0019C360(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */

extern "C" void func_001A98A8(void *arg0, s32 arg1) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x9FC);
    func_0019C360(arg1, M2C_FIELD(arg0, f32 *, 0x9F0) * temp_f0, M2C_FIELD(arg0, f32 *, 0x9F4) * temp_f0, M2C_FIELD(arg0, f32 *, 0x9F8) * temp_f0, M2C_FIELD(arg0, f32 *, 0xA00), M2C_FIELD(arg0, f32 *, 0xA04), M2C_FIELD(arg0, f32 *, 0xA08), M2C_FIELD(arg0, f32 *, 0xA0C), M2C_FIELD(arg0, f32 *, 0xA10), M2C_FIELD(arg0, f32 *, 0xA14), M2C_FIELD(arg0, f32 *, 0xA18), M2C_FIELD(arg0, f32 *, 0xA1C));
}
