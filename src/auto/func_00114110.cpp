#include "m2c.h"
extern "C" s32 func_001B4820();                                /* extern */
extern "C" M2C_UNK func_001B7510(void *);                      /* extern */
extern "C" M2C_UNK func_0022C490();                            /* extern */
extern "C" M2C_UNK func_0026BFC0(s32, s32);                    /* extern */
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */

extern "C" void func_00114110(void *arg0) {
    func_0026D5B8(M2C_FIELD(arg0, s32 *, 0x3A0C));
    M2C_FIELD(arg0, s32 *, 0x3A0C) = 0;
    func_0022C490();
    func_001B7510(arg0 + 0x2E4);
    func_0026BFC0(func_001B4820(), M2C_FIELD(arg0, s32 *, 0xE44));
    M2C_FIELD(arg0, s32 *, 0xE44) = 0;
    func_0026BFC0(func_001B4820(), M2C_FIELD(arg0, s32 *, 0xE40));
    M2C_FIELD(arg0, s32 *, 0xE40) = 0;
}
