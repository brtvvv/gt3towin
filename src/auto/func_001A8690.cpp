#define DEF_func_001A8690
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332278 __attribute__((section(".data")));
extern M2C_UNK D_00354E70;
extern s32 D_004B3DA0 __attribute__((section(".data")));

extern "C" s32 *func_001A8690(void) {
    if (D_004B3DA0 == 0) {
        func_0022D3E0();
        func_0027D620((s32) &D_004B3DA0, (s32) &D_00332278, (s32) &D_00354E70);
    }
    return &D_004B3DA0;
}
