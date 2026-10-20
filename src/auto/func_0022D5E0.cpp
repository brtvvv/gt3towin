#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */
extern s32 D_00354530;

extern "C" void func_0022D5E0(void) {
    if (D_00354530 != 0) {
        func_0026D5B8(D_00354530);
        D_00354530 = 0;
    }
}
