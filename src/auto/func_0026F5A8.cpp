#include "m2c.h"
extern "C" s32 func_0026AD68(M2C_UNK);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */
extern s32 D_00354B78;

extern "C" void func_0026F5A8(void) {
    s32 var_a0;

    var_a0 = D_00354B78;
    if (var_a0 == -1) {
        var_a0 = func_0026AD68(1);
        D_00354B78 = var_a0;
    }
    func_00286EE0(var_a0);
}
