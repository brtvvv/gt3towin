#include "m2c.h"
extern "C" s32 func_00286D90();                                /* extern */
extern "C" M2C_UNK func_00286DC0();                            /* extern */
extern s32 D_00352498;
extern s32 D_0035249C;

extern "C" void func_00101A00(void) {
    if (D_00352498 != -1) {
        D_0035249C = func_00286D90();
        func_00286DC0();
    }
}
