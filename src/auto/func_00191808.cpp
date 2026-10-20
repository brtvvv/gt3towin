#define DEF_func_00191808
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F830 __attribute__((section(".data")));
extern M2C_UNK D_004B3B60 __attribute__((section(".data")));
extern s32 D_004B3BC0 __attribute__((section(".data")));

extern "C" s32 *func_00191808(void) {
    if (D_004B3BC0 == 0) {
        func_00191870();
        func_0027D620((s32) &D_004B3BC0, (s32) &D_0032F830, (s32) &D_004B3B60);
    }
    return &D_004B3BC0;
}
