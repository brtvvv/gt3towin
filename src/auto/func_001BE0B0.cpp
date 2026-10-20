#include "m2c.h"
extern "C" s32 func_001B4820();                                /* extern */
extern "C" M2C_UNK func_0026BCA0(s32, s32, M2C_UNK);           /* extern */

extern "C" void func_001BE0B0(s32 arg0) {
    func_0026BCA0(func_001B4820(), arg0, 0x10);
}
