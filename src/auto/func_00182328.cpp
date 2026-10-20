#include "m2c.h"
extern "C" M2C_UNK func_00239520();                            /* extern */
extern "C" s32 func_00239A20(void *, s64);                     /* extern */

extern "C" void func_00182328(void *arg0) {
    s32 temp_v0;

    func_00239520();
    temp_v0 = func_00239A20(arg0, M2C_FIELD(arg0, s64 *, 0x20));
    switch (temp_v0) {                              /* irregular */
    case 2:
        M2C_FIELD(arg0, s32 *, 0x48) = temp_v0;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x48) = 4;
        return;
    }
}
