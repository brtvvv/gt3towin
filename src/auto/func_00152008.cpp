#define DEF_func_00152008
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031F9F8 __attribute__((section(".data")));
extern M2C_UNK D_0031FA18 __attribute__((section(".data")));
extern s32 D_004B34A0 __attribute__((section(".data")));

extern "C" s32 *func_00152008(void) {
    if (D_004B34A0 == 0) {
        func_00152068();
        func_001520C8();
        func_0027D5F8((s32) &D_004B34A0, (s32) &D_0031F9F8, (s32) &D_0031FA18, 2);
    }
    return &D_004B34A0;
}
