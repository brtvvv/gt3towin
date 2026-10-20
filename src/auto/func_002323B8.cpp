#include "m2c.h"
extern "C" M2C_UNK func_002323F0(s32);                         /* extern */
extern "C" M2C_UNK func_00232438(s32);                         /* extern */
extern "C" M2C_UNK func_00232510();                            /* extern */

extern "C" void func_002323B8(s32 arg0) {
    func_00232510();
    func_002323F0(arg0);
    func_00232438(arg0);
}
