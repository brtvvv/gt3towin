#include "m2c.h"
extern "C" M2C_UNK func_001279A0(s32);                         /* extern */
extern "C" M2C_UNK func_00127A18(s32);                         /* extern */
extern "C" M2C_UNK func_00246588(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_00354970;

extern "C" void func_00127A98(s32 arg0) {
    func_00246588(&D_00354970, arg0);
    func_001279A0(arg0);
    func_00127A18(arg0);
}
