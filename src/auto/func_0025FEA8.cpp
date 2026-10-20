#include "m2c.h"
extern "C" s32 func_00286D90();                                /* extern */
extern "C" M2C_UNK func_00286DC0();                            /* extern */
extern "C" M2C_UNK func_00286EC0(s32);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */

extern "C" void func_0025FEA8(void *arg0) {
    func_00286EE0(M2C_FIELD(arg0, s32 *, 0x144));
    M2C_FIELD(arg0, s32 *, 0x140) = func_00286D90();
    func_00286EC0(M2C_FIELD(arg0, s32 *, 0x144));
    func_00286DC0();
}
