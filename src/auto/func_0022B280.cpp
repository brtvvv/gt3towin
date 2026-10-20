#include "m2c.h"
extern "C" M2C_UNK func_0022B1A0(f32, f32);                    /* extern */
extern f32 D_00352394;

extern "C" void func_0022B280(f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f0;

    temp_f0 = D_00352394 / fparg2;
    func_0022B1A0(temp_f0 * fparg0, temp_f0 * fparg1);
}
