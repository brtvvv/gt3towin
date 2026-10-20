#include "m2c.h"
extern "C" M2C_UNK func_001CA720();                            /* extern */
extern "C" M2C_UNK func_001CA7B0();                            /* extern */

extern "C" void func_001CB328(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xBC) == 0) {
        func_001CA7B0();
        return;
    }
    func_001CA720();
}
