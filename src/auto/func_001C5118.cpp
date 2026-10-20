#include "m2c.h"
extern "C" M2C_UNK func_00232B30(s32);                         /* extern */

extern "C" void *func_001C5118(void *arg0) {
    func_00232B30(arg0 + 0x1348);
    M2C_FIELD(arg0, s32 *, 0x1530) = 0;
    return arg0;
}
