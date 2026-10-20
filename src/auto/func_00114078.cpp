#define DEF_func_00114078
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));
extern M2C_UNK D_0030EE80 __attribute__((section(".data")));
extern M2C_UNK D_0030EE90 __attribute__((section(".data")));

extern "C" void func_00114078(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE40) = func_0026BCA0(func_001B4820(), 0xA8000, 0x40);
    M2C_FIELD(arg0, s32 *, 0xE44) = func_0026BCA0(func_001B4820(), 0xA8000, 0x40);
    func_001B7478((s32) (arg0 + 0x2E4), (s32) &D_0030EE80);
    func_0022C3B8();
    M2C_FIELD(arg0, s32 *, 0x3A0C) = func_002428C8((s32) &D_0030EE90, 0, 0, 1, (s32) &D_002F49E0);
}
