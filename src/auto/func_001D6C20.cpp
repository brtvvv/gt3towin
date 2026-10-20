#define DEF_func_001D6C20
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033AA68 __attribute__((section(".data")));
extern s32 D_004B4210 __attribute__((section(".data")));
extern M2C_UNK D_004B4220 __attribute__((section(".data")));

extern "C" s32 *func_001D6C20(void) {
    if (D_004B4210 == 0) {
        func_001D9038();
        func_0027D620((s32) &D_004B4210, (s32) &D_0033AA68, (s32) &D_004B4220);
    }
    return &D_004B4210;
}
