#include "m2c.h"
extern "C" M2C_UNK func_001B7340(s32);                         /* extern */
extern "C" M2C_UNK func_001CC3C0(s32);                         /* extern */
extern "C" M2C_UNK func_001CCA38(s32);                         /* extern */
extern "C" M2C_UNK func_00253458(M2C_UNK);                     /* extern */

extern "C" void func_00140110(s32 arg0) {
    func_001B7340(arg0 + 0x2E4);
    func_00253458(2);
    func_001CC3C0(arg0 + 0x28C);
    func_001CCA38(arg0);
}
