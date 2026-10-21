#define DEF_func_00242B70
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));
extern M2C_UNK D_002F4A10 __attribute__((section(".data")));
extern s32 D_0035492C;
extern M2C_UNK D_004A2678 __attribute__((section(".data")));

extern "C" void func_00242B70(s32 arg0) {
    s32 temp_v0;

    if (D_0035492C == 0) {
        D_0035492C = 1;
        func_0025EF40((s32) &D_004A2678, 0x3180);
        func_0023EF18((s32) &D_002F49E0, 0, arg0, 0);
        func_0023FB00();
        func_0027ED70((s32) &D_002F4A10, 0, 0x58);
        M2C_FIELD(&D_002F4A10, s32 *, 0xC) = 0;
        M2C_FIELD(&D_002F4A10, s32 *, 0x10) = func_0026AD68(0);
        temp_v0 = func_0026D660(0x40, 0x8000);
        M2C_FIELD(&D_002F4A10, s32 *, 8) = temp_v0;
        func_0026AEC8((s32) &D_002F4A10, (s32) func_002422F0, 0, 4, temp_v0, 0x8000);
    }
}
