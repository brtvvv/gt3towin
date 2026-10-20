#include "m2c.h"
extern "C" M2C_UNK func_001E9670();                            /* extern */
extern "C" M2C_UNK func_001E9768(s32);                         /* extern */
extern "C" M2C_UNK func_001FB840(s32);                         /* extern */

extern "C" void func_001F4840(s32 arg0) {
    func_001E9670();
    func_001FB840(arg0 + 0xBBB4);
    func_001E9768(arg0);
}
