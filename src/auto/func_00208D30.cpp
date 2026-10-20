#include "m2c.h"
extern "C" M2C_UNK func_00208D70();                            /* extern */

extern "C" void func_00208D30(void *arg0) {
    func_00208D70();
    M2C_FIELD(arg0, f32 *, 4) = -320.0f;
    M2C_FIELD(arg0, f32 *, 8) = 320.0f;
}
