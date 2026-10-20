#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */
extern s32 D_00353D30;

extern "C" void func_001B0990(void) {
    if (D_00353D30 != 0) {
        func_0026D5B8(D_00353D30);
        D_00353D30 = 0;
    }
}
