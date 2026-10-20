#define DEF_func_001C00D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335F78 __attribute__((section(".data")));
extern M2C_UNK D_00353F70 __attribute__((section(".data")));
extern s32 D_004B3F30 __attribute__((section(".data")));

extern "C" s32 *func_001C00D8(void) {
    if (D_004B3F30 == 0) {
        func_001CB368();
        func_0027D5F8((s32) &D_004B3F30, (s32) &D_00335F78, (s32) &D_00353F70, 1);
    }
    return &D_004B3F30;
}
