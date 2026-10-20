#include "m2c.h"
extern "C" M2C_UNK func_00207B70();                            /* extern */

extern "C" void func_00207B30(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 0) = fparg0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00207B70();
    M2C_FIELD(arg0, f32 *, 0) = fparg0;
}
