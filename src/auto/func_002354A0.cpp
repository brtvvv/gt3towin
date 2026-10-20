#include "m2c.h"
extern "C" s32 func_00232700(void *);                          /* extern */
extern "C" s32 func_00232720(void *);                          /* extern */
extern "C" M2C_UNK func_002327C0(s32, u16);                    /* extern */
extern "C" void *func_00235398(s32);                           /* extern */

extern "C" void func_002354A0(s32 arg0) {
    u16 var_a1;
    void *temp_s1;

    temp_s1 = arg0 + 0x1D0;
    if (func_00232700(temp_s1) != 0) {
        var_a1 = M2C_FIELD(func_00235398(arg0), u16 *, 0xF4);
    } else if (func_00232720(temp_s1) != 0) {
        var_a1 = M2C_FIELD(func_00235398(arg0), u16 *, 0x102);
    } else {
        var_a1 = M2C_FIELD(func_00235398(arg0), u16 *, 0xE6);
    }
    func_002327C0(M2C_FIELD(temp_s1, s32 *, 8), var_a1);
}
