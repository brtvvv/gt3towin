#define DEF_func_0018EC50
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032EDB0 __attribute__((section(".data")));
extern M2C_UNK D_00354ED0;
extern s32 D_004B3B00 __attribute__((section(".data")));

extern "C" s32 *func_0018EC50(void) {
    if (D_004B3B00 == 0) {
        func_002441A8();
        func_0027D620((s32) &D_004B3B00, (s32) &D_0032EDB0, (s32) &D_00354ED0);
    }
    return &D_004B3B00;
}
