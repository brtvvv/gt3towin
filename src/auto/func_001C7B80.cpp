#define DEF_func_001C7B80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003381B8 __attribute__((section(".data")));
extern M2C_UNK D_00354058 __attribute__((section(".data")));
extern s32 D_004B4040 __attribute__((section(".data")));

extern "C" s32 *func_001C7B80(void) {
    if (D_004B4040 == 0) {
        func_001B5758();
        func_0027D5F8((s32) &D_004B4040, (s32) &D_003381B8, (s32) &D_00354058, 1);
    }
    return &D_004B4040;
}
