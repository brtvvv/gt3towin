#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */
extern "C" M2C_UNK func_0027D2F8(s32 *);                       /* extern */

extern "C" void func_001A54E8(s32 *arg0, s32 arg1) {
    func_0026D5B8(*arg0);
    if (arg1 & 1) {
        func_0027D2F8(arg0);
    }
}
