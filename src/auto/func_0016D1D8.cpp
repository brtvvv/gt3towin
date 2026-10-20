#include "m2c.h"
extern "C" M2C_UNK func_001368A0(s32);                         /* extern */
extern "C" M2C_UNK func_0016E668(s32, s32);                    /* extern */
extern "C" M2C_UNK func_001D5618(void *, s32);                 /* extern */
extern "C" s32 func_001D5BD0();                                /* extern */

extern "C" void func_0016D1D8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_001D5BD0();
    func_001368A0(temp_v0);
    func_0016E668(M2C_FIELD(arg0, s32 *, 0x24C), temp_v0);
    func_001D5618(arg0, arg1);
}
