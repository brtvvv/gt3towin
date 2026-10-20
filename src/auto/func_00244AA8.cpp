#include "m2c.h"
extern "C" M2C_UNK func_00244D30();                            /* extern */
extern "C" M2C_UNK func_00286EC0(s32);                         /* extern */

extern "C" void func_00244AA8(void *arg0) {
    func_00244D30();
    M2C_FIELD(arg0, s32 *, 0xA28) = 0;
    func_00286EC0(M2C_FIELD(arg0, s32 *, 0xA20));
}
