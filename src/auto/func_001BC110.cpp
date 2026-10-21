#define DEF_func_001BC110
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));
extern M2C_UNK D_00335978 __attribute__((section(".data")));
extern s32 D_00353F14;

extern "C" void func_001BC110(void) {
    s32 temp_v0;

    temp_v0 = func_0026D660(0x40, func_00242030((s32) &D_00335978, 1, (s32) &D_002F49E0) * 0xB);
    D_00353F14 = temp_v0;
    func_001BC1E8(temp_v0);
}
