#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */
extern s32 D_0035392C;
extern s32 D_00353930;

extern "C" void func_001906F8(void) {
    if (D_0035392C != 0) {
        func_0026D5B8(D_0035392C);
        D_0035392C = 0;
    }
    if (D_00353930 != 0) {
        func_0026D5B8(D_00353930);
        D_00353930 = 0;
    }
}
