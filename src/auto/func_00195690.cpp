#define DEF_func_00195690
#include "m2c.h"
#include "funcs.h"
extern s32 D_002C59E4 __attribute__((section(".data")));
extern M2C_UNK D_00353960 __attribute__((section(".data")));

extern "C" void func_00195690(s32 arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x3BC;
    M2C_FIELD(temp_s0, s32 *, 0x20) = 0x802BCC49;
    func_00199268((s32) temp_s0, (s32) &D_00353960);
    func_001990F0((s32) temp_s0, D_002C59E4, 3.0f, 0.0f);
}
