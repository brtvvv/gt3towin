#define DEF_func_001C01C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335F98 __attribute__((section(".data")));
extern M2C_UNK D_00353F78 __attribute__((section(".data")));
extern s32 D_004B3F20 __attribute__((section(".data")));

extern "C" s32 *func_001C01C0(void) {
    if (D_004B3F20 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B3F20, (s32) &D_00335F98, (s32) &D_00353F78, 1);
    }
    return &D_004B3F20;
}
