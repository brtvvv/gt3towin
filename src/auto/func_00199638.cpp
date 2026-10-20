#define DEF_func_00199638
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00199638(void *arg0) {
    s32 temp_s1;

    func_0025B158(0x40000000);
    temp_s1 = func_0019B698((s32) M2C_FIELD(arg0, s16 *, 8), (s32) M2C_FIELD(arg0, s16 *, 0xC), (s32) M2C_FIELD(arg0, u8 *, 0x10));
    func_0019B510(temp_s1, func_0019B698((s32) M2C_FIELD(arg0, s16 *, 0xA), (s32) M2C_FIELD(arg0, s16 *, 0xE), (s32) M2C_FIELD(arg0, u8 *, 0x11)), (s32) M2C_FIELD(arg0, s16 *, 0xC), (s32) M2C_FIELD(arg0, s16 *, 0xE), 3);
}
