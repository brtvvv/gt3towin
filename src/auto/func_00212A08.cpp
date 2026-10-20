#include "m2c.h"
extern "C" M2C_UNK func_0026D350(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00354C58;

extern "C" void func_00212A08(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 > 0) {
        do {
            var_s0 -= 1;
            func_0026D350(&D_00354C58);
        } while (var_s0 > 0);
    }
}
