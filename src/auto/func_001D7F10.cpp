#include "m2c.h"
extern "C" f32 func_001D7CE0();                                /* extern */
extern "C" M2C_UNK func_001D7E20(void *, f32);                 /* extern */
extern "C" M2C_UNK func_001D8110(void *);                      /* extern */

extern "C" void func_001D7F10(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f20;
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    temp_f20 = M2C_FIELD(temp_s1, f32 *, 8);
    temp_f0 = func_001D7CE0();
    M2C_FIELD(arg0, f32 *, 0x38) = fparg0;
    func_001D7E20(arg0, temp_f0);
    M2C_FIELD(arg0, f32 *, 0x184) = (f32) (temp_f20 - M2C_FIELD(temp_s1, f32 *, 8));
    func_001D8110(arg0);
    M2C_FIELD(arg0, f32 *, 0x184) = 0.0f;
}
