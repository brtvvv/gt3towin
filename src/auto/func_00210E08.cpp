#include "m2c.h"
extern "C" M2C_UNK func_001D2940(void *, f32);                 /* extern */

extern "C" void func_00210E08(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    temp_a0 = arg0 + 8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + ((M2C_FIELD(arg0, f32 *, 0x2C) - M2C_FIELD(temp_a0, f32 *, 8)) * M2C_FIELD(arg0, f32 *, 0x38)));
    func_001D2940(temp_a0, M2C_FIELD(arg0, f32 *, 0x3C));
    temp_a0_2 = arg0 + 0x14;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + ((M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(temp_a0_2, f32 *, 8)) * M2C_FIELD(arg0, f32 *, 0x38)));
    func_001D2940(temp_a0_2, M2C_FIELD(arg0, f32 *, 0x3C));
    temp_a0_3 = arg0 + 0x20;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + ((M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(temp_a0_3, f32 *, 8)) * M2C_FIELD(arg0, f32 *, 0x38)));
    func_001D2940(temp_a0_3, M2C_FIELD(arg0, f32 *, 0x3C));
}
