#include "m2c.h"
extern "C" M2C_UNK func_002609D8(s32);                         /* extern */
extern s32 D_00354AB4;

extern "C" void func_0025FDB8(void *arg0) {
    if (D_00354AB4 != 0) {
        func_002609D8(M2C_FIELD(arg0, s32 *, 0x12C));
    }
}
