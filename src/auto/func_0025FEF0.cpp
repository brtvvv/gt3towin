#include "m2c.h"
extern "C" u32 func_00260AB8();                                /* extern */
extern "C" s32 func_00260AC0(s32);                             /* extern */
extern "C" M2C_UNK func_00286DD0(s32);                         /* extern */
extern "C" M2C_UNK func_00286EC0(s32);                         /* extern */
extern "C" M2C_UNK func_00286EE0(s32);                         /* extern */

extern "C" void func_0025FEF0(void *arg0) {
    s32 temp_s0;

    func_00286EE0(M2C_FIELD(arg0, s32 *, 0x144));
    if (M2C_FIELD(arg0, s32 *, 0x140) == -1) {
        func_00286EC0(M2C_FIELD(arg0, s32 *, 0x144));
        return;
    }
    temp_s0 = func_00260AC0(M2C_FIELD(arg0, s32 *, 0x12C));
    if ((s32) ((u32) (temp_s0 * 0xA) / func_00260AB8()) >= 9) {
        func_00286DD0(M2C_FIELD(arg0, s32 *, 0x140));
        M2C_FIELD(arg0, s32 *, 0x140) = -1;
    }
    func_00286EC0(M2C_FIELD(arg0, s32 *, 0x144));
}
