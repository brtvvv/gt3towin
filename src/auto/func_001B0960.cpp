#include "m2c.h"
extern "C" s32 func_0026D660(M2C_UNK, M2C_UNK);                /* extern */
extern s32 D_00353D30;

extern "C" void func_001B0960(void) {
    if (D_00353D30 == 0) {
        D_00353D30 = func_0026D660(0x40, 0x20000);
    }
}
