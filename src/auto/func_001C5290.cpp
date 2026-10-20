#include "m2c.h"
extern "C" s32 func_001C5230();                                /* extern */
extern "C" M2C_UNK func_0023A280(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_00354730;

extern "C" void func_001C5290(void) {
    func_0023A280(&D_00354730, func_001C5230());
}
