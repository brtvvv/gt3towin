#include "m2c.h"
extern "C" M2C_UNK func_00251310();                            /* extern */
extern "C" M2C_UNK func_00255058(M2C_UNK, s32, s32, s32);      /* extern */
extern "C" M2C_UNK func_00255348(s32, s32);                    /* extern */
extern "C" M2C_UNK func_00255478(M2C_UNK, M2C_UNK);            /* extern */
extern "C" M2C_UNK func_002556F8(M2C_UNK, M2C_UNK, s32);       /* extern */
extern "C" M2C_UNK func_002557B0();                            /* extern */

extern "C" void func_00245BC0(void *arg0) {
    func_00251310();
    func_002557B0();
    func_00255058(0, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), (M2C_FIELD(arg0, s32 *, 8) + 0x3F) & ~0x3F);
    func_00255348(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
    func_002556F8(0, 0, M2C_FIELD(arg0, s32 *, 8) - 1);
    func_002556F8(1, 0, M2C_FIELD(arg0, s32 *, 0xC) - 1);
    func_00255478(4, 1);
    func_00255478(5, 1);
    func_00255478(1, 0);
    func_00255478(7, 0);
}
