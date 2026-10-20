#include "m2c.h"
extern "C" s32 func_0026ACA0(s8 *);                            /* extern */
extern "C" M2C_UNK func_0027F9CC(s8 *, s32);                   /* extern */
extern "C" M2C_UNK func_00280520(s8 *);                        /* extern */

extern "C" s8 *func_0025EB80(void *arg0, s8 *arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s8 *temp_s2;

    *arg1 = 0;
    temp_a1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a1 != 0) {
        func_0027F9CC(arg1, temp_a1);
    }
    temp_s2 = &arg1[func_0026ACA0(arg1)];
    func_0027F9CC(arg1, arg2);
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_00280520(temp_s2);
    }
    temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a1_2 != 0) {
        func_0027F9CC(arg1, temp_a1_2);
    }
    return arg1;
}
