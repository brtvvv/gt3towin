#include "m2c.h"
extern "C" f32 func_001D7D40();                                /* extern */
extern "C" M2C_UNK func_001D7E98(void *, f32);                 /* extern */
extern "C" M2C_UNK func_001D8110(void *);                      /* extern */

extern "C" void func_001D7F80(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f20;
    void *temp_s1;

    temp_s1 = arg0 + 0x2C;
    temp_f20 = M2C_FIELD(temp_s1, f32 *, 8);
    temp_f0 = func_001D7D40();
    M2C_FIELD(arg0, f32 *, 0x3C) = fparg0;
    func_001D7E98(arg0, temp_f0);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) (temp_f20 - M2C_FIELD(temp_s1, f32 *, 8));
    func_001D8110(arg0);
    M2C_FIELD(arg0, f32 *, 0x188) = 0.0f;
}
