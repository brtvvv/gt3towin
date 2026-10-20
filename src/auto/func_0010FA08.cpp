#include "m2c.h"
extern "C" M2C_UNK func_001CB000();                            /* extern */

extern "C" void func_0010FA08(void *arg0) {
    s32 var_a1;

    func_001CB000();
    var_a1 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (var_a1 == 2) {
        var_a1 = (M2C_FIELD(arg0, s32 *, 0x12C) != 0) ? 3 : var_a1;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x3A30) = var_a1;
}
