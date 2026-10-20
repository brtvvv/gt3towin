#include "m2c.h"
extern "C" M2C_UNK func_001AB470(s32, f32);                    /* extern */
extern "C" M2C_UNK func_00220360(s32);                         /* extern */
extern "C" M2C_UNK func_00256088();                            /* extern */
extern "C" M2C_UNK func_00256108();                            /* extern */

extern "C" void func_001AB580(s32 arg0, f32 fparg0) {
    func_00256088();
    func_001AB470(arg0, fparg0);
    func_00220360(arg0 + 4);
    func_00256108();
}
