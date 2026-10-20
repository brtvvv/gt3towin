#include "m2c.h"
extern "C" M2C_UNK func_00285298(s32, s16);                    /* extern */

extern "C" void func_00283E08(void *arg0) {
    func_00285298(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s16 *, 0xE));
}
