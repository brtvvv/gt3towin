#include "m2c.h"
extern "C" s32 func_00240568(s32, s32);                        /* extern */
extern "C" M2C_UNK func_0026AE48(s32);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */
extern void *D_003548F8;

extern "C" s32 func_00240F30(s32 arg0, s32 arg1) {
    s32 temp_s0;

    func_00286EE0(M2C_FIELD(D_003548F8, s32 *, 0x140C));
    temp_s0 = func_00240568(arg0, arg1);
    func_0026AE48(M2C_FIELD(D_003548F8, s32 *, 0x140C));
    return temp_s0;
}
