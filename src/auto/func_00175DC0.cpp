#include "m2c.h"
extern "C" M2C_UNK func_00175750();                            /* extern */

extern "C" void func_00175DC0(void *arg0) {
    func_00175750();
    M2C_FIELD(arg0, s32 *, 0x9A4) = 0;
    M2C_FIELD(arg0, f32 *, 0x944) = 10.0f;
}
