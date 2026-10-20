#include "m2c.h"
extern "C" M2C_UNK func_001BAEA0();                            /* extern */

extern "C" void func_00102FA0(void *arg0) {
    f32 temp_f0;

    func_001BAEA0();
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x104) + 8.0f;
    M2C_FIELD(arg0, f32 *, 0x104) = temp_f0;
    if (temp_f0 > 240.0f) {
        M2C_FIELD(arg0, f32 *, 0x104) = 0.0f;
    }
}
