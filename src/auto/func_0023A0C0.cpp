#include "m2c.h"
extern "C" M2C_UNK func_0023A118(s32 *, s32, M2C_UNK);         /* extern */
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */
extern "C" s32 func_0026D660(M2C_UNK, M2C_UNK);                /* extern */

extern "C" void func_0023A0C0(s32 *arg0) {
    s32 temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != 0) {
        func_0026D5B8(temp_a0);
    }
    func_0023A118(arg0, func_0026D660(0x40, 0x32000), 0x32000);
}
