#define DEF_func_00231398
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343400 __attribute__((section(".data")));
extern M2C_UNK D_00354E88;
extern s32 D_004B4430 __attribute__((section(".data")));

extern "C" s32 *func_00231398(void) {
    if (D_004B4430 == 0) {
        func_002302E8();
        func_0027D620((s32) &D_004B4430, (s32) &D_00343400, (s32) &D_00354E88);
    }
    return &D_004B4430;
}
