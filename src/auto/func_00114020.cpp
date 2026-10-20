#include "m2c.h"
extern "C" M2C_UNK func_001CCA88(void *, void *);              /* extern */
extern "C" M2C_UNK func_001CCC38(void *);                      /* extern */
extern s32 D_00354674;

extern "C" void func_00114020(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x3A2C) == 6) && (D_00354674 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x270) = 1;
    }
    func_001CCA88(arg0, arg0 + 0x28C);
    func_001CCC38(arg0);
}
