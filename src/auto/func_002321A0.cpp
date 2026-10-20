#define DEF_func_002321A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003435C8 __attribute__((section(".data")));
extern M2C_UNK D_00354E88;
extern s32 D_004B4440 __attribute__((section(".data")));

extern "C" s32 *func_002321A0(void) {
    if (D_004B4440 == 0) {
        func_002302E8();
        func_0027D620((s32) &D_004B4440, (s32) &D_003435C8, (s32) &D_00354E88);
    }
    return &D_004B4440;
}
