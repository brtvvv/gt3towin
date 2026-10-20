#include "m2c.h"
extern "C" M2C_UNK func_0026AE48(s32);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */
extern s32 D_00354A80;

extern "C" s32 func_0025CE10(void *arg0) {
    s32 temp_s0;

    func_00286EE0(D_00354A80);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x3C);
    func_0026AE48(D_00354A80);
    return temp_s0;
}
