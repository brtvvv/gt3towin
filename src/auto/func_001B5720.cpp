#include "m2c.h"
extern "C" M2C_UNK func_001B4AF0();                            /* extern */

extern "C" void func_001B5720(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 0x124) = fparg0;
    func_001B4AF0();
}
