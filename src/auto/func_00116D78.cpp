#define DEF_func_00116D78
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F908 __attribute__((section(".data")));
extern M2C_UNK D_00352950 __attribute__((section(".data")));
extern s32 D_004B2F30 __attribute__((section(".data")));

extern "C" s32 *func_00116D78(void) {
    if (D_004B2F30 == 0) {
        func_001CB368();
        func_0027D5F8((s32) &D_004B2F30, (s32) &D_0030F908, (s32) &D_00352950, 1);
    }
    return &D_004B2F30;
}
