#define DEF_func_001B6CC8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00334BB0 __attribute__((section(".data")));
extern M2C_UNK D_00353ED0 __attribute__((section(".data")));
extern s32 D_004B3EC0 __attribute__((section(".data")));

extern "C" s32 *func_001B6CC8(void) {
    if (D_004B3EC0 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B3EC0, (s32) &D_00334BB0, (s32) &D_00353ED0, 1);
    }
    return &D_004B3EC0;
}
